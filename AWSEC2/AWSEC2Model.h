//
// Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License.
// A copy of the License is located at
//
// http://aws.amazon.com/apache2.0
//
// or in the "license" file accompanying this file. This file is distributed
// on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
// express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <AWSCore/AWSNetworking.h>
#import <AWSCore/AWSModel.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const AWSEC2ErrorDomain;

typedef NS_ENUM(NSInteger, AWSEC2ErrorType) {
    AWSEC2ErrorUnknown,
};

typedef NS_ENUM(NSInteger, AWSEC2AccountAttributeName) {
    AWSEC2AccountAttributeNameUnknown,
    AWSEC2AccountAttributeNameSupportedPlatforms,
    AWSEC2AccountAttributeNameDefaultVPC,
};

typedef NS_ENUM(NSInteger, AWSEC2ActivityStatus) {
    AWSEC2ActivityStatusUnknown,
    AWSEC2ActivityStatusError,
    AWSEC2ActivityStatusPendingFulfillment,
    AWSEC2ActivityStatusPendingTermination,
    AWSEC2ActivityStatusFulfilled,
};

typedef NS_ENUM(NSInteger, AWSEC2Affinity) {
    AWSEC2AffinityUnknown,
    AWSEC2AffinityDefault,
    AWSEC2AffinityHost,
};

typedef NS_ENUM(NSInteger, AWSEC2AllocationState) {
    AWSEC2AllocationStateUnknown,
    AWSEC2AllocationStateAvailable,
    AWSEC2AllocationStateUnderAssessment,
    AWSEC2AllocationStatePermanentFailure,
    AWSEC2AllocationStateReleased,
    AWSEC2AllocationStateReleasedPermanentFailure,
};

typedef NS_ENUM(NSInteger, AWSEC2AllocationStrategy) {
    AWSEC2AllocationStrategyUnknown,
    AWSEC2AllocationStrategyLowestPrice,
    AWSEC2AllocationStrategyDiversified,
};

typedef NS_ENUM(NSInteger, AWSEC2ArchitectureValues) {
    AWSEC2ArchitectureValuesUnknown,
    AWSEC2ArchitectureValuesI386,
    AWSEC2ArchitectureValuesX86_64,
};

typedef NS_ENUM(NSInteger, AWSEC2AttachmentStatus) {
    AWSEC2AttachmentStatusUnknown,
    AWSEC2AttachmentStatusAttaching,
    AWSEC2AttachmentStatusAttached,
    AWSEC2AttachmentStatusDetaching,
    AWSEC2AttachmentStatusDetached,
};

typedef NS_ENUM(NSInteger, AWSEC2AutoPlacement) {
    AWSEC2AutoPlacementUnknown,
    AWSEC2AutoPlacementOn,
    AWSEC2AutoPlacementOff,
};

typedef NS_ENUM(NSInteger, AWSEC2AvailabilityZoneState) {
    AWSEC2AvailabilityZoneStateUnknown,
    AWSEC2AvailabilityZoneStateAvailable,
    AWSEC2AvailabilityZoneStateInformation,
    AWSEC2AvailabilityZoneStateImpaired,
    AWSEC2AvailabilityZoneStateUnavailable,
};

typedef NS_ENUM(NSInteger, AWSEC2BatchState) {
    AWSEC2BatchStateUnknown,
    AWSEC2BatchStateSubmitted,
    AWSEC2BatchStateActive,
    AWSEC2BatchStateCancelled,
    AWSEC2BatchStateFailed,
    AWSEC2BatchStateCancelledRunning,
    AWSEC2BatchStateCancelledTerminating,
    AWSEC2BatchStateModifying,
};

typedef NS_ENUM(NSInteger, AWSEC2BundleTaskState) {
    AWSEC2BundleTaskStateUnknown,
    AWSEC2BundleTaskStatePending,
    AWSEC2BundleTaskStateWaitingForShutdown,
    AWSEC2BundleTaskStateBundling,
    AWSEC2BundleTaskStateStoring,
    AWSEC2BundleTaskStateCancelling,
    AWSEC2BundleTaskStateComplete,
    AWSEC2BundleTaskStateFailed,
};

typedef NS_ENUM(NSInteger, AWSEC2CancelBatchErrorCode) {
    AWSEC2CancelBatchErrorCodeUnknown,
    AWSEC2CancelBatchErrorCodeFleetRequestIdDoesNotExist,
    AWSEC2CancelBatchErrorCodeFleetRequestIdMalformed,
    AWSEC2CancelBatchErrorCodeFleetRequestNotInCancellableState,
    AWSEC2CancelBatchErrorCodeUnexpectedError,
};

typedef NS_ENUM(NSInteger, AWSEC2CancelSpotInstanceRequestState) {
    AWSEC2CancelSpotInstanceRequestStateUnknown,
    AWSEC2CancelSpotInstanceRequestStateActive,
    AWSEC2CancelSpotInstanceRequestStateOpen,
    AWSEC2CancelSpotInstanceRequestStateClosed,
    AWSEC2CancelSpotInstanceRequestStateCancelled,
    AWSEC2CancelSpotInstanceRequestStateCompleted,
};

typedef NS_ENUM(NSInteger, AWSEC2ConnectionNotificationState) {
    AWSEC2ConnectionNotificationStateUnknown,
    AWSEC2ConnectionNotificationStateEnabled,
    AWSEC2ConnectionNotificationStateDisabled,
};

typedef NS_ENUM(NSInteger, AWSEC2ConnectionNotificationType) {
    AWSEC2ConnectionNotificationTypeUnknown,
    AWSEC2ConnectionNotificationTypeTopic,
};

typedef NS_ENUM(NSInteger, AWSEC2ContainerFormat) {
    AWSEC2ContainerFormatUnknown,
    AWSEC2ContainerFormatOVA,
};

typedef NS_ENUM(NSInteger, AWSEC2ConversionTaskState) {
    AWSEC2ConversionTaskStateUnknown,
    AWSEC2ConversionTaskStateActive,
    AWSEC2ConversionTaskStateCancelling,
    AWSEC2ConversionTaskStateCancelled,
    AWSEC2ConversionTaskStateCompleted,
};

typedef NS_ENUM(NSInteger, AWSEC2CurrencyCodeValues) {
    AWSEC2CurrencyCodeValuesUnknown,
    AWSEC2CurrencyCodeValuesUSD,
};

typedef NS_ENUM(NSInteger, AWSEC2DatafeedSubscriptionState) {
    AWSEC2DatafeedSubscriptionStateUnknown,
    AWSEC2DatafeedSubscriptionStateActive,
    AWSEC2DatafeedSubscriptionStateInactive,
};

typedef NS_ENUM(NSInteger, AWSEC2DefaultTargetCapacityType) {
    AWSEC2DefaultTargetCapacityTypeUnknown,
    AWSEC2DefaultTargetCapacityTypeSpot,
    AWSEC2DefaultTargetCapacityTypeOnDemand,
};

typedef NS_ENUM(NSInteger, AWSEC2DeleteFleetErrorCode) {
    AWSEC2DeleteFleetErrorCodeUnknown,
    AWSEC2DeleteFleetErrorCodeFleetIdDoesNotExist,
    AWSEC2DeleteFleetErrorCodeFleetIdMalformed,
    AWSEC2DeleteFleetErrorCodeFleetNotInDeletableState,
    AWSEC2DeleteFleetErrorCodeUnexpectedError,
};

typedef NS_ENUM(NSInteger, AWSEC2DeviceType) {
    AWSEC2DeviceTypeUnknown,
    AWSEC2DeviceTypeEBS,
    AWSEC2DeviceTypeInstanceStore,
};

typedef NS_ENUM(NSInteger, AWSEC2DiskImageFormat) {
    AWSEC2DiskImageFormatUnknown,
    AWSEC2DiskImageFormatVMDK,
    AWSEC2DiskImageFormatRAW,
    AWSEC2DiskImageFormatVHD,
};

typedef NS_ENUM(NSInteger, AWSEC2DomainType) {
    AWSEC2DomainTypeUnknown,
    AWSEC2DomainTypeVPC,
    AWSEC2DomainTypeStandard,
};

typedef NS_ENUM(NSInteger, AWSEC2ElasticGpuState) {
    AWSEC2ElasticGpuStateUnknown,
    AWSEC2ElasticGpuStateAttached,
};

typedef NS_ENUM(NSInteger, AWSEC2ElasticGpuStatus) {
    AWSEC2ElasticGpuStatusUnknown,
    AWSEC2ElasticGpuStatusOK,
    AWSEC2ElasticGpuStatusImpaired,
};

typedef NS_ENUM(NSInteger, AWSEC2EventCode) {
    AWSEC2EventCodeUnknown,
    AWSEC2EventCodeInstanceReboot,
    AWSEC2EventCodeSystemReboot,
    AWSEC2EventCodeSystemMaintenance,
    AWSEC2EventCodeInstanceRetirement,
    AWSEC2EventCodeInstanceStop,
};

typedef NS_ENUM(NSInteger, AWSEC2EventType) {
    AWSEC2EventTypeUnknown,
    AWSEC2EventTypeInstanceChange,
    AWSEC2EventTypeFleetRequestChange,
    AWSEC2EventTypeError,
};

typedef NS_ENUM(NSInteger, AWSEC2ExcessCapacityTerminationPolicy) {
    AWSEC2ExcessCapacityTerminationPolicyUnknown,
    AWSEC2ExcessCapacityTerminationPolicyNoTermination,
    AWSEC2ExcessCapacityTerminationPolicyDefault,
};

typedef NS_ENUM(NSInteger, AWSEC2ExportEnvironment) {
    AWSEC2ExportEnvironmentUnknown,
    AWSEC2ExportEnvironmentCitrix,
    AWSEC2ExportEnvironmentVMware,
    AWSEC2ExportEnvironmentMicrosoft,
};

typedef NS_ENUM(NSInteger, AWSEC2ExportTaskState) {
    AWSEC2ExportTaskStateUnknown,
    AWSEC2ExportTaskStateActive,
    AWSEC2ExportTaskStateCancelling,
    AWSEC2ExportTaskStateCancelled,
    AWSEC2ExportTaskStateCompleted,
};

typedef NS_ENUM(NSInteger, AWSEC2FleetActivityStatus) {
    AWSEC2FleetActivityStatusUnknown,
    AWSEC2FleetActivityStatusError,
    AWSEC2FleetActivityStatusPendingFulfillment,
    AWSEC2FleetActivityStatusPendingTermination,
    AWSEC2FleetActivityStatusFulfilled,
};

typedef NS_ENUM(NSInteger, AWSEC2FleetEventType) {
    AWSEC2FleetEventTypeUnknown,
    AWSEC2FleetEventTypeInstanceChange,
    AWSEC2FleetEventTypeFleetChange,
    AWSEC2FleetEventTypeServiceError,
};

typedef NS_ENUM(NSInteger, AWSEC2FleetExcessCapacityTerminationPolicy) {
    AWSEC2FleetExcessCapacityTerminationPolicyUnknown,
    AWSEC2FleetExcessCapacityTerminationPolicyNoTermination,
    AWSEC2FleetExcessCapacityTerminationPolicyTermination,
};

typedef NS_ENUM(NSInteger, AWSEC2FleetStateCode) {
    AWSEC2FleetStateCodeUnknown,
    AWSEC2FleetStateCodeSubmitted,
    AWSEC2FleetStateCodeActive,
    AWSEC2FleetStateCodeDeleted,
    AWSEC2FleetStateCodeFailed,
    AWSEC2FleetStateCodeDeletedRunning,
    AWSEC2FleetStateCodeDeletedTerminating,
    AWSEC2FleetStateCodeModifying,
};

typedef NS_ENUM(NSInteger, AWSEC2FleetType) {
    AWSEC2FleetTypeUnknown,
    AWSEC2FleetTypeRequest,
    AWSEC2FleetTypeMaintain,
};

typedef NS_ENUM(NSInteger, AWSEC2FlowLogsResourceType) {
    AWSEC2FlowLogsResourceTypeUnknown,
    AWSEC2FlowLogsResourceTypeVpc,
    AWSEC2FlowLogsResourceTypeSubnet,
    AWSEC2FlowLogsResourceTypeNetworkInterface,
};

typedef NS_ENUM(NSInteger, AWSEC2FpgaImageAttributeName) {
    AWSEC2FpgaImageAttributeNameUnknown,
    AWSEC2FpgaImageAttributeNameDescription,
    AWSEC2FpgaImageAttributeNameName,
    AWSEC2FpgaImageAttributeNameLoadPermission,
    AWSEC2FpgaImageAttributeNameProductCodes,
};

typedef NS_ENUM(NSInteger, AWSEC2FpgaImageStateCode) {
    AWSEC2FpgaImageStateCodeUnknown,
    AWSEC2FpgaImageStateCodePending,
    AWSEC2FpgaImageStateCodeFailed,
    AWSEC2FpgaImageStateCodeAvailable,
    AWSEC2FpgaImageStateCodeUnavailable,
};

typedef NS_ENUM(NSInteger, AWSEC2GatewayType) {
    AWSEC2GatewayTypeUnknown,
    AWSEC2GatewayTypeIpsec1,
};

typedef NS_ENUM(NSInteger, AWSEC2HostTenancy) {
    AWSEC2HostTenancyUnknown,
    AWSEC2HostTenancyDedicated,
    AWSEC2HostTenancyHost,
};

typedef NS_ENUM(NSInteger, AWSEC2HypervisorType) {
    AWSEC2HypervisorTypeUnknown,
    AWSEC2HypervisorTypeOvm,
    AWSEC2HypervisorTypeXen,
};

typedef NS_ENUM(NSInteger, AWSEC2IamInstanceProfileAssociationState) {
    AWSEC2IamInstanceProfileAssociationStateUnknown,
    AWSEC2IamInstanceProfileAssociationStateAssociating,
    AWSEC2IamInstanceProfileAssociationStateAssociated,
    AWSEC2IamInstanceProfileAssociationStateDisassociating,
    AWSEC2IamInstanceProfileAssociationStateDisassociated,
};

typedef NS_ENUM(NSInteger, AWSEC2ImageAttributeName) {
    AWSEC2ImageAttributeNameUnknown,
    AWSEC2ImageAttributeNameDescription,
    AWSEC2ImageAttributeNameKernel,
    AWSEC2ImageAttributeNameRAMDisk,
    AWSEC2ImageAttributeNameLaunchPermission,
    AWSEC2ImageAttributeNameProductCodes,
    AWSEC2ImageAttributeNameBlockDeviceMapping,
    AWSEC2ImageAttributeNameSriovNetSupport,
};

typedef NS_ENUM(NSInteger, AWSEC2ImageState) {
    AWSEC2ImageStateUnknown,
    AWSEC2ImageStatePending,
    AWSEC2ImageStateAvailable,
    AWSEC2ImageStateInvalid,
    AWSEC2ImageStateDeregistered,
    AWSEC2ImageStateTransient,
    AWSEC2ImageStateFailed,
    AWSEC2ImageStateError,
};

typedef NS_ENUM(NSInteger, AWSEC2ImageTypeValues) {
    AWSEC2ImageTypeValuesUnknown,
    AWSEC2ImageTypeValuesMachine,
    AWSEC2ImageTypeValuesKernel,
    AWSEC2ImageTypeValuesRAMDisk,
};

typedef NS_ENUM(NSInteger, AWSEC2InstanceAttributeName) {
    AWSEC2InstanceAttributeNameUnknown,
    AWSEC2InstanceAttributeNameInstanceType,
    AWSEC2InstanceAttributeNameKernel,
    AWSEC2InstanceAttributeNameRAMDisk,
    AWSEC2InstanceAttributeNameUserData,
    AWSEC2InstanceAttributeNameDisableApiTermination,
    AWSEC2InstanceAttributeNameInstanceInitiatedShutdownBehavior,
    AWSEC2InstanceAttributeNameRootDeviceName,
    AWSEC2InstanceAttributeNameBlockDeviceMapping,
    AWSEC2InstanceAttributeNameProductCodes,
    AWSEC2InstanceAttributeNameSourceDestCheck,
    AWSEC2InstanceAttributeNameGroupSet,
    AWSEC2InstanceAttributeNameEBSOptimized,
    AWSEC2InstanceAttributeNameSriovNetSupport,
    AWSEC2InstanceAttributeNameEnaSupport,
};

typedef NS_ENUM(NSInteger, AWSEC2InstanceHealthStatus) {
    AWSEC2InstanceHealthStatusUnknown,
    AWSEC2InstanceHealthStatusHealthy,
    AWSEC2InstanceHealthStatusUnhealthy,
};

typedef NS_ENUM(NSInteger, AWSEC2InstanceInterruptionBehavior) {
    AWSEC2InstanceInterruptionBehaviorUnknown,
    AWSEC2InstanceInterruptionBehaviorHibernate,
    AWSEC2InstanceInterruptionBehaviorStop,
    AWSEC2InstanceInterruptionBehaviorTerminate,
};

typedef NS_ENUM(NSInteger, AWSEC2InstanceLifecycleType) {
    AWSEC2InstanceLifecycleTypeUnknown,
    AWSEC2InstanceLifecycleTypeSpot,
    AWSEC2InstanceLifecycleTypeScheduled,
};

typedef NS_ENUM(NSInteger, AWSEC2InstanceStateName) {
    AWSEC2InstanceStateNameUnknown,
    AWSEC2InstanceStateNamePending,
    AWSEC2InstanceStateNameRunning,
    AWSEC2InstanceStateNameShuttingDown,
    AWSEC2InstanceStateNameTerminated,
    AWSEC2InstanceStateNameStopping,
    AWSEC2InstanceStateNameStopped,
};

typedef NS_ENUM(NSInteger, AWSEC2InstanceType) {
    AWSEC2InstanceTypeUnknown,
    AWSEC2InstanceTypeT1_micro,
    AWSEC2InstanceTypeT2_nano,
    AWSEC2InstanceTypeT2_micro,
    AWSEC2InstanceTypeT2_small,
    AWSEC2InstanceTypeT2_medium,
    AWSEC2InstanceTypeT2_large,
    AWSEC2InstanceTypeT2_xlarge,
    AWSEC2InstanceTypeT2_2xlarge,
    AWSEC2InstanceTypeM1_small,
    AWSEC2InstanceTypeM1_medium,
    AWSEC2InstanceTypeM1_large,
    AWSEC2InstanceTypeM1_xlarge,
    AWSEC2InstanceTypeM3_medium,
    AWSEC2InstanceTypeM3_large,
    AWSEC2InstanceTypeM3_xlarge,
    AWSEC2InstanceTypeM3_2xlarge,
    AWSEC2InstanceTypeM4_large,
    AWSEC2InstanceTypeM4_xlarge,
    AWSEC2InstanceTypeM4_2xlarge,
    AWSEC2InstanceTypeM4_4xlarge,
    AWSEC2InstanceTypeM4_10xlarge,
    AWSEC2InstanceTypeM4_16xlarge,
    AWSEC2InstanceTypeM2_xlarge,
    AWSEC2InstanceTypeM2_2xlarge,
    AWSEC2InstanceTypeM2_4xlarge,
    AWSEC2InstanceTypeCR1_8xlarge,
    AWSEC2InstanceTypeR3_large,
    AWSEC2InstanceTypeR3_xlarge,
    AWSEC2InstanceTypeR3_2xlarge,
    AWSEC2InstanceTypeR3_4xlarge,
    AWSEC2InstanceTypeR3_8xlarge,
    AWSEC2InstanceTypeR4_large,
    AWSEC2InstanceTypeR4_xlarge,
    AWSEC2InstanceTypeR4_2xlarge,
    AWSEC2InstanceTypeR4_4xlarge,
    AWSEC2InstanceTypeR4_8xlarge,
    AWSEC2InstanceTypeR4_16xlarge,
    AWSEC2InstanceTypeX1_16xlarge,
    AWSEC2InstanceTypeX1_32xlarge,
    AWSEC2InstanceTypeX1E_xlarge,
    AWSEC2InstanceTypeX1E_2xlarge,
    AWSEC2InstanceTypeX1E_4xlarge,
    AWSEC2InstanceTypeX1E_8xlarge,
    AWSEC2InstanceTypeX1E_16xlarge,
    AWSEC2InstanceTypeX1E_32xlarge,
    AWSEC2InstanceTypeI2_xlarge,
    AWSEC2InstanceTypeI2_2xlarge,
    AWSEC2InstanceTypeI2_4xlarge,
    AWSEC2InstanceTypeI2_8xlarge,
    AWSEC2InstanceTypeI3_large,
    AWSEC2InstanceTypeI3_xlarge,
    AWSEC2InstanceTypeI3_2xlarge,
    AWSEC2InstanceTypeI3_4xlarge,
    AWSEC2InstanceTypeI3_8xlarge,
    AWSEC2InstanceTypeI3_16xlarge,
    AWSEC2InstanceTypeI3_metal,
    AWSEC2InstanceTypeHI1_4xlarge,
    AWSEC2InstanceTypeHS1_8xlarge,
    AWSEC2InstanceTypeC1_medium,
    AWSEC2InstanceTypeC1_xlarge,
    AWSEC2InstanceTypeC3_large,
    AWSEC2InstanceTypeC3_xlarge,
    AWSEC2InstanceTypeC3_2xlarge,
    AWSEC2InstanceTypeC3_4xlarge,
    AWSEC2InstanceTypeC3_8xlarge,
    AWSEC2InstanceTypeC4_large,
    AWSEC2InstanceTypeC4_xlarge,
    AWSEC2InstanceTypeC4_2xlarge,
    AWSEC2InstanceTypeC4_4xlarge,
    AWSEC2InstanceTypeC4_8xlarge,
    AWSEC2InstanceTypeC5_large,
    AWSEC2InstanceTypeC5_xlarge,
    AWSEC2InstanceTypeC5_2xlarge,
    AWSEC2InstanceTypeC5_4xlarge,
    AWSEC2InstanceTypeC5_9xlarge,
    AWSEC2InstanceTypeC5_18xlarge,
    AWSEC2InstanceTypeC5D_large,
    AWSEC2InstanceTypeC5D_xlarge,
    AWSEC2InstanceTypeC5D_2xlarge,
    AWSEC2InstanceTypeC5D_4xlarge,
    AWSEC2InstanceTypeC5D_9xlarge,
    AWSEC2InstanceTypeC5D_18xlarge,
    AWSEC2InstanceTypeCC1_4xlarge,
    AWSEC2InstanceTypeCC2_8xlarge,
    AWSEC2InstanceTypeG2_2xlarge,
    AWSEC2InstanceTypeG2_8xlarge,
    AWSEC2InstanceTypeG3_4xlarge,
    AWSEC2InstanceTypeG3_8xlarge,
    AWSEC2InstanceTypeG3_16xlarge,
    AWSEC2InstanceTypeCG1_4xlarge,
    AWSEC2InstanceTypeP2_xlarge,
    AWSEC2InstanceTypeP2_8xlarge,
    AWSEC2InstanceTypeP2_16xlarge,
    AWSEC2InstanceTypeP3_2xlarge,
    AWSEC2InstanceTypeP3_8xlarge,
    AWSEC2InstanceTypeP3_16xlarge,
    AWSEC2InstanceTypeD2_xlarge,
    AWSEC2InstanceTypeD2_2xlarge,
    AWSEC2InstanceTypeD2_4xlarge,
    AWSEC2InstanceTypeD2_8xlarge,
    AWSEC2InstanceTypeF1_2xlarge,
    AWSEC2InstanceTypeF1_16xlarge,
    AWSEC2InstanceTypeM5_large,
    AWSEC2InstanceTypeM5_xlarge,
    AWSEC2InstanceTypeM5_2xlarge,
    AWSEC2InstanceTypeM5_4xlarge,
    AWSEC2InstanceTypeM5_12xlarge,
    AWSEC2InstanceTypeM5_24xlarge,
    AWSEC2InstanceTypeH1_2xlarge,
    AWSEC2InstanceTypeH1_4xlarge,
    AWSEC2InstanceTypeH1_8xlarge,
    AWSEC2InstanceTypeH1_16xlarge,
};

typedef NS_ENUM(NSInteger, AWSEC2InterfacePermissionType) {
    AWSEC2InterfacePermissionTypeUnknown,
    AWSEC2InterfacePermissionTypeInstanceAttach,
    AWSEC2InterfacePermissionTypeEipAssociate,
};

typedef NS_ENUM(NSInteger, AWSEC2LaunchTemplateErrorCode) {
    AWSEC2LaunchTemplateErrorCodeUnknown,
    AWSEC2LaunchTemplateErrorCodeLaunchTemplateIdDoesNotExist,
    AWSEC2LaunchTemplateErrorCodeLaunchTemplateIdMalformed,
    AWSEC2LaunchTemplateErrorCodeLaunchTemplateNameDoesNotExist,
    AWSEC2LaunchTemplateErrorCodeLaunchTemplateNameMalformed,
    AWSEC2LaunchTemplateErrorCodeLaunchTemplateVersionDoesNotExist,
    AWSEC2LaunchTemplateErrorCodeUnexpectedError,
};

typedef NS_ENUM(NSInteger, AWSEC2ListingState) {
    AWSEC2ListingStateUnknown,
    AWSEC2ListingStateAvailable,
    AWSEC2ListingStateSold,
    AWSEC2ListingStateCancelled,
    AWSEC2ListingStatePending,
};

typedef NS_ENUM(NSInteger, AWSEC2ListingStatus) {
    AWSEC2ListingStatusUnknown,
    AWSEC2ListingStatusActive,
    AWSEC2ListingStatusPending,
    AWSEC2ListingStatusCancelled,
    AWSEC2ListingStatusClosed,
};

typedef NS_ENUM(NSInteger, AWSEC2MarketType) {
    AWSEC2MarketTypeUnknown,
    AWSEC2MarketTypeSpot,
};

typedef NS_ENUM(NSInteger, AWSEC2MonitoringState) {
    AWSEC2MonitoringStateUnknown,
    AWSEC2MonitoringStateDisabled,
    AWSEC2MonitoringStateDisabling,
    AWSEC2MonitoringStateEnabled,
    AWSEC2MonitoringStatePending,
};

typedef NS_ENUM(NSInteger, AWSEC2MoveStatus) {
    AWSEC2MoveStatusUnknown,
    AWSEC2MoveStatusMovingToVpc,
    AWSEC2MoveStatusRestoringToClassic,
};

typedef NS_ENUM(NSInteger, AWSEC2NatGatewayState) {
    AWSEC2NatGatewayStateUnknown,
    AWSEC2NatGatewayStatePending,
    AWSEC2NatGatewayStateFailed,
    AWSEC2NatGatewayStateAvailable,
    AWSEC2NatGatewayStateDeleting,
    AWSEC2NatGatewayStateDeleted,
};

typedef NS_ENUM(NSInteger, AWSEC2NetworkInterfaceAttribute) {
    AWSEC2NetworkInterfaceAttributeUnknown,
    AWSEC2NetworkInterfaceAttributeDescription,
    AWSEC2NetworkInterfaceAttributeGroupSet,
    AWSEC2NetworkInterfaceAttributeSourceDestCheck,
    AWSEC2NetworkInterfaceAttributeAttachment,
};

typedef NS_ENUM(NSInteger, AWSEC2NetworkInterfacePermissionStateCode) {
    AWSEC2NetworkInterfacePermissionStateCodeUnknown,
    AWSEC2NetworkInterfacePermissionStateCodePending,
    AWSEC2NetworkInterfacePermissionStateCodeGranted,
    AWSEC2NetworkInterfacePermissionStateCodeRevoking,
    AWSEC2NetworkInterfacePermissionStateCodeRevoked,
};

typedef NS_ENUM(NSInteger, AWSEC2NetworkInterfaceStatus) {
    AWSEC2NetworkInterfaceStatusUnknown,
    AWSEC2NetworkInterfaceStatusAvailable,
    AWSEC2NetworkInterfaceStatusAssociated,
    AWSEC2NetworkInterfaceStatusAttaching,
    AWSEC2NetworkInterfaceStatusInUse,
    AWSEC2NetworkInterfaceStatusDetaching,
};

typedef NS_ENUM(NSInteger, AWSEC2NetworkInterfaceType) {
    AWSEC2NetworkInterfaceTypeUnknown,
    AWSEC2NetworkInterfaceTypeInterface,
    AWSEC2NetworkInterfaceTypeNatGateway,
};

typedef NS_ENUM(NSInteger, AWSEC2OfferingClassType) {
    AWSEC2OfferingClassTypeUnknown,
    AWSEC2OfferingClassTypeStandard,
    AWSEC2OfferingClassTypeConvertible,
};

typedef NS_ENUM(NSInteger, AWSEC2OfferingTypeValues) {
    AWSEC2OfferingTypeValuesUnknown,
    AWSEC2OfferingTypeValuesHeavyUtilization,
    AWSEC2OfferingTypeValuesMediumUtilization,
    AWSEC2OfferingTypeValuesLightUtilization,
    AWSEC2OfferingTypeValuesNoUpfront,
    AWSEC2OfferingTypeValuesPartialUpfront,
    AWSEC2OfferingTypeValuesAllUpfront,
};

typedef NS_ENUM(NSInteger, AWSEC2OperationType) {
    AWSEC2OperationTypeUnknown,
    AWSEC2OperationTypeAdd,
    AWSEC2OperationTypeRemove,
};

typedef NS_ENUM(NSInteger, AWSEC2PaymentOption) {
    AWSEC2PaymentOptionUnknown,
    AWSEC2PaymentOptionAllUpfront,
    AWSEC2PaymentOptionPartialUpfront,
    AWSEC2PaymentOptionNoUpfront,
};

typedef NS_ENUM(NSInteger, AWSEC2PermissionGroup) {
    AWSEC2PermissionGroupUnknown,
    AWSEC2PermissionGroupAll,
};

typedef NS_ENUM(NSInteger, AWSEC2PlacementGroupState) {
    AWSEC2PlacementGroupStateUnknown,
    AWSEC2PlacementGroupStatePending,
    AWSEC2PlacementGroupStateAvailable,
    AWSEC2PlacementGroupStateDeleting,
    AWSEC2PlacementGroupStateDeleted,
};

typedef NS_ENUM(NSInteger, AWSEC2PlacementStrategy) {
    AWSEC2PlacementStrategyUnknown,
    AWSEC2PlacementStrategyCluster,
    AWSEC2PlacementStrategySpread,
};

typedef NS_ENUM(NSInteger, AWSEC2PlatformValues) {
    AWSEC2PlatformValuesUnknown,
    AWSEC2PlatformValuesWindows,
};

typedef NS_ENUM(NSInteger, AWSEC2PrincipalType) {
    AWSEC2PrincipalTypeUnknown,
    AWSEC2PrincipalTypeAll,
    AWSEC2PrincipalTypeService,
    AWSEC2PrincipalTypeOrganizationUnit,
    AWSEC2PrincipalTypeAccount,
    AWSEC2PrincipalTypeUser,
    AWSEC2PrincipalTypeRole,
};

typedef NS_ENUM(NSInteger, AWSEC2ProductCodeValues) {
    AWSEC2ProductCodeValuesUnknown,
    AWSEC2ProductCodeValuesDevpay,
    AWSEC2ProductCodeValuesMarketplace,
};

typedef NS_ENUM(NSInteger, AWSEC2RIProductDescription) {
    AWSEC2RIProductDescriptionUnknown,
    AWSEC2RIProductDescriptionLinuxUNIX,
    AWSEC2RIProductDescriptionLinuxUNIXAmazonVPC,
    AWSEC2RIProductDescriptionWindows,
    AWSEC2RIProductDescriptionWindowsAmazonVPC,
};

typedef NS_ENUM(NSInteger, AWSEC2RecurringChargeFrequency) {
    AWSEC2RecurringChargeFrequencyUnknown,
    AWSEC2RecurringChargeFrequencyHourly,
};

typedef NS_ENUM(NSInteger, AWSEC2ReportInstanceReasonCodes) {
    AWSEC2ReportInstanceReasonCodesUnknown,
    AWSEC2ReportInstanceReasonCodesInstanceStuckInState,
    AWSEC2ReportInstanceReasonCodesUnresponsive,
    AWSEC2ReportInstanceReasonCodesNotAcceptingCredentials,
    AWSEC2ReportInstanceReasonCodesPasswordNotAvailable,
    AWSEC2ReportInstanceReasonCodesPerformanceNetwork,
    AWSEC2ReportInstanceReasonCodesPerformanceInstanceStore,
    AWSEC2ReportInstanceReasonCodesPerformanceEBSVolume,
    AWSEC2ReportInstanceReasonCodesPerformanceOther,
    AWSEC2ReportInstanceReasonCodesOther,
};

typedef NS_ENUM(NSInteger, AWSEC2ReportStatusType) {
    AWSEC2ReportStatusTypeUnknown,
    AWSEC2ReportStatusTypeOK,
    AWSEC2ReportStatusTypeImpaired,
};

typedef NS_ENUM(NSInteger, AWSEC2ReservationState) {
    AWSEC2ReservationStateUnknown,
    AWSEC2ReservationStatePaymentPending,
    AWSEC2ReservationStatePaymentFailed,
    AWSEC2ReservationStateActive,
    AWSEC2ReservationStateRetired,
};

typedef NS_ENUM(NSInteger, AWSEC2ReservedInstanceState) {
    AWSEC2ReservedInstanceStateUnknown,
    AWSEC2ReservedInstanceStatePaymentPending,
    AWSEC2ReservedInstanceStateActive,
    AWSEC2ReservedInstanceStatePaymentFailed,
    AWSEC2ReservedInstanceStateRetired,
};

typedef NS_ENUM(NSInteger, AWSEC2ResetFpgaImageAttributeName) {
    AWSEC2ResetFpgaImageAttributeNameUnknown,
    AWSEC2ResetFpgaImageAttributeNameLoadPermission,
};

typedef NS_ENUM(NSInteger, AWSEC2ResetImageAttributeName) {
    AWSEC2ResetImageAttributeNameUnknown,
    AWSEC2ResetImageAttributeNameLaunchPermission,
};

typedef NS_ENUM(NSInteger, AWSEC2ResourceType) {
    AWSEC2ResourceTypeUnknown,
    AWSEC2ResourceTypeCustomerGateway,
    AWSEC2ResourceTypeDHCPOptions,
    AWSEC2ResourceTypeImage,
    AWSEC2ResourceTypeInstance,
    AWSEC2ResourceTypeInternetGateway,
    AWSEC2ResourceTypeNetworkACL,
    AWSEC2ResourceTypeNetworkInterface,
    AWSEC2ResourceTypeReservedInstances,
    AWSEC2ResourceTypeRouteTable,
    AWSEC2ResourceTypeSnapshot,
    AWSEC2ResourceTypeSpotInstancesRequest,
    AWSEC2ResourceTypeSubnet,
    AWSEC2ResourceTypeSecurityGroup,
    AWSEC2ResourceTypeVolume,
    AWSEC2ResourceTypeVPC,
    AWSEC2ResourceTypeVpnConnection,
    AWSEC2ResourceTypeVpnGateway,
};

typedef NS_ENUM(NSInteger, AWSEC2RouteOrigin) {
    AWSEC2RouteOriginUnknown,
    AWSEC2RouteOriginCreateRouteTable,
    AWSEC2RouteOriginCreateRoute,
    AWSEC2RouteOriginEnableVgwRoutePropagation,
};

typedef NS_ENUM(NSInteger, AWSEC2RouteState) {
    AWSEC2RouteStateUnknown,
    AWSEC2RouteStateActive,
    AWSEC2RouteStateBlackhole,
};

typedef NS_ENUM(NSInteger, AWSEC2RuleAction) {
    AWSEC2RuleActionUnknown,
    AWSEC2RuleActionAllow,
    AWSEC2RuleActionDeny,
};

typedef NS_ENUM(NSInteger, AWSEC2ServiceState) {
    AWSEC2ServiceStateUnknown,
    AWSEC2ServiceStatePending,
    AWSEC2ServiceStateAvailable,
    AWSEC2ServiceStateDeleting,
    AWSEC2ServiceStateDeleted,
    AWSEC2ServiceStateFailed,
};

typedef NS_ENUM(NSInteger, AWSEC2ServiceType) {
    AWSEC2ServiceTypeUnknown,
    AWSEC2ServiceTypeInterface,
    AWSEC2ServiceTypeGateway,
};

typedef NS_ENUM(NSInteger, AWSEC2ShutdownBehavior) {
    AWSEC2ShutdownBehaviorUnknown,
    AWSEC2ShutdownBehaviorStop,
    AWSEC2ShutdownBehaviorTerminate,
};

typedef NS_ENUM(NSInteger, AWSEC2SnapshotAttributeName) {
    AWSEC2SnapshotAttributeNameUnknown,
    AWSEC2SnapshotAttributeNameProductCodes,
    AWSEC2SnapshotAttributeNameCreateVolumePermission,
};

typedef NS_ENUM(NSInteger, AWSEC2SnapshotState) {
    AWSEC2SnapshotStateUnknown,
    AWSEC2SnapshotStatePending,
    AWSEC2SnapshotStateCompleted,
    AWSEC2SnapshotStateError,
};

typedef NS_ENUM(NSInteger, AWSEC2SpotAllocationStrategy) {
    AWSEC2SpotAllocationStrategyUnknown,
    AWSEC2SpotAllocationStrategyLowestPrice,
    AWSEC2SpotAllocationStrategyDiversified,
};

typedef NS_ENUM(NSInteger, AWSEC2SpotInstanceInterruptionBehavior) {
    AWSEC2SpotInstanceInterruptionBehaviorUnknown,
    AWSEC2SpotInstanceInterruptionBehaviorHibernate,
    AWSEC2SpotInstanceInterruptionBehaviorStop,
    AWSEC2SpotInstanceInterruptionBehaviorTerminate,
};

typedef NS_ENUM(NSInteger, AWSEC2SpotInstanceState) {
    AWSEC2SpotInstanceStateUnknown,
    AWSEC2SpotInstanceStateOpen,
    AWSEC2SpotInstanceStateActive,
    AWSEC2SpotInstanceStateClosed,
    AWSEC2SpotInstanceStateCancelled,
    AWSEC2SpotInstanceStateFailed,
};

typedef NS_ENUM(NSInteger, AWSEC2SpotInstanceType) {
    AWSEC2SpotInstanceTypeUnknown,
    AWSEC2SpotInstanceTypeOneTime,
    AWSEC2SpotInstanceTypePersistent,
};

typedef NS_ENUM(NSInteger, AWSEC2State) {
    AWSEC2StateUnknown,
    AWSEC2StatePendingAcceptance,
    AWSEC2StatePending,
    AWSEC2StateAvailable,
    AWSEC2StateDeleting,
    AWSEC2StateDeleted,
    AWSEC2StateRejected,
    AWSEC2StateFailed,
    AWSEC2StateExpired,
};

typedef NS_ENUM(NSInteger, AWSEC2Status) {
    AWSEC2StatusUnknown,
    AWSEC2StatusMoveInProgress,
    AWSEC2StatusInVpc,
    AWSEC2StatusInClassic,
};

typedef NS_ENUM(NSInteger, AWSEC2StatusName) {
    AWSEC2StatusNameUnknown,
    AWSEC2StatusNameReachability,
};

typedef NS_ENUM(NSInteger, AWSEC2StatusType) {
    AWSEC2StatusTypeUnknown,
    AWSEC2StatusTypePassed,
    AWSEC2StatusTypeFailed,
    AWSEC2StatusTypeInsufficientData,
    AWSEC2StatusTypeInitializing,
};

typedef NS_ENUM(NSInteger, AWSEC2SubnetCidrBlockStateCode) {
    AWSEC2SubnetCidrBlockStateCodeUnknown,
    AWSEC2SubnetCidrBlockStateCodeAssociating,
    AWSEC2SubnetCidrBlockStateCodeAssociated,
    AWSEC2SubnetCidrBlockStateCodeDisassociating,
    AWSEC2SubnetCidrBlockStateCodeDisassociated,
    AWSEC2SubnetCidrBlockStateCodeFailing,
    AWSEC2SubnetCidrBlockStateCodeFailed,
};

typedef NS_ENUM(NSInteger, AWSEC2SubnetState) {
    AWSEC2SubnetStateUnknown,
    AWSEC2SubnetStatePending,
    AWSEC2SubnetStateAvailable,
};

typedef NS_ENUM(NSInteger, AWSEC2SummaryStatus) {
    AWSEC2SummaryStatusUnknown,
    AWSEC2SummaryStatusOK,
    AWSEC2SummaryStatusImpaired,
    AWSEC2SummaryStatusInsufficientData,
    AWSEC2SummaryStatusNotApplicable,
    AWSEC2SummaryStatusInitializing,
};

typedef NS_ENUM(NSInteger, AWSEC2TelemetryStatus) {
    AWSEC2TelemetryStatusUnknown,
    AWSEC2TelemetryStatusUp,
    AWSEC2TelemetryStatusDown,
};

typedef NS_ENUM(NSInteger, AWSEC2Tenancy) {
    AWSEC2TenancyUnknown,
    AWSEC2TenancyDefault,
    AWSEC2TenancyDedicated,
    AWSEC2TenancyHost,
};

typedef NS_ENUM(NSInteger, AWSEC2TrafficType) {
    AWSEC2TrafficTypeUnknown,
    AWSEC2TrafficTypeAccept,
    AWSEC2TrafficTypeReject,
    AWSEC2TrafficTypeAll,
};

typedef NS_ENUM(NSInteger, AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCode) {
    AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCodeUnknown,
    AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCodeInvalidInstanceIDMalformed,
    AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCodeInvalidInstanceIDNotFound,
    AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCodeIncorrectInstanceState,
    AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCodeInstanceCreditSpecificationNotSupported,
};

typedef NS_ENUM(NSInteger, AWSEC2VirtualizationType) {
    AWSEC2VirtualizationTypeUnknown,
    AWSEC2VirtualizationTypeHVM,
    AWSEC2VirtualizationTypeParavirtual,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeAttachmentState) {
    AWSEC2VolumeAttachmentStateUnknown,
    AWSEC2VolumeAttachmentStateAttaching,
    AWSEC2VolumeAttachmentStateAttached,
    AWSEC2VolumeAttachmentStateDetaching,
    AWSEC2VolumeAttachmentStateDetached,
    AWSEC2VolumeAttachmentStateBusy,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeAttributeName) {
    AWSEC2VolumeAttributeNameUnknown,
    AWSEC2VolumeAttributeNameAutoEnableIO,
    AWSEC2VolumeAttributeNameProductCodes,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeModificationState) {
    AWSEC2VolumeModificationStateUnknown,
    AWSEC2VolumeModificationStateModifying,
    AWSEC2VolumeModificationStateOptimizing,
    AWSEC2VolumeModificationStateCompleted,
    AWSEC2VolumeModificationStateFailed,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeState) {
    AWSEC2VolumeStateUnknown,
    AWSEC2VolumeStateCreating,
    AWSEC2VolumeStateAvailable,
    AWSEC2VolumeStateInUse,
    AWSEC2VolumeStateDeleting,
    AWSEC2VolumeStateDeleted,
    AWSEC2VolumeStateError,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeStatusInfoStatus) {
    AWSEC2VolumeStatusInfoStatusUnknown,
    AWSEC2VolumeStatusInfoStatusOK,
    AWSEC2VolumeStatusInfoStatusImpaired,
    AWSEC2VolumeStatusInfoStatusInsufficientData,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeStatusName) {
    AWSEC2VolumeStatusNameUnknown,
    AWSEC2VolumeStatusNameIoEnabled,
    AWSEC2VolumeStatusNameIoPerformance,
};

typedef NS_ENUM(NSInteger, AWSEC2VolumeType) {
    AWSEC2VolumeTypeUnknown,
    AWSEC2VolumeTypeStandard,
    AWSEC2VolumeTypeIO1,
    AWSEC2VolumeTypeGp2,
    AWSEC2VolumeTypeSc1,
    AWSEC2VolumeTypeSt1,
};

typedef NS_ENUM(NSInteger, AWSEC2VpcAttributeName) {
    AWSEC2VpcAttributeNameUnknown,
    AWSEC2VpcAttributeNameEnableDNSSupport,
    AWSEC2VpcAttributeNameEnableDNSHostnames,
};

typedef NS_ENUM(NSInteger, AWSEC2VpcCidrBlockStateCode) {
    AWSEC2VpcCidrBlockStateCodeUnknown,
    AWSEC2VpcCidrBlockStateCodeAssociating,
    AWSEC2VpcCidrBlockStateCodeAssociated,
    AWSEC2VpcCidrBlockStateCodeDisassociating,
    AWSEC2VpcCidrBlockStateCodeDisassociated,
    AWSEC2VpcCidrBlockStateCodeFailing,
    AWSEC2VpcCidrBlockStateCodeFailed,
};

typedef NS_ENUM(NSInteger, AWSEC2VpcEndpointType) {
    AWSEC2VpcEndpointTypeUnknown,
    AWSEC2VpcEndpointTypeInterface,
    AWSEC2VpcEndpointTypeGateway,
};

typedef NS_ENUM(NSInteger, AWSEC2VpcPeeringConnectionStateReasonCode) {
    AWSEC2VpcPeeringConnectionStateReasonCodeUnknown,
    AWSEC2VpcPeeringConnectionStateReasonCodeInitiatingRequest,
    AWSEC2VpcPeeringConnectionStateReasonCodePendingAcceptance,
    AWSEC2VpcPeeringConnectionStateReasonCodeActive,
    AWSEC2VpcPeeringConnectionStateReasonCodeDeleted,
    AWSEC2VpcPeeringConnectionStateReasonCodeRejected,
    AWSEC2VpcPeeringConnectionStateReasonCodeFailed,
    AWSEC2VpcPeeringConnectionStateReasonCodeExpired,
    AWSEC2VpcPeeringConnectionStateReasonCodeProvisioning,
    AWSEC2VpcPeeringConnectionStateReasonCodeDeleting,
};

typedef NS_ENUM(NSInteger, AWSEC2VpcState) {
    AWSEC2VpcStateUnknown,
    AWSEC2VpcStatePending,
    AWSEC2VpcStateAvailable,
};

typedef NS_ENUM(NSInteger, AWSEC2VpcTenancy) {
    AWSEC2VpcTenancyUnknown,
    AWSEC2VpcTenancyDefault,
};

typedef NS_ENUM(NSInteger, AWSEC2VpnState) {
    AWSEC2VpnStateUnknown,
    AWSEC2VpnStatePending,
    AWSEC2VpnStateAvailable,
    AWSEC2VpnStateDeleting,
    AWSEC2VpnStateDeleted,
};

typedef NS_ENUM(NSInteger, AWSEC2VpnStaticRouteSource) {
    AWSEC2VpnStaticRouteSourceUnknown,
    AWSEC2VpnStaticRouteSourceStatic,
};

typedef NS_ENUM(NSInteger, AWSEC2scope) {
    AWSEC2scopeUnknown,
    AWSEC2scopeAvailabilityZone,
    AWSEC2scopeRegion,
};

@class AWSEC2AcceptReservedInstancesExchangeQuoteRequest;
@class AWSEC2AcceptReservedInstancesExchangeQuoteResult;
@class AWSEC2AcceptVpcEndpointConnectionsRequest;
@class AWSEC2AcceptVpcEndpointConnectionsResult;
@class AWSEC2AcceptVpcPeeringConnectionRequest;
@class AWSEC2AcceptVpcPeeringConnectionResult;
@class AWSEC2AccountAttribute;
@class AWSEC2AccountAttributeValue;
@class AWSEC2ActiveInstance;
@class AWSEC2Address;
@class AWSEC2AllocateAddressRequest;
@class AWSEC2AllocateAddressResult;
@class AWSEC2AllocateHostsRequest;
@class AWSEC2AllocateHostsResult;
@class AWSEC2AllowedPrincipal;
@class AWSEC2AssignIpv6AddressesRequest;
@class AWSEC2AssignIpv6AddressesResult;
@class AWSEC2AssignPrivateIpAddressesRequest;
@class AWSEC2AssociateAddressRequest;
@class AWSEC2AssociateAddressResult;
@class AWSEC2AssociateDhcpOptionsRequest;
@class AWSEC2AssociateIamInstanceProfileRequest;
@class AWSEC2AssociateIamInstanceProfileResult;
@class AWSEC2AssociateRouteTableRequest;
@class AWSEC2AssociateRouteTableResult;
@class AWSEC2AssociateSubnetCidrBlockRequest;
@class AWSEC2AssociateSubnetCidrBlockResult;
@class AWSEC2AssociateVpcCidrBlockRequest;
@class AWSEC2AssociateVpcCidrBlockResult;
@class AWSEC2AttachClassicLinkVpcRequest;
@class AWSEC2AttachClassicLinkVpcResult;
@class AWSEC2AttachInternetGatewayRequest;
@class AWSEC2AttachNetworkInterfaceRequest;
@class AWSEC2AttachNetworkInterfaceResult;
@class AWSEC2AttachVolumeRequest;
@class AWSEC2AttachVpnGatewayRequest;
@class AWSEC2AttachVpnGatewayResult;
@class AWSEC2AttributeBooleanValue;
@class AWSEC2AttributeValue;
@class AWSEC2AuthorizeSecurityGroupEgressRequest;
@class AWSEC2AuthorizeSecurityGroupIngressRequest;
@class AWSEC2AvailabilityZone;
@class AWSEC2AvailabilityZoneMessage;
@class AWSEC2AvailableCapacity;
@class AWSEC2BlobAttributeValue;
@class AWSEC2BlockDeviceMapping;
@class AWSEC2BundleInstanceRequest;
@class AWSEC2BundleInstanceResult;
@class AWSEC2BundleTask;
@class AWSEC2BundleTaskError;
@class AWSEC2CancelBundleTaskRequest;
@class AWSEC2CancelBundleTaskResult;
@class AWSEC2CancelConversionRequest;
@class AWSEC2CancelExportTaskRequest;
@class AWSEC2CancelImportTaskRequest;
@class AWSEC2CancelImportTaskResult;
@class AWSEC2CancelReservedInstancesListingRequest;
@class AWSEC2CancelReservedInstancesListingResult;
@class AWSEC2CancelSpotFleetRequestsError;
@class AWSEC2CancelSpotFleetRequestsErrorItem;
@class AWSEC2CancelSpotFleetRequestsRequest;
@class AWSEC2CancelSpotFleetRequestsResponse;
@class AWSEC2CancelSpotFleetRequestsSuccessItem;
@class AWSEC2CancelSpotInstanceRequestsRequest;
@class AWSEC2CancelSpotInstanceRequestsResult;
@class AWSEC2CancelledSpotInstanceRequest;
@class AWSEC2CidrBlock;
@class AWSEC2ClassicLinkDnsSupport;
@class AWSEC2ClassicLinkInstance;
@class AWSEC2ClassicLoadBalancer;
@class AWSEC2ClassicLoadBalancersConfig;
@class AWSEC2ClientData;
@class AWSEC2ConfirmProductInstanceRequest;
@class AWSEC2ConfirmProductInstanceResult;
@class AWSEC2ConnectionNotification;
@class AWSEC2ConversionTask;
@class AWSEC2ReplicateFpgaImageRequest;
@class AWSEC2ReplicateFpgaImageResult;
@class AWSEC2ReplicateImageRequest;
@class AWSEC2ReplicateImageResult;
@class AWSEC2ReplicateSnapshotRequest;
@class AWSEC2ReplicateSnapshotResult;
@class AWSEC2CpuOptions;
@class AWSEC2CpuOptionsRequest;
@class AWSEC2CreateCustomerGatewayRequest;
@class AWSEC2CreateCustomerGatewayResult;
@class AWSEC2CreateDefaultSubnetRequest;
@class AWSEC2CreateDefaultSubnetResult;
@class AWSEC2CreateDefaultVpcRequest;
@class AWSEC2CreateDefaultVpcResult;
@class AWSEC2CreateDhcpOptionsRequest;
@class AWSEC2CreateDhcpOptionsResult;
@class AWSEC2CreateEgressOnlyInternetGatewayRequest;
@class AWSEC2CreateEgressOnlyInternetGatewayResult;
@class AWSEC2CreateFleetRequest;
@class AWSEC2CreateFleetResult;
@class AWSEC2CreateFlowLogsRequest;
@class AWSEC2CreateFlowLogsResult;
@class AWSEC2CreateFpgaImageRequest;
@class AWSEC2CreateFpgaImageResult;
@class AWSEC2CreateImageRequest;
@class AWSEC2CreateImageResult;
@class AWSEC2CreateInstanceExportTaskRequest;
@class AWSEC2CreateInstanceExportTaskResult;
@class AWSEC2CreateInternetGatewayRequest;
@class AWSEC2CreateInternetGatewayResult;
@class AWSEC2CreateKeyPairRequest;
@class AWSEC2CreateLaunchTemplateRequest;
@class AWSEC2CreateLaunchTemplateResult;
@class AWSEC2CreateLaunchTemplateVersionRequest;
@class AWSEC2CreateLaunchTemplateVersionResult;
@class AWSEC2CreateNatGatewayRequest;
@class AWSEC2CreateNatGatewayResult;
@class AWSEC2CreateNetworkAclEntryRequest;
@class AWSEC2CreateNetworkAclRequest;
@class AWSEC2CreateNetworkAclResult;
@class AWSEC2CreateNetworkInterfacePermissionRequest;
@class AWSEC2CreateNetworkInterfacePermissionResult;
@class AWSEC2CreateNetworkInterfaceRequest;
@class AWSEC2CreateNetworkInterfaceResult;
@class AWSEC2CreatePlacementGroupRequest;
@class AWSEC2CreateReservedInstancesListingRequest;
@class AWSEC2CreateReservedInstancesListingResult;
@class AWSEC2CreateRouteRequest;
@class AWSEC2CreateRouteResult;
@class AWSEC2CreateRouteTableRequest;
@class AWSEC2CreateRouteTableResult;
@class AWSEC2CreateSecurityGroupRequest;
@class AWSEC2CreateSecurityGroupResult;
@class AWSEC2CreateSnapshotRequest;
@class AWSEC2CreateSpotDatafeedSubscriptionRequest;
@class AWSEC2CreateSpotDatafeedSubscriptionResult;
@class AWSEC2CreateSubnetRequest;
@class AWSEC2CreateSubnetResult;
@class AWSEC2CreateTagsRequest;
@class AWSEC2CreateVolumePermission;
@class AWSEC2CreateVolumePermissionModifications;
@class AWSEC2CreateVolumeRequest;
@class AWSEC2CreateVpcEndpointConnectionNotificationRequest;
@class AWSEC2CreateVpcEndpointConnectionNotificationResult;
@class AWSEC2CreateVpcEndpointRequest;
@class AWSEC2CreateVpcEndpointResult;
@class AWSEC2CreateVpcEndpointServiceConfigurationRequest;
@class AWSEC2CreateVpcEndpointServiceConfigurationResult;
@class AWSEC2CreateVpcPeeringConnectionRequest;
@class AWSEC2CreateVpcPeeringConnectionResult;
@class AWSEC2CreateVpcRequest;
@class AWSEC2CreateVpcResult;
@class AWSEC2CreateVpnConnectionRequest;
@class AWSEC2CreateVpnConnectionResult;
@class AWSEC2CreateVpnConnectionRouteRequest;
@class AWSEC2CreateVpnGatewayRequest;
@class AWSEC2CreateVpnGatewayResult;
@class AWSEC2CreditSpecification;
@class AWSEC2CreditSpecificationRequest;
@class AWSEC2CustomerGateway;
@class AWSEC2DeleteCustomerGatewayRequest;
@class AWSEC2DeleteDhcpOptionsRequest;
@class AWSEC2DeleteEgressOnlyInternetGatewayRequest;
@class AWSEC2DeleteEgressOnlyInternetGatewayResult;
@class AWSEC2DeleteFleetError;
@class AWSEC2DeleteFleetErrorItem;
@class AWSEC2DeleteFleetSuccessItem;
@class AWSEC2DeleteFleetsRequest;
@class AWSEC2DeleteFleetsResult;
@class AWSEC2DeleteFlowLogsRequest;
@class AWSEC2DeleteFlowLogsResult;
@class AWSEC2DeleteFpgaImageRequest;
@class AWSEC2DeleteFpgaImageResult;
@class AWSEC2DeleteInternetGatewayRequest;
@class AWSEC2DeleteKeyPairRequest;
@class AWSEC2DeleteLaunchTemplateRequest;
@class AWSEC2DeleteLaunchTemplateResult;
@class AWSEC2DeleteLaunchTemplateVersionsRequest;
@class AWSEC2DeleteLaunchTemplateVersionsResponseErrorItem;
@class AWSEC2DeleteLaunchTemplateVersionsResponseSuccessItem;
@class AWSEC2DeleteLaunchTemplateVersionsResult;
@class AWSEC2DeleteNatGatewayRequest;
@class AWSEC2DeleteNatGatewayResult;
@class AWSEC2DeleteNetworkAclEntryRequest;
@class AWSEC2DeleteNetworkAclRequest;
@class AWSEC2DeleteNetworkInterfacePermissionRequest;
@class AWSEC2DeleteNetworkInterfacePermissionResult;
@class AWSEC2DeleteNetworkInterfaceRequest;
@class AWSEC2DeletePlacementGroupRequest;
@class AWSEC2DeleteRouteRequest;
@class AWSEC2DeleteRouteTableRequest;
@class AWSEC2DeleteSecurityGroupRequest;
@class AWSEC2DeleteSnapshotRequest;
@class AWSEC2DeleteSpotDatafeedSubscriptionRequest;
@class AWSEC2DeleteSubnetRequest;
@class AWSEC2DeleteTagsRequest;
@class AWSEC2DeleteVolumeRequest;
@class AWSEC2DeleteVpcEndpointConnectionNotificationsRequest;
@class AWSEC2DeleteVpcEndpointConnectionNotificationsResult;
@class AWSEC2DeleteVpcEndpointServiceConfigurationsRequest;
@class AWSEC2DeleteVpcEndpointServiceConfigurationsResult;
@class AWSEC2DeleteVpcEndpointsRequest;
@class AWSEC2DeleteVpcEndpointsResult;
@class AWSEC2DeleteVpcPeeringConnectionRequest;
@class AWSEC2DeleteVpcPeeringConnectionResult;
@class AWSEC2DeleteVpcRequest;
@class AWSEC2DeleteVpnConnectionRequest;
@class AWSEC2DeleteVpnConnectionRouteRequest;
@class AWSEC2DeleteVpnGatewayRequest;
@class AWSEC2DeregisterImageRequest;
@class AWSEC2DescribeAccountAttributesRequest;
@class AWSEC2DescribeAccountAttributesResult;
@class AWSEC2DescribeAddressesRequest;
@class AWSEC2DescribeAddressesResult;
@class AWSEC2DescribeAggregateIdFormatRequest;
@class AWSEC2DescribeAggregateIdFormatResult;
@class AWSEC2DescribeAvailabilityZonesRequest;
@class AWSEC2DescribeAvailabilityZonesResult;
@class AWSEC2DescribeBundleTasksRequest;
@class AWSEC2DescribeBundleTasksResult;
@class AWSEC2DescribeClassicLinkInstancesRequest;
@class AWSEC2DescribeClassicLinkInstancesResult;
@class AWSEC2DescribeConversionTasksRequest;
@class AWSEC2DescribeConversionTasksResult;
@class AWSEC2DescribeCustomerGatewaysRequest;
@class AWSEC2DescribeCustomerGatewaysResult;
@class AWSEC2DescribeDhcpOptionsRequest;
@class AWSEC2DescribeDhcpOptionsResult;
@class AWSEC2DescribeEgressOnlyInternetGatewaysRequest;
@class AWSEC2DescribeEgressOnlyInternetGatewaysResult;
@class AWSEC2DescribeElasticGpusRequest;
@class AWSEC2DescribeElasticGpusResult;
@class AWSEC2DescribeExportTasksRequest;
@class AWSEC2DescribeExportTasksResult;
@class AWSEC2DescribeFleetHistoryRequest;
@class AWSEC2DescribeFleetHistoryResult;
@class AWSEC2DescribeFleetInstancesRequest;
@class AWSEC2DescribeFleetInstancesResult;
@class AWSEC2DescribeFleetsRequest;
@class AWSEC2DescribeFleetsResult;
@class AWSEC2DescribeFlowLogsRequest;
@class AWSEC2DescribeFlowLogsResult;
@class AWSEC2DescribeFpgaImageAttributeRequest;
@class AWSEC2DescribeFpgaImageAttributeResult;
@class AWSEC2DescribeFpgaImagesRequest;
@class AWSEC2DescribeFpgaImagesResult;
@class AWSEC2DescribeHostReservationOfferingsRequest;
@class AWSEC2DescribeHostReservationOfferingsResult;
@class AWSEC2DescribeHostReservationsRequest;
@class AWSEC2DescribeHostReservationsResult;
@class AWSEC2DescribeHostsRequest;
@class AWSEC2DescribeHostsResult;
@class AWSEC2DescribeIamInstanceProfileAssociationsRequest;
@class AWSEC2DescribeIamInstanceProfileAssociationsResult;
@class AWSEC2DescribeIdFormatRequest;
@class AWSEC2DescribeIdFormatResult;
@class AWSEC2DescribeIdentityIdFormatRequest;
@class AWSEC2DescribeIdentityIdFormatResult;
@class AWSEC2DescribeImageAttributeRequest;
@class AWSEC2DescribeImagesRequest;
@class AWSEC2DescribeImagesResult;
@class AWSEC2DescribeImportImageTasksRequest;
@class AWSEC2DescribeImportImageTasksResult;
@class AWSEC2DescribeImportSnapshotTasksRequest;
@class AWSEC2DescribeImportSnapshotTasksResult;
@class AWSEC2DescribeInstanceAttributeRequest;
@class AWSEC2DescribeInstanceCreditSpecificationsRequest;
@class AWSEC2DescribeInstanceCreditSpecificationsResult;
@class AWSEC2DescribeInstanceStatusRequest;
@class AWSEC2DescribeInstanceStatusResult;
@class AWSEC2DescribeInstancesRequest;
@class AWSEC2DescribeInstancesResult;
@class AWSEC2DescribeInternetGatewaysRequest;
@class AWSEC2DescribeInternetGatewaysResult;
@class AWSEC2DescribeKeyPairsRequest;
@class AWSEC2DescribeKeyPairsResult;
@class AWSEC2DescribeLaunchTemplateVersionsRequest;
@class AWSEC2DescribeLaunchTemplateVersionsResult;
@class AWSEC2DescribeLaunchTemplatesRequest;
@class AWSEC2DescribeLaunchTemplatesResult;
@class AWSEC2DescribeMovingAddressesRequest;
@class AWSEC2DescribeMovingAddressesResult;
@class AWSEC2DescribeNatGatewaysRequest;
@class AWSEC2DescribeNatGatewaysResult;
@class AWSEC2DescribeNetworkAclsRequest;
@class AWSEC2DescribeNetworkAclsResult;
@class AWSEC2DescribeNetworkInterfaceAttributeRequest;
@class AWSEC2DescribeNetworkInterfaceAttributeResult;
@class AWSEC2DescribeNetworkInterfacePermissionsRequest;
@class AWSEC2DescribeNetworkInterfacePermissionsResult;
@class AWSEC2DescribeNetworkInterfacesRequest;
@class AWSEC2DescribeNetworkInterfacesResult;
@class AWSEC2DescribePlacementGroupsRequest;
@class AWSEC2DescribePlacementGroupsResult;
@class AWSEC2DescribePrefixListsRequest;
@class AWSEC2DescribePrefixListsResult;
@class AWSEC2DescribePrincipalIdFormatRequest;
@class AWSEC2DescribePrincipalIdFormatResult;
@class AWSEC2DescribeRegionsRequest;
@class AWSEC2DescribeRegionsResult;
@class AWSEC2DescribeReservedInstancesListingsRequest;
@class AWSEC2DescribeReservedInstancesListingsResult;
@class AWSEC2DescribeReservedInstancesModificationsRequest;
@class AWSEC2DescribeReservedInstancesModificationsResult;
@class AWSEC2DescribeReservedInstancesOfferingsRequest;
@class AWSEC2DescribeReservedInstancesOfferingsResult;
@class AWSEC2DescribeReservedInstancesRequest;
@class AWSEC2DescribeReservedInstancesResult;
@class AWSEC2DescribeRouteTablesRequest;
@class AWSEC2DescribeRouteTablesResult;
@class AWSEC2DescribeScheduledInstanceAvailabilityRequest;
@class AWSEC2DescribeScheduledInstanceAvailabilityResult;
@class AWSEC2DescribeScheduledInstancesRequest;
@class AWSEC2DescribeScheduledInstancesResult;
@class AWSEC2DescribeSecurityGroupReferencesRequest;
@class AWSEC2DescribeSecurityGroupReferencesResult;
@class AWSEC2DescribeSecurityGroupsRequest;
@class AWSEC2DescribeSecurityGroupsResult;
@class AWSEC2DescribeSnapshotAttributeRequest;
@class AWSEC2DescribeSnapshotAttributeResult;
@class AWSEC2DescribeSnapshotsRequest;
@class AWSEC2DescribeSnapshotsResult;
@class AWSEC2DescribeSpotDatafeedSubscriptionRequest;
@class AWSEC2DescribeSpotDatafeedSubscriptionResult;
@class AWSEC2DescribeSpotFleetInstancesRequest;
@class AWSEC2DescribeSpotFleetInstancesResponse;
@class AWSEC2DescribeSpotFleetRequestHistoryRequest;
@class AWSEC2DescribeSpotFleetRequestHistoryResponse;
@class AWSEC2DescribeSpotFleetRequestsRequest;
@class AWSEC2DescribeSpotFleetRequestsResponse;
@class AWSEC2DescribeSpotInstanceRequestsRequest;
@class AWSEC2DescribeSpotInstanceRequestsResult;
@class AWSEC2DescribeSpotPriceHistoryRequest;
@class AWSEC2DescribeSpotPriceHistoryResult;
@class AWSEC2DescribeStaleSecurityGroupsRequest;
@class AWSEC2DescribeStaleSecurityGroupsResult;
@class AWSEC2DescribeSubnetsRequest;
@class AWSEC2DescribeSubnetsResult;
@class AWSEC2DescribeTagsRequest;
@class AWSEC2DescribeTagsResult;
@class AWSEC2DescribeVolumeAttributeRequest;
@class AWSEC2DescribeVolumeAttributeResult;
@class AWSEC2DescribeVolumeStatusRequest;
@class AWSEC2DescribeVolumeStatusResult;
@class AWSEC2DescribeVolumesModificationsRequest;
@class AWSEC2DescribeVolumesModificationsResult;
@class AWSEC2DescribeVolumesRequest;
@class AWSEC2DescribeVolumesResult;
@class AWSEC2DescribeVpcAttributeRequest;
@class AWSEC2DescribeVpcAttributeResult;
@class AWSEC2DescribeVpcClassicLinkDnsSupportRequest;
@class AWSEC2DescribeVpcClassicLinkDnsSupportResult;
@class AWSEC2DescribeVpcClassicLinkRequest;
@class AWSEC2DescribeVpcClassicLinkResult;
@class AWSEC2DescribeVpcEndpointConnectionNotificationsRequest;
@class AWSEC2DescribeVpcEndpointConnectionNotificationsResult;
@class AWSEC2DescribeVpcEndpointConnectionsRequest;
@class AWSEC2DescribeVpcEndpointConnectionsResult;
@class AWSEC2DescribeVpcEndpointServiceConfigurationsRequest;
@class AWSEC2DescribeVpcEndpointServiceConfigurationsResult;
@class AWSEC2DescribeVpcEndpointServicePermissionsRequest;
@class AWSEC2DescribeVpcEndpointServicePermissionsResult;
@class AWSEC2DescribeVpcEndpointServicesRequest;
@class AWSEC2DescribeVpcEndpointServicesResult;
@class AWSEC2DescribeVpcEndpointsRequest;
@class AWSEC2DescribeVpcEndpointsResult;
@class AWSEC2DescribeVpcPeeringConnectionsRequest;
@class AWSEC2DescribeVpcPeeringConnectionsResult;
@class AWSEC2DescribeVpcsRequest;
@class AWSEC2DescribeVpcsResult;
@class AWSEC2DescribeVpnConnectionsRequest;
@class AWSEC2DescribeVpnConnectionsResult;
@class AWSEC2DescribeVpnGatewaysRequest;
@class AWSEC2DescribeVpnGatewaysResult;
@class AWSEC2DetachClassicLinkVpcRequest;
@class AWSEC2DetachClassicLinkVpcResult;
@class AWSEC2DetachInternetGatewayRequest;
@class AWSEC2DetachNetworkInterfaceRequest;
@class AWSEC2DetachVolumeRequest;
@class AWSEC2DetachVpnGatewayRequest;
@class AWSEC2DhcpConfiguration;
@class AWSEC2DhcpOptions;
@class AWSEC2DisableVgwRoutePropagationRequest;
@class AWSEC2DisableVpcClassicLinkDnsSupportRequest;
@class AWSEC2DisableVpcClassicLinkDnsSupportResult;
@class AWSEC2DisableVpcClassicLinkRequest;
@class AWSEC2DisableVpcClassicLinkResult;
@class AWSEC2DisassociateAddressRequest;
@class AWSEC2DisassociateIamInstanceProfileRequest;
@class AWSEC2DisassociateIamInstanceProfileResult;
@class AWSEC2DisassociateRouteTableRequest;
@class AWSEC2DisassociateSubnetCidrBlockRequest;
@class AWSEC2DisassociateSubnetCidrBlockResult;
@class AWSEC2DisassociateVpcCidrBlockRequest;
@class AWSEC2DisassociateVpcCidrBlockResult;
@class AWSEC2DiskImage;
@class AWSEC2DiskImageDescription;
@class AWSEC2DiskImageDetail;
@class AWSEC2DiskImageVolumeDescription;
@class AWSEC2DnsEntry;
@class AWSEC2EbsBlockDevice;
@class AWSEC2EbsInstanceBlockDevice;
@class AWSEC2EbsInstanceBlockDeviceSpecification;
@class AWSEC2EgressOnlyInternetGateway;
@class AWSEC2ElasticGpuAssociation;
@class AWSEC2ElasticGpuHealth;
@class AWSEC2ElasticGpuSpecification;
@class AWSEC2ElasticGpuSpecificationResponse;
@class AWSEC2ElasticGpus;
@class AWSEC2EnableVgwRoutePropagationRequest;
@class AWSEC2EnableVolumeIORequest;
@class AWSEC2EnableVpcClassicLinkDnsSupportRequest;
@class AWSEC2EnableVpcClassicLinkDnsSupportResult;
@class AWSEC2EnableVpcClassicLinkRequest;
@class AWSEC2EnableVpcClassicLinkResult;
@class AWSEC2EventInformation;
@class AWSEC2ExportTask;
@class AWSEC2ExportToS3Task;
@class AWSEC2ExportToS3TaskSpecification;
@class AWSEC2Filter;
@class AWSEC2FleetData;
@class AWSEC2FleetLaunchTemplateConfig;
@class AWSEC2FleetLaunchTemplateConfigRequest;
@class AWSEC2FleetLaunchTemplateOverrides;
@class AWSEC2FleetLaunchTemplateOverridesRequest;
@class AWSEC2FleetLaunchTemplateSpecification;
@class AWSEC2FleetLaunchTemplateSpecificationRequest;
@class AWSEC2FlowLog;
@class AWSEC2FpgaImage;
@class AWSEC2FpgaImageAttribute;
@class AWSEC2FpgaImageState;
@class AWSEC2GetConsoleOutputRequest;
@class AWSEC2GetConsoleOutputResult;
@class AWSEC2GetConsoleScreenshotRequest;
@class AWSEC2GetConsoleScreenshotResult;
@class AWSEC2GetHostReservationPurchasePreviewRequest;
@class AWSEC2GetHostReservationPurchasePreviewResult;
@class AWSEC2GetLaunchTemplateDataRequest;
@class AWSEC2GetLaunchTemplateDataResult;
@class AWSEC2GetPasswordDataRequest;
@class AWSEC2GetPasswordDataResult;
@class AWSEC2GetReservedInstancesExchangeQuoteRequest;
@class AWSEC2GetReservedInstancesExchangeQuoteResult;
@class AWSEC2GroupIdentifier;
@class AWSEC2HistoryRecord;
@class AWSEC2HistoryRecordEntry;
@class AWSEC2Host;
@class AWSEC2HostInstance;
@class AWSEC2HostOffering;
@class AWSEC2HostProperties;
@class AWSEC2HostReservation;
@class AWSEC2IamInstanceProfile;
@class AWSEC2IamInstanceProfileAssociation;
@class AWSEC2IamInstanceProfileSpecification;
@class AWSEC2IcmpTypeCode;
@class AWSEC2IdFormat;
@class AWSEC2Image;
@class AWSEC2ImageAttribute;
@class AWSEC2ImageDiskContainer;
@class AWSEC2ImportImageRequest;
@class AWSEC2ImportImageResult;
@class AWSEC2ImportImageTask;
@class AWSEC2ImportInstanceLaunchSpecification;
@class AWSEC2ImportInstanceRequest;
@class AWSEC2ImportInstanceResult;
@class AWSEC2ImportInstanceTaskDetails;
@class AWSEC2ImportInstanceVolumeDetailItem;
@class AWSEC2ImportKeyPairRequest;
@class AWSEC2ImportKeyPairResult;
@class AWSEC2ImportSnapshotRequest;
@class AWSEC2ImportSnapshotResult;
@class AWSEC2ImportSnapshotTask;
@class AWSEC2ImportVolumeRequest;
@class AWSEC2ImportVolumeResult;
@class AWSEC2ImportVolumeTaskDetails;
@class AWSEC2Instance;
@class AWSEC2InstanceAttribute;
@class AWSEC2InstanceBlockDeviceMapping;
@class AWSEC2InstanceBlockDeviceMappingSpecification;
@class AWSEC2InstanceCapacity;
@class AWSEC2InstanceCount;
@class AWSEC2InstanceCreditSpecification;
@class AWSEC2InstanceCreditSpecificationRequest;
@class AWSEC2InstanceExportDetails;
@class AWSEC2InstanceIpv6Address;
@class AWSEC2InstanceIpv6AddressRequest;
@class AWSEC2InstanceMarketOptionsRequest;
@class AWSEC2InstanceMonitoring;
@class AWSEC2InstanceNetworkInterface;
@class AWSEC2InstanceNetworkInterfaceAssociation;
@class AWSEC2InstanceNetworkInterfaceAttachment;
@class AWSEC2InstanceNetworkInterfaceSpecification;
@class AWSEC2InstancePrivateIpAddress;
@class AWSEC2InstanceState;
@class AWSEC2InstanceStateChange;
@class AWSEC2InstanceStatus;
@class AWSEC2InstanceStatusDetails;
@class AWSEC2InstanceStatusEvent;
@class AWSEC2InstanceStatusSummary;
@class AWSEC2InternetGateway;
@class AWSEC2InternetGatewayAttachment;
@class AWSEC2IpPermission;
@class AWSEC2IpRange;
@class AWSEC2Ipv6CidrBlock;
@class AWSEC2Ipv6Range;
@class AWSEC2KeyPair;
@class AWSEC2KeyPairInfo;
@class AWSEC2LaunchPermission;
@class AWSEC2LaunchPermissionModifications;
@class AWSEC2LaunchSpecification;
@class AWSEC2LaunchTemplate;
@class AWSEC2LaunchTemplateBlockDeviceMapping;
@class AWSEC2LaunchTemplateBlockDeviceMappingRequest;
@class AWSEC2LaunchTemplateConfig;
@class AWSEC2LaunchTemplateEbsBlockDevice;
@class AWSEC2LaunchTemplateEbsBlockDeviceRequest;
@class AWSEC2LaunchTemplateIamInstanceProfileSpecification;
@class AWSEC2LaunchTemplateIamInstanceProfileSpecificationRequest;
@class AWSEC2LaunchTemplateInstanceMarketOptions;
@class AWSEC2LaunchTemplateInstanceMarketOptionsRequest;
@class AWSEC2LaunchTemplateInstanceNetworkInterfaceSpecification;
@class AWSEC2LaunchTemplateInstanceNetworkInterfaceSpecificationRequest;
@class AWSEC2LaunchTemplateOverrides;
@class AWSEC2LaunchTemplatePlacement;
@class AWSEC2LaunchTemplatePlacementRequest;
@class AWSEC2LaunchTemplateSpecification;
@class AWSEC2LaunchTemplateSpotMarketOptions;
@class AWSEC2LaunchTemplateSpotMarketOptionsRequest;
@class AWSEC2LaunchTemplateTagSpecification;
@class AWSEC2LaunchTemplateTagSpecificationRequest;
@class AWSEC2LaunchTemplateVersion;
@class AWSEC2LaunchTemplatesMonitoring;
@class AWSEC2LaunchTemplatesMonitoringRequest;
@class AWSEC2LoadBalancersConfig;
@class AWSEC2LoadPermission;
@class AWSEC2LoadPermissionModifications;
@class AWSEC2LoadPermissionRequest;
@class AWSEC2ModifyFleetRequest;
@class AWSEC2ModifyFleetResult;
@class AWSEC2ModifyFpgaImageAttributeRequest;
@class AWSEC2ModifyFpgaImageAttributeResult;
@class AWSEC2ModifyHostsRequest;
@class AWSEC2ModifyHostsResult;
@class AWSEC2ModifyIdFormatRequest;
@class AWSEC2ModifyIdentityIdFormatRequest;
@class AWSEC2ModifyImageAttributeRequest;
@class AWSEC2ModifyInstanceAttributeRequest;
@class AWSEC2ModifyInstanceCreditSpecificationRequest;
@class AWSEC2ModifyInstanceCreditSpecificationResult;
@class AWSEC2ModifyInstancePlacementRequest;
@class AWSEC2ModifyInstancePlacementResult;
@class AWSEC2ModifyLaunchTemplateRequest;
@class AWSEC2ModifyLaunchTemplateResult;
@class AWSEC2ModifyNetworkInterfaceAttributeRequest;
@class AWSEC2ModifyReservedInstancesRequest;
@class AWSEC2ModifyReservedInstancesResult;
@class AWSEC2ModifySnapshotAttributeRequest;
@class AWSEC2ModifySpotFleetRequestRequest;
@class AWSEC2ModifySpotFleetRequestResponse;
@class AWSEC2ModifySubnetAttributeRequest;
@class AWSEC2ModifyVolumeAttributeRequest;
@class AWSEC2ModifyVolumeRequest;
@class AWSEC2ModifyVolumeResult;
@class AWSEC2ModifyVpcAttributeRequest;
@class AWSEC2ModifyVpcEndpointConnectionNotificationRequest;
@class AWSEC2ModifyVpcEndpointConnectionNotificationResult;
@class AWSEC2ModifyVpcEndpointRequest;
@class AWSEC2ModifyVpcEndpointResult;
@class AWSEC2ModifyVpcEndpointServiceConfigurationRequest;
@class AWSEC2ModifyVpcEndpointServiceConfigurationResult;
@class AWSEC2ModifyVpcEndpointServicePermissionsRequest;
@class AWSEC2ModifyVpcEndpointServicePermissionsResult;
@class AWSEC2ModifyVpcPeeringConnectionOptionsRequest;
@class AWSEC2ModifyVpcPeeringConnectionOptionsResult;
@class AWSEC2ModifyVpcTenancyRequest;
@class AWSEC2ModifyVpcTenancyResult;
@class AWSEC2MonitorInstancesRequest;
@class AWSEC2MonitorInstancesResult;
@class AWSEC2Monitoring;
@class AWSEC2MoveAddressToVpcRequest;
@class AWSEC2MoveAddressToVpcResult;
@class AWSEC2MovingAddressStatus;
@class AWSEC2NatGateway;
@class AWSEC2NatGatewayAddress;
@class AWSEC2NetworkAcl;
@class AWSEC2NetworkAclAssociation;
@class AWSEC2NetworkAclEntry;
@class AWSEC2NetworkInterface;
@class AWSEC2NetworkInterfaceAssociation;
@class AWSEC2NetworkInterfaceAttachment;
@class AWSEC2NetworkInterfaceAttachmentChanges;
@class AWSEC2NetworkInterfaceIpv6Address;
@class AWSEC2NetworkInterfacePermission;
@class AWSEC2NetworkInterfacePermissionState;
@class AWSEC2NetworkInterfacePrivateIpAddress;
@class AWSEC2LatestDhcpConfiguration;
@class AWSEC2PciId;
@class AWSEC2PeeringConnectionOptions;
@class AWSEC2PeeringConnectionOptionsRequest;
@class AWSEC2Placement;
@class AWSEC2PlacementGroup;
@class AWSEC2PortRange;
@class AWSEC2PrefixList;
@class AWSEC2PrefixListId;
@class AWSEC2PriceSchedule;
@class AWSEC2PriceScheduleSpecification;
@class AWSEC2PricingDetail;
@class AWSEC2PrincipalIdFormat;
@class AWSEC2PrivateIpAddressSpecification;
@class AWSEC2ProductCode;
@class AWSEC2PropagatingVgw;
@class AWSEC2ProvisionedBandwidth;
@class AWSEC2Purchase;
@class AWSEC2PurchaseHostReservationRequest;
@class AWSEC2PurchaseHostReservationResult;
@class AWSEC2PurchaseRequest;
@class AWSEC2PurchaseReservedInstancesOfferingRequest;
@class AWSEC2PurchaseReservedInstancesOfferingResult;
@class AWSEC2PurchaseScheduledInstancesRequest;
@class AWSEC2PurchaseScheduledInstancesResult;
@class AWSEC2RebootInstancesRequest;
@class AWSEC2RecurringCharge;
@class AWSEC2Region;
@class AWSEC2RegisterImageRequest;
@class AWSEC2RegisterImageResult;
@class AWSEC2RejectVpcEndpointConnectionsRequest;
@class AWSEC2RejectVpcEndpointConnectionsResult;
@class AWSEC2RejectVpcPeeringConnectionRequest;
@class AWSEC2RejectVpcPeeringConnectionResult;
@class AWSEC2ReleaseAddressRequest;
@class AWSEC2ReleaseHostsRequest;
@class AWSEC2ReleaseHostsResult;
@class AWSEC2ReplaceIamInstanceProfileAssociationRequest;
@class AWSEC2ReplaceIamInstanceProfileAssociationResult;
@class AWSEC2ReplaceNetworkAclAssociationRequest;
@class AWSEC2ReplaceNetworkAclAssociationResult;
@class AWSEC2ReplaceNetworkAclEntryRequest;
@class AWSEC2ReplaceRouteRequest;
@class AWSEC2ReplaceRouteTableAssociationRequest;
@class AWSEC2ReplaceRouteTableAssociationResult;
@class AWSEC2ReportInstanceStatusRequest;
@class AWSEC2RequestLaunchTemplateData;
@class AWSEC2RequestSpotFleetRequest;
@class AWSEC2RequestSpotFleetResponse;
@class AWSEC2RequestSpotInstancesRequest;
@class AWSEC2RequestSpotInstancesResult;
@class AWSEC2RequestSpotLaunchSpecification;
@class AWSEC2Reservation;
@class AWSEC2ReservationValue;
@class AWSEC2ReservedInstanceLimitPrice;
@class AWSEC2ReservedInstanceReservationValue;
@class AWSEC2ReservedInstances;
@class AWSEC2ReservedInstancesConfiguration;
@class AWSEC2ReservedInstancesId;
@class AWSEC2ReservedInstancesListing;
@class AWSEC2ReservedInstancesModification;
@class AWSEC2ReservedInstancesModificationResult;
@class AWSEC2ReservedInstancesOffering;
@class AWSEC2ResetFpgaImageAttributeRequest;
@class AWSEC2ResetFpgaImageAttributeResult;
@class AWSEC2ResetImageAttributeRequest;
@class AWSEC2ResetInstanceAttributeRequest;
@class AWSEC2ResetNetworkInterfaceAttributeRequest;
@class AWSEC2ResetSnapshotAttributeRequest;
@class AWSEC2ResponseError;
@class AWSEC2ResponseLaunchTemplateData;
@class AWSEC2RestoreAddressToClassicRequest;
@class AWSEC2RestoreAddressToClassicResult;
@class AWSEC2RevokeSecurityGroupEgressRequest;
@class AWSEC2RevokeSecurityGroupIngressRequest;
@class AWSEC2Route;
@class AWSEC2RouteTable;
@class AWSEC2RouteTableAssociation;
@class AWSEC2RunInstancesMonitoringEnabled;
@class AWSEC2RunInstancesRequest;
@class AWSEC2RunScheduledInstancesRequest;
@class AWSEC2RunScheduledInstancesResult;
@class AWSEC2S3Storage;
@class AWSEC2ScheduledInstance;
@class AWSEC2ScheduledInstanceAvailability;
@class AWSEC2ScheduledInstanceRecurrence;
@class AWSEC2ScheduledInstanceRecurrenceRequest;
@class AWSEC2ScheduledInstancesBlockDeviceMapping;
@class AWSEC2ScheduledInstancesEbs;
@class AWSEC2ScheduledInstancesIamInstanceProfile;
@class AWSEC2ScheduledInstancesIpv6Address;
@class AWSEC2ScheduledInstancesLaunchSpecification;
@class AWSEC2ScheduledInstancesMonitoring;
@class AWSEC2ScheduledInstancesNetworkInterface;
@class AWSEC2ScheduledInstancesPlacement;
@class AWSEC2ScheduledInstancesPrivateIpAddressConfig;
@class AWSEC2SecurityGroup;
@class AWSEC2SecurityGroupIdentifier;
@class AWSEC2SecurityGroupReference;
@class AWSEC2ServiceConfiguration;
@class AWSEC2ServiceDetail;
@class AWSEC2ServiceTypeDetail;
@class AWSEC2SlotDateTimeRangeRequest;
@class AWSEC2SlotStartTimeRangeRequest;
@class AWSEC2Snapshot;
@class AWSEC2SnapshotDetail;
@class AWSEC2SnapshotDiskContainer;
@class AWSEC2SnapshotTaskDetail;
@class AWSEC2SpotDatafeedSubscription;
@class AWSEC2SpotFleetLaunchSpecification;
@class AWSEC2SpotFleetMonitoring;
@class AWSEC2SpotFleetRequestConfig;
@class AWSEC2SpotFleetRequestConfigData;
@class AWSEC2SpotFleetTagSpecification;
@class AWSEC2SpotInstanceRequest;
@class AWSEC2SpotInstanceStateFault;
@class AWSEC2SpotInstanceStatus;
@class AWSEC2SpotMarketOptions;
@class AWSEC2SpotOptions;
@class AWSEC2SpotOptionsRequest;
@class AWSEC2SpotPlacement;
@class AWSEC2SpotPrice;
@class AWSEC2StaleIpPermission;
@class AWSEC2StaleSecurityGroup;
@class AWSEC2StartInstancesRequest;
@class AWSEC2StartInstancesResult;
@class AWSEC2StateReason;
@class AWSEC2StopInstancesRequest;
@class AWSEC2StopInstancesResult;
@class AWSEC2Storage;
@class AWSEC2StorageLocation;
@class AWSEC2Subnet;
@class AWSEC2SubnetCidrBlockState;
@class AWSEC2SubnetIpv6CidrBlockAssociation;
@class AWSEC2SuccessfulInstanceCreditSpecificationItem;
@class AWSEC2Tag;
@class AWSEC2TagDescription;
@class AWSEC2TagSpecification;
@class AWSEC2TargetCapacitySpecification;
@class AWSEC2TargetCapacitySpecificationRequest;
@class AWSEC2TargetConfiguration;
@class AWSEC2TargetConfigurationRequest;
@class AWSEC2TargetGroup;
@class AWSEC2TargetGroupsConfig;
@class AWSEC2TargetReservationValue;
@class AWSEC2TerminateInstancesRequest;
@class AWSEC2TerminateInstancesResult;
@class AWSEC2UnassignIpv6AddressesRequest;
@class AWSEC2UnassignIpv6AddressesResult;
@class AWSEC2UnassignPrivateIpAddressesRequest;
@class AWSEC2UnmonitorInstancesRequest;
@class AWSEC2UnmonitorInstancesResult;
@class AWSEC2UnsuccessfulInstanceCreditSpecificationItem;
@class AWSEC2UnsuccessfulInstanceCreditSpecificationItemError;
@class AWSEC2UnsuccessfulItem;
@class AWSEC2UnsuccessfulItemError;
@class AWSEC2UpdateSecurityGroupRuleDescriptionsEgressRequest;
@class AWSEC2UpdateSecurityGroupRuleDescriptionsEgressResult;
@class AWSEC2UpdateSecurityGroupRuleDescriptionsIngressRequest;
@class AWSEC2UpdateSecurityGroupRuleDescriptionsIngressResult;
@class AWSEC2UserBucket;
@class AWSEC2UserBucketDetails;
@class AWSEC2UserData;
@class AWSEC2UserIdGroupPair;
@class AWSEC2VgwTelemetry;
@class AWSEC2Volume;
@class AWSEC2VolumeAttachment;
@class AWSEC2VolumeDetail;
@class AWSEC2VolumeModification;
@class AWSEC2VolumeStatusAction;
@class AWSEC2VolumeStatusDetails;
@class AWSEC2VolumeStatusEvent;
@class AWSEC2VolumeStatusInfo;
@class AWSEC2VolumeStatusItem;
@class AWSEC2Vpc;
@class AWSEC2VpcAttachment;
@class AWSEC2VpcCidrBlockAssociation;
@class AWSEC2VpcCidrBlockState;
@class AWSEC2VpcClassicLink;
@class AWSEC2VpcEndpoint;
@class AWSEC2VpcEndpointConnection;
@class AWSEC2VpcIpv6CidrBlockAssociation;
@class AWSEC2VpcPeeringConnection;
@class AWSEC2VpcPeeringConnectionOptionsDescription;
@class AWSEC2VpcPeeringConnectionStateReason;
@class AWSEC2VpcPeeringConnectionVpcInfo;
@class AWSEC2VpnConnection;
@class AWSEC2VpnConnectionOptions;
@class AWSEC2VpnConnectionOptionsSpecification;
@class AWSEC2VpnGateway;
@class AWSEC2VpnStaticRoute;
@class AWSEC2VpnTunnelOptionsSpecification;

/**
 <p>Contains the parameters for accepting the quote.</p>
 Required parameters: [ReservedInstanceIds]
 */
@interface AWSEC2AcceptReservedInstancesExchangeQuoteRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of the Convertible Reserved Instances to exchange for another Convertible Reserved Instance of the same or higher value.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reservedInstanceIds;

/**
 <p>The configuration of the target Convertible Reserved Instance to exchange for your current Convertible Reserved Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TargetConfigurationRequest *> * _Nullable targetConfigurations;

@end

/**
 <p>The result of the exchange and whether it was <code>successful</code>.</p>
 */
@interface AWSEC2AcceptReservedInstancesExchangeQuoteResult : AWSModel


/**
 <p>The ID of the successful exchange.</p>
 */
@property (nonatomic, strong) NSString * _Nullable exchangeId;

@end

/**
 
 */
@interface AWSEC2AcceptVpcEndpointConnectionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the endpoint service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

/**
 <p>The IDs of one or more interface VPC endpoints.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcEndpointIds;

@end

/**
 
 */
@interface AWSEC2AcceptVpcEndpointConnectionsResult : AWSModel


/**
 <p>Information about the interface endpoints that were not accepted, if applicable.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 <p>Contains the parameters for AcceptVpcPeeringConnection.</p>
 */
@interface AWSEC2AcceptVpcPeeringConnectionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC peering connection. You must specify this parameter in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Contains the output of AcceptVpcPeeringConnection.</p>
 */
@interface AWSEC2AcceptVpcPeeringConnectionResult : AWSModel


/**
 <p>Information about the VPC peering connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpcPeeringConnection * _Nullable vpcPeeringConnection;

@end

/**
 <p>Describes an account attribute.</p>
 */
@interface AWSEC2AccountAttribute : AWSModel


/**
 <p>The name of the account attribute.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attributeName;

/**
 <p>One or more values for the account attribute.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2AccountAttributeValue *> * _Nullable attributeValues;

@end

/**
 <p>Describes a value of an account attribute.</p>
 */
@interface AWSEC2AccountAttributeValue : AWSModel


/**
 <p>The value of the attribute.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attributeValue;

@end

/**
 <p>Describes a running instance in a Spot Fleet.</p>
 */
@interface AWSEC2ActiveInstance : AWSModel


/**
 <p>The health status of the instance. If the status of either the instance status check or the system status check is <code>impaired</code>, the health status of the instance is <code>unhealthy</code>. Otherwise, the health status is <code>healthy</code>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceHealthStatus instanceHealth;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The ID of the Spot Instance request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotInstanceRequestId;

@end

/**
 <p>Describes an Elastic IP address.</p>
 */
@interface AWSEC2Address : AWSModel


/**
 <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>The ID representing the association of the address with an instance in a VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>Indicates whether this Elastic IP address is for use with instances in EC2-Classic (<code>standard</code>) or instances in a VPC (<code>vpc</code>).</p>
 */
@property (nonatomic, assign) AWSEC2DomainType domain;

/**
 <p>The ID of the instance that the address is associated with (if any).</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The ID of the AWS account that owns the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceOwnerId;

/**
 <p>The private IP address associated with the Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>The Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

/**
 <p>Any tags assigned to the Elastic IP address.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Contains the parameters for AllocateAddress.</p>
 */
@interface AWSEC2AllocateAddressRequest : AWSRequest


/**
 <p>[EC2-VPC] The Elastic IP address to recover.</p>
 */
@property (nonatomic, strong) NSString * _Nullable address;

/**
 <p>Set to <code>vpc</code> to allocate the address for use with instances in a VPC.</p><p>Default: The address is for use with instances in EC2-Classic.</p>
 */
@property (nonatomic, assign) AWSEC2DomainType domain;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of AllocateAddress.</p>
 */
@interface AWSEC2AllocateAddressResult : AWSModel


/**
 <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic IP address for use with instances in a VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>Indicates whether this Elastic IP address is for use with instances in EC2-Classic (<code>standard</code>) or instances in a VPC (<code>vpc</code>).</p>
 */
@property (nonatomic, assign) AWSEC2DomainType domain;

/**
 <p>The Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Contains the parameters for AllocateHosts.</p>
 Required parameters: [AvailabilityZone, InstanceType, Quantity]
 */
@interface AWSEC2AllocateHostsRequest : AWSRequest


/**
 <p>This is enabled by default. This property allows instances to be automatically placed onto available Dedicated Hosts, when you are launching instances without specifying a host ID.</p><p>Default: Enabled</p>
 */
@property (nonatomic, assign) AWSEC2AutoPlacement autoPlacement;

/**
 <p>The Availability Zone for the Dedicated Hosts.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Unique, case-sensitive identifier you provide to ensure idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Specify the instance type that you want your Dedicated Hosts to be configured for. When you specify the instance type, that is the only instance type that you can launch onto that host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The number of Dedicated Hosts you want to allocate to your account with these parameters.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable quantity;

@end

/**
 <p>Contains the output of AllocateHosts.</p>
 */
@interface AWSEC2AllocateHostsResult : AWSModel


/**
 <p>The ID of the allocated Dedicated Host. This is used when you want to launch an instance onto a specific host.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIds;

@end

/**
 <p>Describes a principal.</p>
 */
@interface AWSEC2AllowedPrincipal : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the principal.</p>
 */
@property (nonatomic, strong) NSString * _Nullable principal;

/**
 <p>The type of principal.</p>
 */
@property (nonatomic, assign) AWSEC2PrincipalType principalType;

@end

/**
 
 */
@interface AWSEC2AssignIpv6AddressesRequest : AWSRequest


/**
 <p>The number of IPv6 addresses to assign to the network interface. Amazon EC2 automatically selects the IPv6 addresses from the subnet range. You can't use this option if specifying specific IPv6 addresses.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>One or more specific IPv6 addresses to be assigned to the network interface. You can't use this option if you're specifying a number of IPv6 addresses.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

@end

/**
 
 */
@interface AWSEC2AssignIpv6AddressesResult : AWSModel


/**
 <p>The IPv6 addresses assigned to the network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable assignedIpv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

@end

/**
 <p>Contains the parameters for AssignPrivateIpAddresses.</p>
 Required parameters: [NetworkInterfaceId]
 */
@interface AWSEC2AssignPrivateIpAddressesRequest : AWSRequest


/**
 <p>Indicates whether to allow an IP address that is already assigned to another network interface or instance to be reassigned to the specified network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowReassignment;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>One or more IP addresses to be assigned as a secondary private IP address to the network interface. You can't specify this parameter when also specifying a number of secondary IP addresses.</p><p>If you don't specify an IP address, Amazon EC2 automatically selects an IP address within the subnet range.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable privateIpAddresses;

/**
 <p>The number of secondary IP addresses to assign to the network interface. You can't specify this parameter when also specifying private IP addresses.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable secondaryPrivateIpAddressCount;

@end

/**
 <p>Contains the parameters for AssociateAddress.</p>
 */
@interface AWSEC2AssociateAddressRequest : AWSRequest


/**
 <p>[EC2-VPC] The allocation ID. This is required for EC2-VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>[EC2-VPC] For a VPC in an EC2-Classic account, specify true to allow an Elastic IP address that is already associated with an instance or network interface to be reassociated with the specified instance or network interface. Otherwise, the operation fails. In a VPC in an EC2-VPC-only account, reassociation is automatic, therefore you can specify false to ensure the operation fails if the Elastic IP address is already associated with another resource.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowReassociation;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance. This is required for EC2-Classic. For EC2-VPC, you can specify either the instance ID or the network interface ID, but not both. The operation fails if you specify an instance ID unless exactly one network interface is attached.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>[EC2-VPC] The ID of the network interface. If the instance has more than one network interface, you must specify a network interface ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>[EC2-VPC] The primary or secondary private IP address to associate with the Elastic IP address. If no private IP address is specified, the Elastic IP address is associated with the primary private IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>The Elastic IP address. This is required for EC2-Classic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Contains the output of AssociateAddress.</p>
 */
@interface AWSEC2AssociateAddressResult : AWSModel


/**
 <p>[EC2-VPC] The ID that represents the association of the Elastic IP address with an instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

@end

/**
 <p>Contains the parameters for AssociateDhcpOptions.</p>
 Required parameters: [DhcpOptionsId, VpcId]
 */
@interface AWSEC2AssociateDhcpOptionsRequest : AWSRequest


/**
 <p>The ID of the DHCP options set, or <code>default</code> to associate no DHCP options with the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dhcpOptionsId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 
 */
@interface AWSEC2AssociateIamInstanceProfileRequest : AWSRequest


/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileSpecification * _Nullable iamInstanceProfile;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 
 */
@interface AWSEC2AssociateIamInstanceProfileResult : AWSModel


/**
 <p>Information about the IAM instance profile association.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileAssociation * _Nullable iamInstanceProfileAssociation;

@end

/**
 <p>Contains the parameters for AssociateRouteTable.</p>
 Required parameters: [RouteTableId, SubnetId]
 */
@interface AWSEC2AssociateRouteTableRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Contains the output of AssociateRouteTable.</p>
 */
@interface AWSEC2AssociateRouteTableResult : AWSModel


/**
 <p>The route table association ID (needed to disassociate the route table).</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

@end

/**
 
 */
@interface AWSEC2AssociateSubnetCidrBlockRequest : AWSRequest


/**
 <p>The IPv6 CIDR block for your subnet. The subnet must have a /64 prefix length.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>The ID of your subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 
 */
@interface AWSEC2AssociateSubnetCidrBlockResult : AWSModel


/**
 <p>Information about the IPv6 CIDR block association.</p>
 */
@property (nonatomic, strong) AWSEC2SubnetIpv6CidrBlockAssociation * _Nullable ipv6CidrBlockAssociation;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 
 */
@interface AWSEC2AssociateVpcCidrBlockRequest : AWSRequest


/**
 <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the VPC. You cannot specify the range of IPv6 addresses, or the size of the CIDR block.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amazonProvidedIpv6CidrBlock;

/**
 <p>An IPv4 CIDR block to associate with the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 
 */
@interface AWSEC2AssociateVpcCidrBlockResult : AWSModel


/**
 <p>Information about the IPv4 CIDR block association.</p>
 */
@property (nonatomic, strong) AWSEC2VpcCidrBlockAssociation * _Nullable cidrBlockAssociation;

/**
 <p>Information about the IPv6 CIDR block association.</p>
 */
@property (nonatomic, strong) AWSEC2VpcIpv6CidrBlockAssociation * _Nullable ipv6CidrBlockAssociation;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the parameters for AttachClassicLinkVpc.</p>
 Required parameters: [Groups, InstanceId, VpcId]
 */
@interface AWSEC2AttachClassicLinkVpcRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of one or more of the VPC's security groups. You cannot specify security groups from a different VPC.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The ID of an EC2-Classic instance to link to the ClassicLink-enabled VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The ID of a ClassicLink-enabled VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of AttachClassicLinkVpc.</p>
 */
@interface AWSEC2AttachClassicLinkVpcResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for AttachInternetGateway.</p>
 Required parameters: [InternetGatewayId, VpcId]
 */
@interface AWSEC2AttachInternetGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable internetGatewayId;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the parameters for AttachNetworkInterface.</p>
 Required parameters: [DeviceIndex, InstanceId, NetworkInterfaceId]
 */
@interface AWSEC2AttachNetworkInterfaceRequest : AWSRequest


/**
 <p>The index of the device for the network interface attachment.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

@end

/**
 <p>Contains the output of AttachNetworkInterface.</p>
 */
@interface AWSEC2AttachNetworkInterfaceResult : AWSModel


/**
 <p>The ID of the network interface attachment.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attachmentId;

@end

/**
 <p>Contains the parameters for AttachVolume.</p>
 Required parameters: [Device, InstanceId, VolumeId]
 */
@interface AWSEC2AttachVolumeRequest : AWSRequest


/**
 <p>The device name (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable device;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The ID of the EBS volume. The volume and instance must be within the same Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Contains the parameters for AttachVpnGateway.</p>
 Required parameters: [VpcId, VpnGatewayId]
 */
@interface AWSEC2AttachVpnGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnGatewayId;

@end

/**
 <p>Contains the output of AttachVpnGateway.</p>
 */
@interface AWSEC2AttachVpnGatewayResult : AWSModel


/**
 <p>Information about the attachment.</p>
 */
@property (nonatomic, strong) AWSEC2VpcAttachment * _Nullable vpcAttachment;

@end

/**
 <p>Describes a value for a resource attribute that is a Boolean value.</p>
 */
@interface AWSEC2AttributeBooleanValue : AWSModel


/**
 <p>The attribute value. The valid values are <code>true</code> or <code>false</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable value;

@end

/**
 <p>Describes a value for a resource attribute that is a String.</p>
 */
@interface AWSEC2AttributeValue : AWSModel


/**
 <p>The attribute value. The value is case-sensitive.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>Contains the parameters for AuthorizeSecurityGroupEgress.</p>
 Required parameters: [GroupId]
 */
@interface AWSEC2AuthorizeSecurityGroupEgressRequest : AWSRequest


/**
 <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrIp;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Not supported. Use a set of IP permissions to specify the port.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fromPort;

/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>One or more sets of IP permissions. You can't specify a destination security group and a CIDR IP address range in the same set of permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

/**
 <p>Not supported. Use a set of IP permissions to specify the protocol name or number.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipProtocol;

/**
 <p>Not supported. Use a set of IP permissions to specify a destination security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupName;

/**
 <p>Not supported. Use a set of IP permissions to specify a destination security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupOwnerId;

/**
 <p>Not supported. Use a set of IP permissions to specify the port.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable toPort;

@end

/**
 <p>Contains the parameters for AuthorizeSecurityGroupIngress.</p>
 */
@interface AWSEC2AuthorizeSecurityGroupIngressRequest : AWSRequest


/**
 <p>The CIDR IPv4 address range. You can't specify this parameter when specifying a source security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrIp;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The start of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 type number. For the ICMP/ICMPv6 type number, use <code>-1</code> to specify all types. If you specify all ICMP/ICMPv6 types, you must specify all codes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fromPort;

/**
 <p>The ID of the security group. You must specify either the security group ID or the security group name in the request. For security groups in a nondefault VPC, you must specify the security group ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>[EC2-Classic, default VPC] The name of the security group. You must specify either the security group ID or the security group name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>One or more sets of IP permissions. Can be used to specify multiple rules in a single command.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

/**
 <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>) or number (see <a href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you specify <code>-1</code>, or a protocol number other than <code>tcp</code>, <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all ports is allowed, regardless of any ports you specify. For <code>tcp</code>, <code>udp</code>, and <code>icmp</code>, you must specify a port range. For protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if you don't, traffic for all types and codes is allowed.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipProtocol;

/**
 <p>[EC2-Classic, default VPC] The name of the source security group. You can't specify this parameter in combination with the following parameters: the CIDR IP address range, the start of the port range, the IP protocol, and the end of the port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule with a specific IP protocol and port range, use a set of IP permissions instead. For EC2-VPC, the source security group must be in the same VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupName;

/**
 <p>[EC2-Classic] The AWS account ID for the source security group, if the source security group is in a different account. You can't specify this parameter in combination with the following parameters: the CIDR IP address range, the IP protocol, the start of the port range, and the end of the port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule with a specific IP protocol and port range, use a set of IP permissions instead.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupOwnerId;

/**
 <p>The end of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 code number. For the ICMP/ICMPv6 code number, use <code>-1</code> to specify all codes. If you specify all ICMP/ICMPv6 types, you must specify all codes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable toPort;

@end

/**
 <p>Describes an Availability Zone.</p>
 */
@interface AWSEC2AvailabilityZone : AWSModel


/**
 <p>Any messages about the Availability Zone.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2AvailabilityZoneMessage *> * _Nullable messages;

/**
 <p>The name of the region.</p>
 */
@property (nonatomic, strong) NSString * _Nullable regionName;

/**
 <p>The state of the Availability Zone.</p>
 */
@property (nonatomic, assign) AWSEC2AvailabilityZoneState state;

/**
 <p>The name of the Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable zoneName;

@end

/**
 <p>Describes a message about an Availability Zone.</p>
 */
@interface AWSEC2AvailabilityZoneMessage : AWSModel


/**
 <p>The message about the Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>The capacity information for instances launched onto the Dedicated Host.</p>
 */
@interface AWSEC2AvailableCapacity : AWSModel


/**
 <p>The total number of instances that the Dedicated Host supports.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceCapacity *> * _Nullable availableInstanceCapacity;

/**
 <p>The number of vCPUs available on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable availableVCpus;

@end

/**
 
 */
@interface AWSEC2BlobAttributeValue : AWSModel


/**
 
 */
@property (nonatomic, strong) NSData * _Nullable value;

@end

/**
 <p>Describes a block device mapping.</p>
 */
@interface AWSEC2BlockDeviceMapping : AWSModel


/**
 <p>The device name (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>Parameters used to automatically set up EBS volumes when the instance is launched.</p>
 */
@property (nonatomic, strong) AWSEC2EbsBlockDevice * _Nullable ebs;

/**
 <p>Suppresses the specified device included in the block device mapping of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable noDevice;

/**
 <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are numbered starting from 0. An instance type with 2 available instance store volumes can specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>.The number of available instance store volumes depends on the instance type. After you connect to the instance, you must mount the volume.</p><p>Constraints: For M3 instances, you must specify instance store volumes in the block device mapping for the instance. When you launch an M3 instance, we ignore any instance store volumes specified in the block device mapping for the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualName;

@end

/**
 <p>Contains the parameters for BundleInstance.</p>
 Required parameters: [InstanceId, Storage]
 */
@interface AWSEC2BundleInstanceRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance to bundle.</p><p>Type: String</p><p>Default: None</p><p>Required: Yes</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The bucket in which to store the AMI. You can specify a bucket that you already own or a new bucket that Amazon EC2 creates on your behalf. If you specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
 */
@property (nonatomic, strong) AWSEC2Storage * _Nullable storage;

@end

/**
 <p>Contains the output of BundleInstance.</p>
 */
@interface AWSEC2BundleInstanceResult : AWSModel


/**
 <p>Information about the bundle task.</p>
 */
@property (nonatomic, strong) AWSEC2BundleTask * _Nullable bundleTask;

@end

/**
 <p>Describes a bundle task.</p>
 */
@interface AWSEC2BundleTask : AWSModel


/**
 <p>The ID of the bundle task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bundleId;

/**
 <p>If the task fails, a description of the error.</p>
 */
@property (nonatomic, strong) AWSEC2BundleTaskError * _Nullable bundleTaskError;

/**
 <p>The ID of the instance associated with this bundle task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The level of task completion, as a percent (for example, 20%).</p>
 */
@property (nonatomic, strong) NSString * _Nullable progress;

/**
 <p>The time this task started.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>The state of the task.</p>
 */
@property (nonatomic, assign) AWSEC2BundleTaskState state;

/**
 <p>The Amazon S3 storage locations.</p>
 */
@property (nonatomic, strong) AWSEC2Storage * _Nullable storage;

/**
 <p>The time of the most recent update for the task.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable updateTime;

@end

/**
 <p>Describes an error for <a>BundleInstance</a>.</p>
 */
@interface AWSEC2BundleTaskError : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable code;

/**
 <p>The error message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Contains the parameters for CancelBundleTask.</p>
 Required parameters: [BundleId]
 */
@interface AWSEC2CancelBundleTaskRequest : AWSRequest


/**
 <p>The ID of the bundle task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bundleId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of CancelBundleTask.</p>
 */
@interface AWSEC2CancelBundleTaskResult : AWSModel


/**
 <p>Information about the bundle task.</p>
 */
@property (nonatomic, strong) AWSEC2BundleTask * _Nullable bundleTask;

@end

/**
 <p>Contains the parameters for CancelConversionTask.</p>
 Required parameters: [ConversionTaskId]
 */
@interface AWSEC2CancelConversionRequest : AWSRequest


/**
 <p>The ID of the conversion task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable conversionTaskId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The reason for canceling the conversion task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reasonMessage;

@end

/**
 <p>Contains the parameters for CancelExportTask.</p>
 Required parameters: [ExportTaskId]
 */
@interface AWSEC2CancelExportTaskRequest : AWSRequest


/**
 <p>The ID of the export task. This is the ID returned by <code>CreateInstanceExportTask</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable exportTaskId;

@end

/**
 <p>Contains the parameters for CancelImportTask.</p>
 */
@interface AWSEC2CancelImportTaskRequest : AWSRequest


/**
 <p>The reason for canceling the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cancelReason;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the import image or import snapshot task to be canceled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importTaskId;

@end

/**
 <p>Contains the output for CancelImportTask.</p>
 */
@interface AWSEC2CancelImportTaskResult : AWSModel


/**
 <p>The ID of the task being canceled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importTaskId;

/**
 <p>The current state of the task being canceled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable previousState;

/**
 <p>The current state of the task being canceled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable state;

@end

/**
 <p>Contains the parameters for CancelReservedInstancesListing.</p>
 Required parameters: [ReservedInstancesListingId]
 */
@interface AWSEC2CancelReservedInstancesListingRequest : AWSRequest


/**
 <p>The ID of the Reserved Instance listing.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesListingId;

@end

/**
 <p>Contains the output of CancelReservedInstancesListing.</p>
 */
@interface AWSEC2CancelReservedInstancesListingResult : AWSModel


/**
 <p>The Reserved Instance listing.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesListing *> * _Nullable reservedInstancesListings;

@end

/**
 <p>Describes a Spot Fleet error.</p>
 Required parameters: [Code, Message]
 */
@interface AWSEC2CancelSpotFleetRequestsError : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, assign) AWSEC2CancelBatchErrorCode code;

/**
 <p>The description for the error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Describes a Spot Fleet request that was not successfully canceled.</p>
 Required parameters: [Error, SpotFleetRequestId]
 */
@interface AWSEC2CancelSpotFleetRequestsErrorItem : AWSModel


/**
 <p>The error.</p>
 */
@property (nonatomic, strong) AWSEC2CancelSpotFleetRequestsError * _Nullable error;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

@end

/**
 <p>Contains the parameters for CancelSpotFleetRequests.</p>
 Required parameters: [SpotFleetRequestIds, TerminateInstances]
 */
@interface AWSEC2CancelSpotFleetRequestsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of the Spot Fleet requests.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable spotFleetRequestIds;

/**
 <p>Indicates whether to terminate instances for a Spot Fleet request if it is canceled successfully.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable terminateInstances;

@end

/**
 <p>Contains the output of CancelSpotFleetRequests.</p>
 */
@interface AWSEC2CancelSpotFleetRequestsResponse : AWSModel


/**
 <p>Information about the Spot Fleet requests that are successfully canceled.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CancelSpotFleetRequestsSuccessItem *> * _Nullable successfulFleetRequests;

/**
 <p>Information about the Spot Fleet requests that are not successfully canceled.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CancelSpotFleetRequestsErrorItem *> * _Nullable unsuccessfulFleetRequests;

@end

/**
 <p>Describes a Spot Fleet request that was successfully canceled.</p>
 Required parameters: [CurrentSpotFleetRequestState, PreviousSpotFleetRequestState, SpotFleetRequestId]
 */
@interface AWSEC2CancelSpotFleetRequestsSuccessItem : AWSModel


/**
 <p>The current state of the Spot Fleet request.</p>
 */
@property (nonatomic, assign) AWSEC2BatchState currentSpotFleetRequestState;

/**
 <p>The previous state of the Spot Fleet request.</p>
 */
@property (nonatomic, assign) AWSEC2BatchState previousSpotFleetRequestState;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

@end

/**
 <p>Contains the parameters for CancelSpotInstanceRequests.</p>
 Required parameters: [SpotInstanceRequestIds]
 */
@interface AWSEC2CancelSpotInstanceRequestsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more Spot Instance request IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable spotInstanceRequestIds;

@end

/**
 <p>Contains the output of CancelSpotInstanceRequests.</p>
 */
@interface AWSEC2CancelSpotInstanceRequestsResult : AWSModel


/**
 <p>One or more Spot Instance requests.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CancelledSpotInstanceRequest *> * _Nullable cancelledSpotInstanceRequests;

@end

/**
 <p>Describes a request to cancel a Spot Instance.</p>
 */
@interface AWSEC2CancelledSpotInstanceRequest : AWSModel


/**
 <p>The ID of the Spot Instance request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotInstanceRequestId;

/**
 <p>The state of the Spot Instance request.</p>
 */
@property (nonatomic, assign) AWSEC2CancelSpotInstanceRequestState state;

@end

/**
 <p>Describes an IPv4 CIDR block.</p>
 */
@interface AWSEC2CidrBlock : AWSModel


/**
 <p>The IPv4 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

@end

/**
 <p>Describes the ClassicLink DNS support status of a VPC.</p>
 */
@interface AWSEC2ClassicLinkDnsSupport : AWSModel


/**
 <p>Indicates whether ClassicLink DNS support is enabled for the VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable classicLinkDnsSupported;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a linked EC2-Classic instance.</p>
 */
@interface AWSEC2ClassicLinkInstance : AWSModel


/**
 <p>A list of security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable groups;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>Any tags assigned to the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a Classic Load Balancer.</p>
 Required parameters: [Name]
 */
@interface AWSEC2ClassicLoadBalancer : AWSModel


/**
 <p>The name of the load balancer.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>Describes the Classic Load Balancers to attach to a Spot Fleet. Spot Fleet registers the running Spot Instances with these Classic Load Balancers.</p>
 Required parameters: [ClassicLoadBalancers]
 */
@interface AWSEC2ClassicLoadBalancersConfig : AWSModel


/**
 <p>One or more Classic Load Balancers.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ClassicLoadBalancer *> * _Nullable classicLoadBalancers;

@end

/**
 <p>Describes the client-specific data.</p>
 */
@interface AWSEC2ClientData : AWSModel


/**
 <p>A user-defined comment about the disk upload.</p>
 */
@property (nonatomic, strong) NSString * _Nullable comment;

/**
 <p>The time that the disk upload ends.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable uploadEnd;

/**
 <p>The size of the uploaded disk image, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable uploadSize;

/**
 <p>The time that the disk upload starts.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable uploadStart;

@end

/**
 <p>Contains the parameters for ConfirmProductInstance.</p>
 Required parameters: [InstanceId, ProductCode]
 */
@interface AWSEC2ConfirmProductInstanceRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The product code. This must be a product code that you own.</p>
 */
@property (nonatomic, strong) NSString * _Nullable productCode;

@end

/**
 <p>Contains the output of ConfirmProductInstance.</p>
 */
@interface AWSEC2ConfirmProductInstanceResult : AWSModel


/**
 <p>The AWS account ID of the instance owner. This is only present if the product code is attached to the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The return value of the request. Returns <code>true</code> if the specified product code is owned by the requester and associated with the specified instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Describes a connection notification for a VPC endpoint or VPC endpoint service.</p>
 */
@interface AWSEC2ConnectionNotification : AWSModel


/**
 <p>The events for the notification. Valid values are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable connectionEvents;

/**
 <p>The ARN of the SNS topic for the notification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable connectionNotificationArn;

/**
 <p>The ID of the notification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable connectionNotificationId;

/**
 <p>The state of the notification.</p>
 */
@property (nonatomic, assign) AWSEC2ConnectionNotificationState connectionNotificationState;

/**
 <p>The type of notification.</p>
 */
@property (nonatomic, assign) AWSEC2ConnectionNotificationType connectionNotificationType;

/**
 <p>The ID of the endpoint service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

/**
 <p>The ID of the VPC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointId;

@end

/**
 <p>Describes a conversion task.</p>
 */
@interface AWSEC2ConversionTask : AWSModel


/**
 <p>The ID of the conversion task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable conversionTaskId;

/**
 <p>The time when the task expires. If the upload isn't complete before the expiration time, we automatically cancel the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable expirationTime;

/**
 <p>If the task is for importing an instance, this contains information about the import instance task.</p>
 */
@property (nonatomic, strong) AWSEC2ImportInstanceTaskDetails * _Nullable importInstance;

/**
 <p>If the task is for importing a volume, this contains information about the import volume task.</p>
 */
@property (nonatomic, strong) AWSEC2ImportVolumeTaskDetails * _Nullable importVolume;

/**
 <p>The state of the conversion task.</p>
 */
@property (nonatomic, assign) AWSEC2ConversionTaskState state;

/**
 <p>The status message related to the conversion task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>Any tags assigned to the task.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 
 */
@interface AWSEC2ReplicateFpgaImageRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The description for the new AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The name for the new AFI. The default is the name of the source AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The ID of the source AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceFpgaImageId;

/**
 <p>The region that contains the source AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceRegion;

@end

/**
 
 */
@interface AWSEC2ReplicateFpgaImageResult : AWSModel


/**
 <p>The ID of the new AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

@end

/**
 <p>Contains the parameters for CopyImage.</p>
 Required parameters: [Name, SourceImageId, SourceRegion]
 */
@interface AWSEC2ReplicateImageRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>A description for the new AMI in the destination region.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies whether the destination snapshots of the copied image should be encrypted. The default CMK for EBS is used unless a non-default AWS Key Management Service (AWS KMS) CMK is specified with <code>KmsKeyId</code>. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>An identifier for the AWS Key Management Service (AWS KMS) customer master key (CMK) to use when creating the encrypted volume. This parameter is only required if you want to use a non-default CMK; if this parameter is not specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be set. </p><p>The CMK identifier may be provided in any of the following formats: </p><ul><li><p>Key ID</p></li><li><p>Key alias, in the form <code>alias/<i>ExampleAlias</i></code></p></li><li><p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code> namespace, followed by the region of the CMK, the AWS account ID of the CMK owner, the <code>key</code> namespace, and then the CMK ID. For example, arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>. </p></li><li><p>ARN using key alias. The alias ARN contains the <code>arn:aws:kms</code> namespace, followed by the region of the CMK, the AWS account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK alias. For example, arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p></li></ul><p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the action you call may appear to complete even though you provided an invalid identifier. This action will eventually report failure. </p><p>The specified CMK must exist in the region that the snapshot is being copied to. </p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>The name of the new AMI in the destination region.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The ID of the AMI to copy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceImageId;

/**
 <p>The name of the region that contains the AMI to copy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceRegion;

@end

/**
 <p>Contains the output of CopyImage.</p>
 */
@interface AWSEC2ReplicateImageResult : AWSModel


/**
 <p>The ID of the new AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

@end

/**
 <p>Contains the parameters for CopySnapshot.</p>
 Required parameters: [SourceRegion, SourceSnapshotId]
 */
@interface AWSEC2ReplicateSnapshotRequest : AWSRequest


/**
 <p>A description for the EBS snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The destination region to use in the <code>PresignedUrl</code> parameter of a snapshot copy operation. This parameter is only valid for specifying the destination region in a <code>PresignedUrl</code> parameter, where it is required.</p><note><p><code>CopySnapshot</code> sends the snapshot copy to the regional endpoint that you send the HTTP request to, such as <code>ec2.us-east-1.amazonaws.com</code> (in the AWS CLI, this is specified with the <code>--region</code> parameter or the default region in your AWS configuration file).</p></note>
 */
@property (nonatomic, strong) NSString * _Nullable destinationRegion;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies whether the destination snapshot should be encrypted. You can encrypt a copy of an unencrypted snapshot using this flag, but you cannot use it to create an unencrypted copy from an encrypted snapshot. Your default CMK for EBS is used unless a non-default AWS Key Management Service (AWS KMS) CMK is specified with <code>KmsKeyId</code>. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>An identifier for the AWS Key Management Service (AWS KMS) customer master key (CMK) to use when creating the encrypted volume. This parameter is only required if you want to use a non-default CMK; if this parameter is not specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be set. </p><p>The CMK identifier may be provided in any of the following formats: </p><ul><li><p>Key ID</p></li><li><p>Key alias</p></li><li><p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code> namespace, followed by the region of the CMK, the AWS account ID of the CMK owner, the <code>key</code> namespace, and then the CMK ID. For example, arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>. </p></li><li><p>ARN using key alias. The alias ARN contains the <code>arn:aws:kms</code> namespace, followed by the region of the CMK, the AWS account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK alias. For example, arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p></li></ul><p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the action you call may appear to complete even though you provided an invalid identifier. The action will eventually fail. </p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>When you copy an encrypted source snapshot using the Amazon EC2 Query API, you must supply a pre-signed URL. This parameter is optional for unencrypted snapshots. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html">Query Requests</a>.</p><p>The <code>PresignedUrl</code> should use the snapshot source endpoint, the <code>CopySnapshot</code> action, and include the <code>SourceRegion</code>, <code>SourceSnapshotId</code>, and <code>DestinationRegion</code> parameters. The <code>PresignedUrl</code> must be signed using AWS Signature Version 4. Because EBS snapshots are stored in Amazon S3, the signing algorithm for this parameter uses the same logic that is described in <a href="http://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating Requests by Using Query Parameters (AWS Signature Version 4)</a> in the <i>Amazon Simple Storage Service API Reference</i>. An invalid or improperly signed <code>PresignedUrl</code> will cause the copy operation to fail asynchronously, and the snapshot will move to an <code>error</code> state.</p>
 */
@property (nonatomic, strong) NSString * _Nullable presignedUrl;

/**
 <p>The ID of the region that contains the snapshot to be copied.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceRegion;

/**
 <p>The ID of the EBS snapshot to copy.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSnapshotId;

@end

/**
 <p>Contains the output of CopySnapshot.</p>
 */
@interface AWSEC2ReplicateSnapshotResult : AWSModel


/**
 <p>The ID of the new snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

@end

/**
 <p>The CPU options for the instance.</p>
 */
@interface AWSEC2CpuOptions : AWSModel


/**
 <p>The number of CPU cores for the instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable coreCount;

/**
 <p>The number of threads per CPU core.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable threadsPerCore;

@end

/**
 <p>The CPU options for the instance. Both the core count and threads per core must be specified in the request.</p>
 */
@interface AWSEC2CpuOptionsRequest : AWSModel


/**
 <p>The number of CPU cores for the instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable coreCount;

/**
 <p>The number of threads per CPU core. To disable Intel Hyper-Threading Technology for the instance, specify a value of <code>1</code>. Otherwise, specify the default value of <code>2</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable threadsPerCore;

@end

/**
 <p>Contains the parameters for CreateCustomerGateway.</p>
 Required parameters: [BgpAsn, PublicIp, Type]
 */
@interface AWSEC2CreateCustomerGatewayRequest : AWSRequest


/**
 <p>For devices that support BGP, the customer gateway's BGP ASN.</p><p>Default: 65000</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bgpAsn;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The Internet-routable IP address for the customer gateway's outside interface. The address must be static.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

/**
 <p>The type of VPN connection that this customer gateway supports (<code>ipsec.1</code>).</p>
 */
@property (nonatomic, assign) AWSEC2GatewayType types;

@end

/**
 <p>Contains the output of CreateCustomerGateway.</p>
 */
@interface AWSEC2CreateCustomerGatewayResult : AWSModel


/**
 <p>Information about the customer gateway.</p>
 */
@property (nonatomic, strong) AWSEC2CustomerGateway * _Nullable customerGateway;

@end

/**
 
 */
@interface AWSEC2CreateDefaultSubnetRequest : AWSRequest


/**
 <p>The Availability Zone in which to create the default subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 
 */
@interface AWSEC2CreateDefaultSubnetResult : AWSModel


/**
 <p>Information about the subnet.</p>
 */
@property (nonatomic, strong) AWSEC2Subnet * _Nullable subnet;

@end

/**
 <p>Contains the parameters for CreateDefaultVpc.</p>
 */
@interface AWSEC2CreateDefaultVpcRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of CreateDefaultVpc.</p>
 */
@interface AWSEC2CreateDefaultVpcResult : AWSModel


/**
 <p>Information about the VPC.</p>
 */
@property (nonatomic, strong) AWSEC2Vpc * _Nullable vpc;

@end

/**
 <p>Contains the parameters for CreateDhcpOptions.</p>
 Required parameters: [DhcpConfigurations]
 */
@interface AWSEC2CreateDhcpOptionsRequest : AWSRequest


/**
 <p>A DHCP configuration option.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LatestDhcpConfiguration *> * _Nullable dhcpConfigurations;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of CreateDhcpOptions.</p>
 */
@interface AWSEC2CreateDhcpOptionsResult : AWSModel


/**
 <p>A set of DHCP options.</p>
 */
@property (nonatomic, strong) AWSEC2DhcpOptions * _Nullable dhcpOptions;

@end

/**
 
 */
@interface AWSEC2CreateEgressOnlyInternetGatewayRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC for which to create the egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 
 */
@interface AWSEC2CreateEgressOnlyInternetGatewayResult : AWSModel


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Information about the egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) AWSEC2EgressOnlyInternetGateway * _Nullable egressOnlyInternetGateway;

@end

/**
 
 */
@interface AWSEC2CreateFleetRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Indicates whether running instances should be terminated if the total target capacity of the EC2 Fleet is decreased below the current size of the EC2 Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2FleetExcessCapacityTerminationPolicy excessCapacityTerminationPolicy;

/**
 <p>The configuration for the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FleetLaunchTemplateConfigRequest *> * _Nullable launchTemplateConfigs;

/**
 <p>Indicates whether EC2 Fleet should replace unhealthy instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable replaceUnhealthyInstances;

/**
 <p>Includes <code>SpotAllocationStrategy</code> and <code>SpotInstanceInterruptionBehavior</code> inside this structure.</p>
 */
@property (nonatomic, strong) AWSEC2SpotOptionsRequest * _Nullable spotOptions;

/**
 <p>The tags for an EC2 Fleet resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TagSpecification *> * _Nullable tagSpecifications;

/**
 <p>The <code>TotalTargetCapacity</code>, <code>OnDemandTargetCapacity</code>, <code>SpotTargetCapacity</code>, and <code>DefaultCapacityType</code> structure.</p>
 */
@property (nonatomic, strong) AWSEC2TargetCapacitySpecificationRequest * _Nullable targetCapacitySpecification;

/**
 <p>Indicates whether running instances should be terminated when the EC2 Fleet expires.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable terminateInstancesWithExpiration;

/**
 <p>The type of request. Indicates whether the EC2 Fleet only <code>requests</code> the target capacity, or also attempts to <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet only places the required requests. It does not attempt to replenish instances if capacity is diminished, and does not submit requests in alternative capacity pools if capacity is unavailable. To maintain a certain target capacity, EC2 Fleet places the required requests to meet this target capacity. It also automatically replenishes any interrupted Spot Instances. Default: <code>maintain</code>.</p>
 */
@property (nonatomic, assign) AWSEC2FleetType types;

/**
 <p>The start date and time of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is to start fulfilling the request immediately.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validFrom;

/**
 <p>The end date and time of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point, no new EC2 Fleet requests are placed or able to fulfill the request. The default end date is 7 days from the current date.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 
 */
@interface AWSEC2CreateFleetResult : AWSModel


/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

@end

/**
 <p>Contains the parameters for CreateFlowLogs.</p>
 Required parameters: [DeliverLogsPermissionArn, LogGroupName, ResourceIds, ResourceType, TrafficType]
 */
@interface AWSEC2CreateFlowLogsRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The ARN for the IAM role that's used to post flow logs to a CloudWatch Logs log group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliverLogsPermissionArn;

/**
 <p>The name of the CloudWatch log group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable logGroupName;

/**
 <p>One or more subnet, network interface, or VPC IDs.</p><p>Constraints: Maximum of 1000 resources</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable resourceIds;

/**
 <p>The type of resource on which to create the flow log.</p>
 */
@property (nonatomic, assign) AWSEC2FlowLogsResourceType resourceType;

/**
 <p>The type of traffic to log.</p>
 */
@property (nonatomic, assign) AWSEC2TrafficType trafficType;

@end

/**
 <p>Contains the output of CreateFlowLogs.</p>
 */
@interface AWSEC2CreateFlowLogsResult : AWSModel


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The IDs of the flow logs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable flowLogIds;

/**
 <p>Information about the flow logs that could not be created successfully.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 
 */
@interface AWSEC2CreateFpgaImageRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>A description for the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The location of the encrypted design checkpoint in Amazon S3. The input must be a tarball.</p>
 */
@property (nonatomic, strong) AWSEC2StorageLocation * _Nullable inputStorageLocation;

/**
 <p>The location in Amazon S3 for the output logs.</p>
 */
@property (nonatomic, strong) AWSEC2StorageLocation * _Nullable logsStorageLocation;

/**
 <p>A name for the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 
 */
@interface AWSEC2CreateFpgaImageResult : AWSModel


/**
 <p>The global FPGA image identifier (AGFI ID).</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageGlobalId;

/**
 <p>The FPGA image identifier (AFI ID).</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

@end

/**
 <p>Contains the parameters for CreateImage.</p>
 Required parameters: [InstanceId, Name]
 */
@interface AWSEC2CreateImageRequest : AWSRequest


/**
 <p>Information about one or more block device mappings.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>A description for the new image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>A name for the new image.</p><p>Constraints: 3-128 alphanumeric characters, parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/), dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>By default, Amazon EC2 attempts to shut down and reboot the instance before creating the image. If the 'No Reboot' option is set, Amazon EC2 doesn't shut down the instance before creating the image. When this option is used, file system integrity on the created image can't be guaranteed.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable noReboot;

@end

/**
 <p>Contains the output of CreateImage.</p>
 */
@interface AWSEC2CreateImageResult : AWSModel


/**
 <p>The ID of the new AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

@end

/**
 <p>Contains the parameters for CreateInstanceExportTask.</p>
 Required parameters: [InstanceId]
 */
@interface AWSEC2CreateInstanceExportTaskRequest : AWSRequest


/**
 <p>A description for the conversion task or the resource being exported. The maximum length is 255 bytes.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The format and location for an instance export task.</p>
 */
@property (nonatomic, strong) AWSEC2ExportToS3TaskSpecification * _Nullable exportToS3Task;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The target virtualization environment.</p>
 */
@property (nonatomic, assign) AWSEC2ExportEnvironment targetEnvironment;

@end

/**
 <p>Contains the output for CreateInstanceExportTask.</p>
 */
@interface AWSEC2CreateInstanceExportTaskResult : AWSModel


/**
 <p>Information about the instance export task.</p>
 */
@property (nonatomic, strong) AWSEC2ExportTask * _Nullable exportTask;

@end

/**
 <p>Contains the parameters for CreateInternetGateway.</p>
 */
@interface AWSEC2CreateInternetGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of CreateInternetGateway.</p>
 */
@interface AWSEC2CreateInternetGatewayResult : AWSModel


/**
 <p>Information about the Internet gateway.</p>
 */
@property (nonatomic, strong) AWSEC2InternetGateway * _Nullable internetGateway;

@end

/**
 <p>Contains the parameters for CreateKeyPair.</p>
 Required parameters: [KeyName]
 */
@interface AWSEC2CreateKeyPairRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A unique name for the key pair.</p><p>Constraints: Up to 255 ASCII characters</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

@end

/**
 
 */
@interface AWSEC2CreateLaunchTemplateRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The information for the launch template.</p>
 */
@property (nonatomic, strong) AWSEC2RequestLaunchTemplateData * _Nullable launchTemplateData;

/**
 <p>A name for the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>A description for the first version of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable versionDescription;

@end

/**
 
 */
@interface AWSEC2CreateLaunchTemplateResult : AWSModel


/**
 <p>Information about the launch template.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplate * _Nullable launchTemplate;

@end

/**
 
 */
@interface AWSEC2CreateLaunchTemplateVersionRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The information for the launch template.</p>
 */
@property (nonatomic, strong) AWSEC2RequestLaunchTemplateData * _Nullable launchTemplateData;

/**
 <p>The ID of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version number of the launch template version on which to base the new version. The new version inherits the same launch parameters as the source version, except for parameters that you specify in LaunchTemplateData.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceVersion;

/**
 <p>A description for the version of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable versionDescription;

@end

/**
 
 */
@interface AWSEC2CreateLaunchTemplateVersionResult : AWSModel


/**
 <p>Information about the launch template version.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateVersion * _Nullable launchTemplateVersion;

@end

/**
 <p>Contains the parameters for CreateNatGateway.</p>
 Required parameters: [AllocationId, SubnetId]
 */
@interface AWSEC2CreateNatGatewayRequest : AWSRequest


/**
 <p>The allocation ID of an Elastic IP address to associate with the NAT gateway. If the Elastic IP address is associated with another resource, you must first disassociate it.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How to Ensure Idempotency</a>.</p><p>Constraint: Maximum 64 ASCII characters.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The subnet in which to create the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Contains the output of CreateNatGateway.</p>
 */
@interface AWSEC2CreateNatGatewayResult : AWSModel


/**
 <p>Unique, case-sensitive identifier to ensure the idempotency of the request. Only returned if a client token was provided in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Information about the NAT gateway.</p>
 */
@property (nonatomic, strong) AWSEC2NatGateway * _Nullable natGateway;

@end

/**
 <p>Contains the parameters for CreateNetworkAclEntry.</p>
 Required parameters: [Egress, NetworkAclId, Protocol, RuleAction, RuleNumber]
 */
@interface AWSEC2CreateNetworkAclEntryRequest : AWSRequest


/**
 <p>The IPv4 network range to allow or deny, in CIDR notation (for example <code>172.16.0.0/24</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Indicates whether this is an egress rule (rule is applied to traffic leaving the subnet).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable egress;

/**
 <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the ICMP protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
 */
@property (nonatomic, strong) AWSEC2IcmpTypeCode * _Nullable icmpTypeCode;

/**
 <p>The IPv6 network range to allow or deny, in CIDR notation (for example <code>2001:db8:1234:1a00::/64</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>The ID of the network ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

/**
 <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
 */
@property (nonatomic, strong) AWSEC2PortRange * _Nullable portRange;

/**
 <p>The protocol. A value of <code>-1</code> or <code>all</code> means all protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol number other than <code>6</code> (tcp), <code>17</code> (udp), or <code>1</code> (icmp), traffic on all ports is allowed, regardless of any ports or ICMP types or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed, regardless of any that you specify. If you specify protocol <code>58</code> (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable protocols;

/**
 <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
 */
@property (nonatomic, assign) AWSEC2RuleAction ruleAction;

/**
 <p>The rule number for the entry (for example, 100). ACL entries are processed in ascending order by rule number.</p><p>Constraints: Positive integer from 1 to 32766. The range 32767 to 65535 is reserved for internal use.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ruleNumber;

@end

/**
 <p>Contains the parameters for CreateNetworkAcl.</p>
 Required parameters: [VpcId]
 */
@interface AWSEC2CreateNetworkAclRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of CreateNetworkAcl.</p>
 */
@interface AWSEC2CreateNetworkAclResult : AWSModel


/**
 <p>Information about the network ACL.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkAcl * _Nullable networkAcl;

@end

/**
 <p>Contains the parameters for CreateNetworkInterfacePermission.</p>
 Required parameters: [NetworkInterfaceId, Permission]
 */
@interface AWSEC2CreateNetworkInterfacePermissionRequest : AWSRequest


/**
 <p>The AWS account ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable awsAccountId;

/**
 <p>The AWS service. Currently not supported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable awsService;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The type of permission to grant.</p>
 */
@property (nonatomic, assign) AWSEC2InterfacePermissionType permission;

@end

/**
 <p>Contains the output of CreateNetworkInterfacePermission.</p>
 */
@interface AWSEC2CreateNetworkInterfacePermissionResult : AWSModel


/**
 <p>Information about the permission for the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfacePermission * _Nullable interfacePermission;

@end

/**
 <p>Contains the parameters for CreateNetworkInterface.</p>
 Required parameters: [SubnetId]
 */
@interface AWSEC2CreateNetworkInterfaceRequest : AWSRequest


/**
 <p>A description for the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of one or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2 automatically selects the IPv6 addresses from the subnet range. You can't use this option if specifying specific IPv6 addresses. If your subnet has the <code>AssignIpv6AddressOnCreation</code> attribute set to <code>true</code>, you can specify <code>0</code> to override this setting.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your subnet. You can't use this option if you're specifying a number of IPv6 addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The primary private IPv4 address of the network interface. If you don't specify an IPv4 address, Amazon EC2 selects one for you from the subnet's IPv4 CIDR range. If you specify an IP address, you cannot indicate any IP addresses specified in <code>privateIpAddresses</code> as primary (only one IP address can be designated as primary).</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>One or more private IPv4 addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrivateIpAddressSpecification *> * _Nullable privateIpAddresses;

/**
 <p>The number of secondary private IPv4 addresses to assign to a network interface. When you specify a number of secondary IPv4 addresses, Amazon EC2 selects these IP addresses within the subnet's IPv4 CIDR range. You can't specify this option and specify more than one private IP address using <code>privateIpAddresses</code>.</p><p>The number of IP addresses you can assign to a network interface varies by instance type. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-eni.html#AvailableIpPerENI">IP Addresses Per ENI Per Instance Type</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable secondaryPrivateIpAddressCount;

/**
 <p>The ID of the subnet to associate with the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Contains the output of CreateNetworkInterface.</p>
 */
@interface AWSEC2CreateNetworkInterfaceResult : AWSModel


/**
 <p>Information about the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterface * _Nullable networkInterface;

@end

/**
 <p>Contains the parameters for CreatePlacementGroup.</p>
 Required parameters: [GroupName, Strategy]
 */
@interface AWSEC2CreatePlacementGroupRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A name for the placement group. Must be unique within the scope of your account for the region.</p><p>Constraints: Up to 255 ASCII characters</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The placement strategy.</p>
 */
@property (nonatomic, assign) AWSEC2PlacementStrategy strategy;

@end

/**
 <p>Contains the parameters for CreateReservedInstancesListing.</p>
 Required parameters: [ClientToken, InstanceCount, PriceSchedules, ReservedInstancesId]
 */
@interface AWSEC2CreateReservedInstancesListingRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure idempotency of your listings. This helps avoid duplicate listings. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The number of instances that are a part of a Reserved Instance account to be listed in the Reserved Instance Marketplace. This number should be less than or equal to the instance count associated with the Reserved Instance ID specified in this call.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>A list specifying the price of the Standard Reserved Instance for each month remaining in the Reserved Instance term.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PriceScheduleSpecification *> * _Nullable priceSchedules;

/**
 <p>The ID of the active Standard Reserved Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

@end

/**
 <p>Contains the output of CreateReservedInstancesListing.</p>
 */
@interface AWSEC2CreateReservedInstancesListingResult : AWSModel


/**
 <p>Information about the Standard Reserved Instance listing.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesListing *> * _Nullable reservedInstancesListings;

@end

/**
 <p>Contains the parameters for CreateRoute.</p>
 Required parameters: [RouteTableId]
 */
@interface AWSEC2CreateRouteRequest : AWSRequest


/**
 <p>The IPv4 CIDR address block used for the destination match. Routing decisions are based on the most specific match.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>The IPv6 CIDR block used for the destination match. Routing decisions are based on the most specific match.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationIpv6CidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable egressOnlyInternetGatewayId;

/**
 <p>The ID of an Internet gateway or virtual private gateway attached to your VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable gatewayId;

/**
 <p>The ID of a NAT instance in your VPC. The operation fails if you specify an instance ID unless exactly one network interface is attached.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable natGatewayId;

/**
 <p>The ID of a network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The ID of the route table for the route.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

/**
 <p>The ID of a VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Contains the output of CreateRoute.</p>
 */
@interface AWSEC2CreateRouteResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for CreateRouteTable.</p>
 Required parameters: [VpcId]
 */
@interface AWSEC2CreateRouteTableRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of CreateRouteTable.</p>
 */
@interface AWSEC2CreateRouteTableResult : AWSModel


/**
 <p>Information about the route table.</p>
 */
@property (nonatomic, strong) AWSEC2RouteTable * _Nullable routeTable;

@end

/**
 <p>Contains the parameters for CreateSecurityGroup.</p>
 Required parameters: [Description, GroupName]
 */
@interface AWSEC2CreateSecurityGroupRequest : AWSRequest


/**
 <p>A description for the security group. This is informational only.</p><p>Constraints: Up to 255 characters in length</p><p>Constraints for EC2-Classic: ASCII characters</p><p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The name of the security group.</p><p>Constraints: Up to 255 characters in length. Cannot start with <code>sg-</code>.</p><p>Constraints for EC2-Classic: ASCII characters</p><p>Constraints for EC2-VPC: a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>[EC2-VPC] The ID of the VPC. Required for EC2-VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of CreateSecurityGroup.</p>
 */
@interface AWSEC2CreateSecurityGroupResult : AWSModel


/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

@end

/**
 <p>Contains the parameters for CreateSnapshot.</p>
 Required parameters: [VolumeId]
 */
@interface AWSEC2CreateSnapshotRequest : AWSRequest


/**
 <p>A description for the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The tags to apply to the snapshot during creation.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TagSpecification *> * _Nullable tagSpecifications;

/**
 <p>The ID of the EBS volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Contains the parameters for CreateSpotDatafeedSubscription.</p>
 Required parameters: [Bucket]
 */
@interface AWSEC2CreateSpotDatafeedSubscriptionRequest : AWSRequest


/**
 <p>The Amazon S3 bucket in which to store the Spot Instance data feed.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucket;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A prefix for the data feed file names.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

@end

/**
 <p>Contains the output of CreateSpotDatafeedSubscription.</p>
 */
@interface AWSEC2CreateSpotDatafeedSubscriptionResult : AWSModel


/**
 <p>The Spot Instance data feed subscription.</p>
 */
@property (nonatomic, strong) AWSEC2SpotDatafeedSubscription * _Nullable spotDatafeedSubscription;

@end

/**
 <p>Contains the parameters for CreateSubnet.</p>
 Required parameters: [CidrBlock, VpcId]
 */
@interface AWSEC2CreateSubnetRequest : AWSRequest


/**
 <p>The Availability Zone for the subnet.</p><p>Default: AWS selects one for you. If you create more than one subnet in your VPC, we may not necessarily select a different zone for each subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The IPv4 network range for the subnet, in CIDR notation. For example, <code>10.0.0.0/24</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IPv6 network range for the subnet, in CIDR notation. The subnet size must use a /64 prefix length.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of CreateSubnet.</p>
 */
@interface AWSEC2CreateSubnetResult : AWSModel


/**
 <p>Information about the subnet.</p>
 */
@property (nonatomic, strong) AWSEC2Subnet * _Nullable subnet;

@end

/**
 <p>Contains the parameters for CreateTags.</p>
 Required parameters: [Resources, Tags]
 */
@interface AWSEC2CreateTagsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of one or more resources to tag. For example, ami-1a2b3c4d.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable resources;

/**
 <p>One or more tags. The <code>value</code> parameter is required, but if you don't want the tag to have a value, specify the parameter with no value, and we set the value to an empty string. </p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Describes the user or group to be added or removed from the permissions for a volume.</p>
 */
@interface AWSEC2CreateVolumePermission : AWSModel


/**
 <p>The specific group that is to be added or removed from a volume's list of create volume permissions.</p>
 */
@property (nonatomic, assign) AWSEC2PermissionGroup group;

/**
 <p>The specific AWS account ID that is to be added or removed from a volume's list of create volume permissions.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userId;

@end

/**
 <p>Describes modifications to the permissions for a volume.</p>
 */
@interface AWSEC2CreateVolumePermissionModifications : AWSModel


/**
 <p>Adds a specific AWS account ID or group to a volume's list of create volume permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CreateVolumePermission *> * _Nullable add;

/**
 <p>Removes a specific AWS account ID or group from a volume's list of create volume permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CreateVolumePermission *> * _Nullable remove;

@end

/**
 <p>Contains the parameters for CreateVolume.</p>
 Required parameters: [AvailabilityZone]
 */
@interface AWSEC2CreateVolumeRequest : AWSRequest


/**
 <p>The Availability Zone in which to create the volume. Use <a>DescribeAvailabilityZones</a> to list the Availability Zones that are currently available to you.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies whether the volume should be encrypted. Encrypted Amazon EBS volumes may only be attached to instances that support Amazon EBS encryption. Volumes that are created from encrypted snapshots are automatically encrypted. There is no way to create an encrypted volume from an unencrypted snapshot or vice versa. If your AMI uses encrypted volumes, you can only launch it on supported instance types. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSEncryption.html">Amazon EBS Encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) to provision for the volume, with a maximum ratio of 50 IOPS/GiB. Range is 100 to 32000 IOPS for volumes in most regions. For exceptions, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a>.</p><p>This parameter is valid only for Provisioned IOPS SSD (io1) volumes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>An identifier for the AWS Key Management Service (AWS KMS) customer master key (CMK) to use when creating the encrypted volume. This parameter is only required if you want to use a non-default CMK; if this parameter is not specified, the default CMK for EBS is used. If a <code>KmsKeyId</code> is specified, the <code>Encrypted</code> flag must also be set. </p><p>The CMK identifier may be provided in any of the following formats: </p><ul><li><p>Key ID</p></li><li><p>Key alias</p></li><li><p>ARN using key ID. The ID ARN contains the <code>arn:aws:kms</code> namespace, followed by the region of the CMK, the AWS account ID of the CMK owner, the <code>key</code> namespace, and then the CMK ID. For example, arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:key/<i>abcd1234-a123-456a-a12b-a123b4cd56ef</i>. </p></li><li><p>ARN using key alias. The alias ARN contains the <code>arn:aws:kms</code> namespace, followed by the region of the CMK, the AWS account ID of the CMK owner, the <code>alias</code> namespace, and then the CMK alias. For example, arn:aws:kms:<i>us-east-1</i>:<i>012345678910</i>:alias/<i>ExampleAlias</i>. </p></li></ul><p>AWS parses <code>KmsKeyId</code> asynchronously, meaning that the action you call may appear to complete even though you provided an invalid identifier. The action will eventually fail. </p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>The size of the volume, in GiBs.</p><p>Constraints: 1-16384 for <code>gp2</code>, 4-16384 for <code>io1</code>, 500-16384 for <code>st1</code>, 500-16384 for <code>sc1</code>, and 1-1024 for <code>standard</code>. If you specify a snapshot, the volume size must be equal to or larger than the snapshot size.</p><p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable size;

/**
 <p>The snapshot from which to create the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The tags to apply to the volume during creation.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TagSpecification *> * _Nullable tagSpecifications;

/**
 <p>The volume type. This can be <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for Magnetic volumes.</p><p>Defaults: If no volume type is specified, the default is <code>standard</code> in us-east-1, eu-west-1, eu-central-1, us-west-2, us-west-1, sa-east-1, ap-northeast-1, ap-northeast-2, ap-southeast-1, ap-southeast-2, ap-south-1, us-gov-west-1, and cn-north-1. In all other regions, EBS defaults to <code>gp2</code>.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeType volumeType;

@end

/**
 
 */
@interface AWSEC2CreateVpcEndpointConnectionNotificationRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How to Ensure Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>One or more endpoint events for which to receive notifications. Valid values are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable connectionEvents;

/**
 <p>The ARN of the SNS topic for the notifications.</p>
 */
@property (nonatomic, strong) NSString * _Nullable connectionNotificationArn;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the endpoint service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

/**
 <p>The ID of the endpoint. </p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointId;

@end

/**
 
 */
@interface AWSEC2CreateVpcEndpointConnectionNotificationResult : AWSModel


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Information about the notification.</p>
 */
@property (nonatomic, strong) AWSEC2ConnectionNotification * _Nullable connectionNotification;

@end

/**
 <p>Contains the parameters for CreateVpcEndpoint.</p>
 Required parameters: [VpcId, ServiceName]
 */
@interface AWSEC2CreateVpcEndpointRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How to Ensure Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>(Gateway endpoint) A policy to attach to the endpoint that controls access to the service. The policy must be in valid JSON format. If this parameter is not specified, we attach a default policy that allows full access to the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyDocument;

/**
 <p>(Interface endpoint) Indicate whether to associate a private hosted zone with the specified VPC. The private hosted zone contains a record set for the default public DNS name for the service for the region (for example, <code>kinesis.us-east-1.amazonaws.com</code>) which resolves to the private IP addresses of the endpoint network interfaces in the VPC. This enables you to make requests to the default public DNS name for the service instead of the public DNS names that are automatically generated by the VPC endpoint service.</p><p>To use a private hosted zone, you must set the following VPC attributes to <code>true</code>: <code>enableDnsHostnames</code> and <code>enableDnsSupport</code>. Use <a>ModifyVpcAttribute</a> to set the VPC attributes.</p><p>Default: <code>true</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable privateDnsEnabled;

/**
 <p>(Gateway endpoint) One or more route table IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable routeTableIds;

/**
 <p>(Interface endpoint) The ID of one or more security groups to associate with the endpoint network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>The service name. To get a list of available services, use the <a>DescribeVpcEndpointServices</a> request, or get the name from the service provider.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceName;

/**
 <p>(Interface endpoint) The ID of one or more subnets in which to create an endpoint network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable subnetIds;

/**
 <p>The type of endpoint.</p><p>Default: Gateway</p>
 */
@property (nonatomic, assign) AWSEC2VpcEndpointType vpcEndpointType;

/**
 <p>The ID of the VPC in which the endpoint will be used.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of CreateVpcEndpoint.</p>
 */
@interface AWSEC2CreateVpcEndpointResult : AWSModel


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Information about the endpoint.</p>
 */
@property (nonatomic, strong) AWSEC2VpcEndpoint * _Nullable vpcEndpoint;

@end

/**
 
 */
@interface AWSEC2CreateVpcEndpointServiceConfigurationRequest : AWSRequest


/**
 <p>Indicate whether requests from service consumers to create an endpoint to your service must be accepted. To accept a request, use <a>AcceptVpcEndpointConnections</a>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable acceptanceRequired;

/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The Amazon Resource Names (ARNs) of one or more Network Load Balancers for your service.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable networkLoadBalancerArns;

@end

/**
 
 */
@interface AWSEC2CreateVpcEndpointServiceConfigurationResult : AWSModel


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Information about the service configuration.</p>
 */
@property (nonatomic, strong) AWSEC2ServiceConfiguration * _Nullable serviceConfiguration;

@end

/**
 <p>Contains the parameters for CreateVpcPeeringConnection.</p>
 */
@interface AWSEC2CreateVpcPeeringConnectionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The AWS account ID of the owner of the accepter VPC.</p><p>Default: Your AWS account ID</p>
 */
@property (nonatomic, strong) NSString * _Nullable peerOwnerId;

/**
 <p>The region code for the accepter VPC, if the accepter VPC is located in a region other than the region in which you make the request.</p><p>Default: The region in which you make the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable peerRegion;

/**
 <p>The ID of the VPC with which you are creating the VPC peering connection. You must specify this parameter in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable peerVpcId;

/**
 <p>The ID of the requester VPC. You must specify this parameter in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of CreateVpcPeeringConnection.</p>
 */
@interface AWSEC2CreateVpcPeeringConnectionResult : AWSModel


/**
 <p>Information about the VPC peering connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpcPeeringConnection * _Nullable vpcPeeringConnection;

@end

/**
 <p>Contains the parameters for CreateVpc.</p>
 Required parameters: [CidrBlock]
 */
@interface AWSEC2CreateVpcRequest : AWSRequest


/**
 <p>Requests an Amazon-provided IPv6 CIDR block with a /56 prefix length for the VPC. You cannot specify the range of IP addresses, or the size of the CIDR block.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amazonProvidedIpv6CidrBlock;

/**
 <p>The IPv4 network range for the VPC, in CIDR notation. For example, <code>10.0.0.0/16</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The tenancy options for instances launched into the VPC. For <code>default</code>, instances are launched with shared tenancy by default. You can launch instances with any tenancy into a shared tenancy VPC. For <code>dedicated</code>, instances are launched as dedicated tenancy instances by default. You can only launch instances with a tenancy of <code>dedicated</code> or <code>host</code> into a dedicated tenancy VPC. </p><p><b>Important:</b> The <code>host</code> value cannot be used with this parameter. Use the <code>default</code> or <code>dedicated</code> values only.</p><p>Default: <code>default</code></p>
 */
@property (nonatomic, assign) AWSEC2Tenancy instanceTenancy;

@end

/**
 <p>Contains the output of CreateVpc.</p>
 */
@interface AWSEC2CreateVpcResult : AWSModel


/**
 <p>Information about the VPC.</p>
 */
@property (nonatomic, strong) AWSEC2Vpc * _Nullable vpc;

@end

/**
 <p>Contains the parameters for CreateVpnConnection.</p>
 Required parameters: [CustomerGatewayId, Type, VpnGatewayId]
 */
@interface AWSEC2CreateVpnConnectionRequest : AWSRequest


/**
 <p>The ID of the customer gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customerGatewayId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The options for the VPN connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpnConnectionOptionsSpecification * _Nullable options;

/**
 <p>The type of VPN connection (<code>ipsec.1</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable types;

/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnGatewayId;

@end

/**
 <p>Contains the output of CreateVpnConnection.</p>
 */
@interface AWSEC2CreateVpnConnectionResult : AWSModel


/**
 <p>Information about the VPN connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpnConnection * _Nullable vpnConnection;

@end

/**
 <p>Contains the parameters for CreateVpnConnectionRoute.</p>
 Required parameters: [DestinationCidrBlock, VpnConnectionId]
 */
@interface AWSEC2CreateVpnConnectionRouteRequest : AWSRequest


/**
 <p>The CIDR block associated with the local subnet of the customer network.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>The ID of the VPN connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnConnectionId;

@end

/**
 <p>Contains the parameters for CreateVpnGateway.</p>
 Required parameters: [Type]
 */
@interface AWSEC2CreateVpnGatewayRequest : AWSRequest


/**
 <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP session. If you're using a 16-bit ASN, it must be in the 64512 to 65534 range. If you're using a 32-bit ASN, it must be in the 4200000000 to 4294967294 range.</p><p>Default: 64512</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amazonSideAsn;

/**
 <p>The Availability Zone for the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The type of VPN connection this virtual private gateway supports.</p>
 */
@property (nonatomic, assign) AWSEC2GatewayType types;

@end

/**
 <p>Contains the output of CreateVpnGateway.</p>
 */
@interface AWSEC2CreateVpnGatewayResult : AWSModel


/**
 <p>Information about the virtual private gateway.</p>
 */
@property (nonatomic, strong) AWSEC2VpnGateway * _Nullable vpnGateway;

@end

/**
 <p>Describes the credit option for CPU usage of a T2 instance.</p>
 */
@interface AWSEC2CreditSpecification : AWSModel


/**
 <p>The credit option for CPU usage of a T2 instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cpuCredits;

@end

/**
 <p>The credit option for CPU usage of a T2 instance.</p>
 Required parameters: [CpuCredits]
 */
@interface AWSEC2CreditSpecificationRequest : AWSModel


/**
 <p>The credit option for CPU usage of a T2 instance. Valid values are <code>standard</code> and <code>unlimited</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cpuCredits;

@end

/**
 <p>Describes a customer gateway.</p>
 */
@interface AWSEC2CustomerGateway : AWSModel


/**
 <p>The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number (ASN).</p>
 */
@property (nonatomic, strong) NSString * _Nullable bgpAsn;

/**
 <p>The ID of the customer gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customerGatewayId;

/**
 <p>The Internet-routable IP address of the customer gateway's outside interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipAddress;

/**
 <p>The current state of the customer gateway (<code>pending | available | deleting | deleted</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable state;

/**
 <p>Any tags assigned to the customer gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The type of VPN connection the customer gateway supports (<code>ipsec.1</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable types;

@end

/**
 <p>Contains the parameters for DeleteCustomerGateway.</p>
 Required parameters: [CustomerGatewayId]
 */
@interface AWSEC2DeleteCustomerGatewayRequest : AWSRequest


/**
 <p>The ID of the customer gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customerGatewayId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the parameters for DeleteDhcpOptions.</p>
 Required parameters: [DhcpOptionsId]
 */
@interface AWSEC2DeleteDhcpOptionsRequest : AWSRequest


/**
 <p>The ID of the DHCP options set.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dhcpOptionsId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 
 */
@interface AWSEC2DeleteEgressOnlyInternetGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable egressOnlyInternetGatewayId;

@end

/**
 
 */
@interface AWSEC2DeleteEgressOnlyInternetGatewayResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returnCode;

@end

/**
 <p>Describes an EC2 Fleet error.</p>
 */
@interface AWSEC2DeleteFleetError : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, assign) AWSEC2DeleteFleetErrorCode code;

/**
 <p>The description for the error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Describes an EC2 Fleet that was not successfully deleted.</p>
 */
@interface AWSEC2DeleteFleetErrorItem : AWSModel


/**
 <p>The error.</p>
 */
@property (nonatomic, strong) AWSEC2DeleteFleetError * _Nullable error;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

@end

/**
 <p>Describes an EC2 Fleet that was successfully deleted.</p>
 */
@interface AWSEC2DeleteFleetSuccessItem : AWSModel


/**
 <p>The current state of the EC2 Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2FleetStateCode currentFleetState;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>The previous state of the EC2 Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2FleetStateCode previousFleetState;

@end

/**
 
 */
@interface AWSEC2DeleteFleetsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of the EC2 Fleets.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable fleetIds;

/**
 <p>Indicates whether to terminate instances for an EC2 Fleet if it is deleted successfully.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable terminateInstances;

@end

/**
 
 */
@interface AWSEC2DeleteFleetsResult : AWSModel


/**
 <p>Information about the EC2 Fleets that are successfully deleted.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DeleteFleetSuccessItem *> * _Nullable successfulFleetDeletions;

/**
 <p>Information about the EC2 Fleets that are not successfully deleted.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DeleteFleetErrorItem *> * _Nullable unsuccessfulFleetDeletions;

@end

/**
 <p>Contains the parameters for DeleteFlowLogs.</p>
 Required parameters: [FlowLogIds]
 */
@interface AWSEC2DeleteFlowLogsRequest : AWSRequest


/**
 <p>One or more flow log IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable flowLogIds;

@end

/**
 <p>Contains the output of DeleteFlowLogs.</p>
 */
@interface AWSEC2DeleteFlowLogsResult : AWSModel


/**
 <p>Information about the flow logs that could not be deleted successfully.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 
 */
@interface AWSEC2DeleteFpgaImageRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

@end

/**
 
 */
@interface AWSEC2DeleteFpgaImageResult : AWSModel


/**
 <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for DeleteInternetGateway.</p>
 Required parameters: [InternetGatewayId]
 */
@interface AWSEC2DeleteInternetGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable internetGatewayId;

@end

/**
 <p>Contains the parameters for DeleteKeyPair.</p>
 Required parameters: [KeyName]
 */
@interface AWSEC2DeleteKeyPairRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

@end

/**
 
 */
@interface AWSEC2DeleteLaunchTemplateRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

@end

/**
 
 */
@interface AWSEC2DeleteLaunchTemplateResult : AWSModel


/**
 <p>Information about the launch template.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplate * _Nullable launchTemplate;

@end

/**
 
 */
@interface AWSEC2DeleteLaunchTemplateVersionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version numbers of one or more launch template versions to delete.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable versions;

@end

/**
 <p>Describes a launch template version that could not be deleted.</p>
 */
@interface AWSEC2DeleteLaunchTemplateVersionsResponseErrorItem : AWSModel


/**
 <p>The ID of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>Information about the error.</p>
 */
@property (nonatomic, strong) AWSEC2ResponseError * _Nullable responseError;

/**
 <p>The version number of the launch template.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable versionNumber;

@end

/**
 <p>Describes a launch template version that was successfully deleted.</p>
 */
@interface AWSEC2DeleteLaunchTemplateVersionsResponseSuccessItem : AWSModel


/**
 <p>The ID of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version number of the launch template.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable versionNumber;

@end

/**
 
 */
@interface AWSEC2DeleteLaunchTemplateVersionsResult : AWSModel


/**
 <p>Information about the launch template versions that were successfully deleted.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DeleteLaunchTemplateVersionsResponseSuccessItem *> * _Nullable successfullyDeletedLaunchTemplateVersions;

/**
 <p>Information about the launch template versions that could not be deleted.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DeleteLaunchTemplateVersionsResponseErrorItem *> * _Nullable unsuccessfullyDeletedLaunchTemplateVersions;

@end

/**
 <p>Contains the parameters for DeleteNatGateway.</p>
 Required parameters: [NatGatewayId]
 */
@interface AWSEC2DeleteNatGatewayRequest : AWSRequest


/**
 <p>The ID of the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable natGatewayId;

@end

/**
 <p>Contains the output of DeleteNatGateway.</p>
 */
@interface AWSEC2DeleteNatGatewayResult : AWSModel


/**
 <p>The ID of the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable natGatewayId;

@end

/**
 <p>Contains the parameters for DeleteNetworkAclEntry.</p>
 Required parameters: [Egress, NetworkAclId, RuleNumber]
 */
@interface AWSEC2DeleteNetworkAclEntryRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Indicates whether the rule is an egress rule.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable egress;

/**
 <p>The ID of the network ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

/**
 <p>The rule number of the entry to delete.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ruleNumber;

@end

/**
 <p>Contains the parameters for DeleteNetworkAcl.</p>
 Required parameters: [NetworkAclId]
 */
@interface AWSEC2DeleteNetworkAclRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the network ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

@end

/**
 <p>Contains the parameters for DeleteNetworkInterfacePermission.</p>
 Required parameters: [NetworkInterfacePermissionId]
 */
@interface AWSEC2DeleteNetworkInterfacePermissionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specify <code>true</code> to remove the permission even if the network interface is attached to an instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable force;

/**
 <p>The ID of the network interface permission.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfacePermissionId;

@end

/**
 <p>Contains the output for DeleteNetworkInterfacePermission.</p>
 */
@interface AWSEC2DeleteNetworkInterfacePermissionResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds, otherwise returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for DeleteNetworkInterface.</p>
 Required parameters: [NetworkInterfaceId]
 */
@interface AWSEC2DeleteNetworkInterfaceRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

@end

/**
 <p>Contains the parameters for DeletePlacementGroup.</p>
 Required parameters: [GroupName]
 */
@interface AWSEC2DeletePlacementGroupRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The name of the placement group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

@end

/**
 <p>Contains the parameters for DeleteRoute.</p>
 Required parameters: [RouteTableId]
 */
@interface AWSEC2DeleteRouteRequest : AWSRequest


/**
 <p>The IPv4 CIDR range for the route. The value you specify must match the CIDR for the route exactly.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>The IPv6 CIDR range for the route. The value you specify must match the CIDR for the route exactly.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationIpv6CidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

@end

/**
 <p>Contains the parameters for DeleteRouteTable.</p>
 Required parameters: [RouteTableId]
 */
@interface AWSEC2DeleteRouteTableRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

@end

/**
 <p>Contains the parameters for DeleteSecurityGroup.</p>
 */
@interface AWSEC2DeleteSecurityGroupRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the security group. Required for a nondefault VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>[EC2-Classic, default VPC] The name of the security group. You can specify either the security group name or the security group ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

@end

/**
 <p>Contains the parameters for DeleteSnapshot.</p>
 Required parameters: [SnapshotId]
 */
@interface AWSEC2DeleteSnapshotRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the EBS snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

@end

/**
 <p>Contains the parameters for DeleteSpotDatafeedSubscription.</p>
 */
@interface AWSEC2DeleteSpotDatafeedSubscriptionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the parameters for DeleteSubnet.</p>
 Required parameters: [SubnetId]
 */
@interface AWSEC2DeleteSubnetRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Contains the parameters for DeleteTags.</p>
 Required parameters: [Resources]
 */
@interface AWSEC2DeleteTagsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of one or more resources.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable resources;

/**
 <p>One or more tags to delete. Specify a tag key and an optional tag value to delete specific tags. If you specify a tag key without a tag value, we delete any tag with this key regardless of its value. If you specify a tag key with an empty string as the tag value, we delete the tag only if its value is an empty string.</p><p>If you omit this parameter, we delete all user-defined tags for the specified resources. We do not delete AWS-generated tags (tags that have the <code>aws:</code> prefix).</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Contains the parameters for DeleteVolume.</p>
 Required parameters: [VolumeId]
 */
@interface AWSEC2DeleteVolumeRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 
 */
@interface AWSEC2DeleteVpcEndpointConnectionNotificationsRequest : AWSRequest


/**
 <p>One or more notification IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable connectionNotificationIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 
 */
@interface AWSEC2DeleteVpcEndpointConnectionNotificationsResult : AWSModel


/**
 <p>Information about the notifications that could not be deleted successfully.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 
 */
@interface AWSEC2DeleteVpcEndpointServiceConfigurationsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of one or more services.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable serviceIds;

@end

/**
 
 */
@interface AWSEC2DeleteVpcEndpointServiceConfigurationsResult : AWSModel


/**
 <p>Information about the service configurations that were not deleted, if applicable.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 <p>Contains the parameters for DeleteVpcEndpoints.</p>
 Required parameters: [VpcEndpointIds]
 */
@interface AWSEC2DeleteVpcEndpointsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more VPC endpoint IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcEndpointIds;

@end

/**
 <p>Contains the output of DeleteVpcEndpoints.</p>
 */
@interface AWSEC2DeleteVpcEndpointsResult : AWSModel


/**
 <p>Information about the VPC endpoints that were not successfully deleted.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 <p>Contains the parameters for DeleteVpcPeeringConnection.</p>
 Required parameters: [VpcPeeringConnectionId]
 */
@interface AWSEC2DeleteVpcPeeringConnectionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Contains the output of DeleteVpcPeeringConnection.</p>
 */
@interface AWSEC2DeleteVpcPeeringConnectionResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for DeleteVpc.</p>
 Required parameters: [VpcId]
 */
@interface AWSEC2DeleteVpcRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the parameters for DeleteVpnConnection.</p>
 Required parameters: [VpnConnectionId]
 */
@interface AWSEC2DeleteVpnConnectionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPN connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnConnectionId;

@end

/**
 <p>Contains the parameters for DeleteVpnConnectionRoute.</p>
 Required parameters: [DestinationCidrBlock, VpnConnectionId]
 */
@interface AWSEC2DeleteVpnConnectionRouteRequest : AWSRequest


/**
 <p>The CIDR block associated with the local subnet of the customer network.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>The ID of the VPN connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnConnectionId;

@end

/**
 <p>Contains the parameters for DeleteVpnGateway.</p>
 Required parameters: [VpnGatewayId]
 */
@interface AWSEC2DeleteVpnGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnGatewayId;

@end

/**
 <p>Contains the parameters for DeregisterImage.</p>
 Required parameters: [ImageId]
 */
@interface AWSEC2DeregisterImageRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

@end

/**
 <p>Contains the parameters for DescribeAccountAttributes.</p>
 */
@interface AWSEC2DescribeAccountAttributesRequest : AWSRequest


/**
 <p>One or more account attribute names.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable attributeNames;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of DescribeAccountAttributes.</p>
 */
@interface AWSEC2DescribeAccountAttributesResult : AWSModel


/**
 <p>Information about one or more account attributes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2AccountAttribute *> * _Nullable accountAttributes;

@end

/**
 <p>Contains the parameters for DescribeAddresses.</p>
 */
@interface AWSEC2DescribeAddressesRequest : AWSRequest


/**
 <p>[EC2-VPC] One or more allocation IDs.</p><p>Default: Describes all your Elastic IP addresses.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable allocationIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters. Filter names and values are case-sensitive.</p><ul><li><p><code>allocation-id</code> - [EC2-VPC] The allocation ID for the address.</p></li><li><p><code>association-id</code> - [EC2-VPC] The association ID for the address.</p></li><li><p><code>domain</code> - Indicates whether the address is for use in EC2-Classic (<code>standard</code>) or in a VPC (<code>vpc</code>).</p></li><li><p><code>instance-id</code> - The ID of the instance the address is associated with, if any.</p></li><li><p><code>network-interface-id</code> - [EC2-VPC] The ID of the network interface that the address is associated with, if any.</p></li><li><p><code>network-interface-owner-id</code> - The AWS account ID of the owner.</p></li><li><p><code>private-ip-address</code> - [EC2-VPC] The private IP address associated with the Elastic IP address.</p></li><li><p><code>public-ip</code> - The Elastic IP address.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of the tag's key). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>[EC2-Classic] One or more Elastic IP addresses.</p><p>Default: Describes all your Elastic IP addresses.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable publicIps;

@end

/**
 <p>Contains the output of DescribeAddresses.</p>
 */
@interface AWSEC2DescribeAddressesResult : AWSModel


/**
 <p>Information about one or more Elastic IP addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Address *> * _Nullable addresses;

@end

/**
 
 */
@interface AWSEC2DescribeAggregateIdFormatRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 
 */
@interface AWSEC2DescribeAggregateIdFormatResult : AWSModel


/**
 <p>Information about each resource's ID format.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IdFormat *> * _Nullable statuses;

/**
 <p>Indicates whether all resource types in the region are configured to use longer IDs. This value is only <code>true</code> if all users are configured to use longer IDs for all resources types in the region.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable useLongIdsAggregated;

@end

/**
 <p>Contains the parameters for DescribeAvailabilityZones.</p>
 */
@interface AWSEC2DescribeAvailabilityZonesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>message</code> - Information about the Availability Zone.</p></li><li><p><code>region-name</code> - The name of the region for the Availability Zone (for example, <code>us-east-1</code>).</p></li><li><p><code>state</code> - The state of the Availability Zone (<code>available</code> | <code>information</code> | <code>impaired</code> | <code>unavailable</code>).</p></li><li><p><code>zone-name</code> - The name of the Availability Zone (for example, <code>us-east-1a</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The names of one or more Availability Zones.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable zoneNames;

@end

/**
 <p>Contains the output of DescribeAvailabiltyZones.</p>
 */
@interface AWSEC2DescribeAvailabilityZonesResult : AWSModel


/**
 <p>Information about one or more Availability Zones.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2AvailabilityZone *> * _Nullable availabilityZones;

@end

/**
 <p>Contains the parameters for DescribeBundleTasks.</p>
 */
@interface AWSEC2DescribeBundleTasksRequest : AWSRequest


/**
 <p>One or more bundle task IDs.</p><p>Default: Describes all your bundle tasks.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable bundleIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>bundle-id</code> - The ID of the bundle task.</p></li><li><p><code>error-code</code> - If the task failed, the error code returned.</p></li><li><p><code>error-message</code> - If the task failed, the error message returned.</p></li><li><p><code>instance-id</code> - The ID of the instance.</p></li><li><p><code>progress</code> - The level of task completion, as a percentage (for example, 20%).</p></li><li><p><code>s3-bucket</code> - The Amazon S3 bucket to store the AMI.</p></li><li><p><code>s3-prefix</code> - The beginning of the AMI name.</p></li><li><p><code>start-time</code> - The time the task started (for example, 2013-09-15T17:15:20.000Z).</p></li><li><p><code>state</code> - The state of the task (<code>pending</code> | <code>waiting-for-shutdown</code> | <code>bundling</code> | <code>storing</code> | <code>cancelling</code> | <code>complete</code> | <code>failed</code>).</p></li><li><p><code>update-time</code> - The time of the most recent update for the task.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

@end

/**
 <p>Contains the output of DescribeBundleTasks.</p>
 */
@interface AWSEC2DescribeBundleTasksResult : AWSModel


/**
 <p>Information about one or more bundle tasks.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BundleTask *> * _Nullable bundleTasks;

@end

/**
 <p>Contains the parameters for DescribeClassicLinkInstances.</p>
 */
@interface AWSEC2DescribeClassicLinkInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>group-id</code> - The ID of a VPC security group that's associated with the instance.</p></li><li><p><code>instance-id</code> - The ID of the instance.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC that the instance is linked to.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more instance IDs. Must be instances linked to a VPC through ClassicLink.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. You cannot specify this parameter and the instance IDs parameter in the same request.</p><p>Constraint: If the value is greater than 1000, we return only 1000 items.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeClassicLinkInstances.</p>
 */
@interface AWSEC2DescribeClassicLinkInstancesResult : AWSModel


/**
 <p>Information about one or more linked EC2-Classic instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ClassicLinkInstance *> * _Nullable instances;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeConversionTasks.</p>
 */
@interface AWSEC2DescribeConversionTasksRequest : AWSRequest


/**
 <p>One or more conversion task IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable conversionTaskIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output for DescribeConversionTasks.</p>
 */
@interface AWSEC2DescribeConversionTasksResult : AWSModel


/**
 <p>Information about the conversion tasks.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ConversionTask *> * _Nullable conversionTasks;

@end

/**
 <p>Contains the parameters for DescribeCustomerGateways.</p>
 */
@interface AWSEC2DescribeCustomerGatewaysRequest : AWSRequest


/**
 <p>One or more customer gateway IDs.</p><p>Default: Describes all your customer gateways.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable customerGatewayIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>bgp-asn</code> - The customer gateway's Border Gateway Protocol (BGP) Autonomous System Number (ASN).</p></li><li><p><code>customer-gateway-id</code> - The ID of the customer gateway.</p></li><li><p><code>ip-address</code> - The IP address of the customer gateway's Internet-routable external interface.</p></li><li><p><code>state</code> - The state of the customer gateway (<code>pending</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p></li><li><p><code>type</code> - The type of customer gateway. Currently, the only supported type is <code>ipsec.1</code>.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

@end

/**
 <p>Contains the output of DescribeCustomerGateways.</p>
 */
@interface AWSEC2DescribeCustomerGatewaysResult : AWSModel


/**
 <p>Information about one or more customer gateways.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CustomerGateway *> * _Nullable customerGateways;

@end

/**
 <p>Contains the parameters for DescribeDhcpOptions.</p>
 */
@interface AWSEC2DescribeDhcpOptionsRequest : AWSRequest


/**
 <p>The IDs of one or more DHCP options sets.</p><p>Default: Describes all your DHCP options sets.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable dhcpOptionsIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>dhcp-options-id</code> - The ID of a set of DHCP options.</p></li><li><p><code>key</code> - The key for one of the options (for example, <code>domain-name</code>).</p></li><li><p><code>value</code> - The value for one of the options.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

@end

/**
 <p>Contains the output of DescribeDhcpOptions.</p>
 */
@interface AWSEC2DescribeDhcpOptionsResult : AWSModel


/**
 <p>Information about one or more DHCP options sets.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DhcpOptions *> * _Nullable dhcpOptions;

@end

/**
 
 */
@interface AWSEC2DescribeEgressOnlyInternetGatewaysRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more egress-only Internet gateway IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable egressOnlyInternetGatewayIds;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeEgressOnlyInternetGatewaysResult : AWSModel


/**
 <p>Information about the egress-only Internet gateways.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2EgressOnlyInternetGateway *> * _Nullable egressOnlyInternetGateways;

/**
 <p>The token to use to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeElasticGpusRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more Elastic GPU IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable elasticGpuIds;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone in which the Elastic GPU resides.</p></li><li><p><code>elastic-gpu-health</code> - The status of the Elastic GPU (<code>OK</code> | <code>IMPAIRED</code>).</p></li><li><p><code>elastic-gpu-state</code> - The state of the Elastic GPU (<code>ATTACHED</code>).</p></li><li><p><code>elastic-gpu-type</code> - The type of Elastic GPU; for example, <code>eg1.medium</code>.</p></li><li><p><code>instance-id</code> - The ID of the instance to which the Elastic GPU is associated.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. This value can be between 5 and 1000.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeElasticGpusResult : AWSModel


/**
 <p>Information about the Elastic GPUs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ElasticGpus *> * _Nullable elasticGpuSet;

/**
 <p>The total number of items to return. If the total number of items available is more than the value specified in max-items then a Next-Token will be provided in the output that you can use to resume pagination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeExportTasks.</p>
 */
@interface AWSEC2DescribeExportTasksRequest : AWSRequest


/**
 <p>One or more export task IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable exportTaskIds;

@end

/**
 <p>Contains the output for DescribeExportTasks.</p>
 */
@interface AWSEC2DescribeExportTasksResult : AWSModel


/**
 <p>Information about the export tasks.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ExportTask *> * _Nullable exportTasks;

@end

/**
 
 */
@interface AWSEC2DescribeFleetHistoryRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The type of events to describe. By default, all events are described.</p>
 */
@property (nonatomic, assign) AWSEC2FleetEventType eventType;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The start date and time for the events, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 
 */
@interface AWSEC2DescribeFleetHistoryResult : AWSModel


/**
 <p>The ID of the EC Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>Information about the events in the history of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2HistoryRecordEntry *> * _Nullable historyRecords;

/**
 <p>The last date and time for the events, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up to this time were retrieved.</p><p>If <code>nextToken</code> indicates that there are more results, this value is not present.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable lastEvaluatedTime;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The start date and time for the events, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 
 */
@interface AWSEC2DescribeFleetInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeFleetInstancesResult : AWSModel


/**
 <p>The running instances. This list is refreshed periodically and might be out of date.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ActiveInstance *> * _Nullable activeInstances;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeFleetsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The ID of the EC2 Fleets.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable fleetIds;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeFleetsResult : AWSModel


/**
 <p>The EC2 Fleets.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FleetData *> * _Nullable fleets;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeFlowLogs.</p>
 */
@interface AWSEC2DescribeFlowLogsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>deliver-log-status</code> - The status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p></li><li><p><code>flow-log-id</code> - The ID of the flow log.</p></li><li><p><code>log-group-name</code> - The name of the log group.</p></li><li><p><code>resource-id</code> - The ID of the VPC, subnet, or network interface.</p></li><li><p><code>traffic-type</code> - The type of traffic (<code>ACCEPT</code> | <code>REJECT</code> | <code>ALL</code>)</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filter;

/**
 <p>One or more flow log IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable flowLogIds;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. You cannot specify this parameter and the flow log IDs parameter in the same request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeFlowLogs.</p>
 */
@interface AWSEC2DescribeFlowLogsResult : AWSModel


/**
 <p>Information about the flow logs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FlowLog *> * _Nullable flowLogs;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeFpgaImageAttributeRequest : AWSRequest


/**
 <p>The AFI attribute.</p>
 */
@property (nonatomic, assign) AWSEC2FpgaImageAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

@end

/**
 
 */
@interface AWSEC2DescribeFpgaImageAttributeResult : AWSModel


/**
 <p>Information about the attribute.</p>
 */
@property (nonatomic, strong) AWSEC2FpgaImageAttribute * _Nullable fpgaImageAttribute;

@end

/**
 
 */
@interface AWSEC2DescribeFpgaImagesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>create-time</code> - The creation time of the AFI.</p></li><li><p><code>fpga-image-id</code> - The FPGA image identifier (AFI ID).</p></li><li><p><code>fpga-image-global-id</code> - The global FPGA image identifier (AGFI ID).</p></li><li><p><code>name</code> - The name of the AFI.</p></li><li><p><code>owner-id</code> - The AWS account ID of the AFI owner.</p></li><li><p><code>product-code</code> - The product code.</p></li><li><p><code>shell-version</code> - The version of the AWS Shell that was used to create the bitstream.</p></li><li><p><code>state</code> - The state of the AFI (<code>pending</code> | <code>failed</code> | <code>available</code> | <code>unavailable</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>update-time</code> - The time of the most recent update.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more AFI IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable fpgaImageIds;

/**
 <p>The maximum number of results to return in a single call.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Filters the AFI by owner. Specify an AWS account ID, <code>self</code> (owner is the sender of the request), or an AWS owner alias (valid values are <code>amazon</code> | <code>aws-marketplace</code>).</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable owners;

@end

/**
 
 */
@interface AWSEC2DescribeFpgaImagesResult : AWSModel


/**
 <p>Information about one or more FPGA images.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FpgaImage *> * _Nullable fpgaImages;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeHostReservationOfferingsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>instance-family</code> - The instance family of the offering (e.g., <code>m4</code>).</p></li><li><p><code>payment-option</code> - The payment option (<code>NoUpfront</code> | <code>PartialUpfront</code> | <code>AllUpfront</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filter;

/**
 <p>This is the maximum duration of the reservation you'd like to purchase, specified in seconds. Reservations are available in one-year and three-year terms. The number of seconds specified must be the number of seconds in a year (365x24x60x60) times one of the supported durations (1 or 3). For example, specify 94608000 for three years.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxDuration;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results can be seen by sending another request with the returned <code>nextToken</code> value. This value can be between 5 and 500; if <code>maxResults</code> is given a larger value than 500, you will receive an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>This is the minimum duration of the reservation you'd like to purchase, specified in seconds. Reservations are available in one-year and three-year terms. The number of seconds specified must be the number of seconds in a year (365x24x60x60) times one of the supported durations (1 or 3). For example, specify 31536000 for one year.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minDuration;

/**
 <p>The token to use to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the reservation offering.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

@end

/**
 
 */
@interface AWSEC2DescribeHostReservationOfferingsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the offerings.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2HostOffering *> * _Nullable offeringSet;

@end

/**
 
 */
@interface AWSEC2DescribeHostReservationsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>instance-family</code> - The instance family (e.g., <code>m4</code>).</p></li><li><p><code>payment-option</code> - The payment option (<code>NoUpfront</code> | <code>PartialUpfront</code> | <code>AllUpfront</code>).</p></li><li><p><code>state</code> - The state of the reservation (<code>payment-pending</code> | <code>payment-failed</code> | <code>active</code> | <code>retired</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filter;

/**
 <p>One or more host reservation IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostReservationIdSet;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results can be seen by sending another request with the returned <code>nextToken</code> value. This value can be between 5 and 500; if <code>maxResults</code> is given a larger value than 500, you will receive an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to use to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeHostReservationsResult : AWSModel


/**
 <p>Details about the reservation's configuration.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2HostReservation *> * _Nullable hostReservationSet;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeHosts.</p>
 */
@interface AWSEC2DescribeHostsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>auto-placement</code> - Whether auto-placement is enabled or disabled (<code>on</code> | <code>off</code>).</p></li><li><p><code>availability-zone</code> - The Availability Zone of the host.</p></li><li><p><code>client-token</code> - The idempotency token you provided when you allocated the host.</p></li><li><p><code>host-reservation-id</code> - The ID of the reservation assigned to this host.</p></li><li><p><code>instance-type</code> - The instance type size that the Dedicated Host is configured to support.</p></li><li><p><code>state</code> - The allocation state of the Dedicated Host (<code>available</code> | <code>under-assessment</code> | <code>permanent-failure</code> | <code>released</code> | <code>released-permanent-failure</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filter;

/**
 <p>The IDs of the Dedicated Hosts. The IDs are used for targeted instance launches.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIds;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results can be seen by sending another request with the returned <code>nextToken</code> value. This value can be between 5 and 500; if <code>maxResults</code> is given a larger value than 500, you will receive an error. You cannot specify this parameter and the host IDs parameter in the same request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeHosts.</p>
 */
@interface AWSEC2DescribeHostsResult : AWSModel


/**
 <p>Information about the Dedicated Hosts.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Host *> * _Nullable hosts;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeIamInstanceProfileAssociationsRequest : AWSRequest


/**
 <p>One or more IAM instance profile associations.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable associationIds;

/**
 <p>One or more filters.</p><ul><li><p><code>instance-id</code> - The ID of the instance.</p></li><li><p><code>state</code> - The state of the association (<code>associating</code> | <code>associated</code> | <code>disassociating</code> | <code>disassociated</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeIamInstanceProfileAssociationsResult : AWSModel


/**
 <p>Information about one or more IAM instance profile associations.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IamInstanceProfileAssociation *> * _Nullable iamInstanceProfileAssociations;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeIdFormat.</p>
 */
@interface AWSEC2DescribeIdFormatRequest : AWSRequest


/**
 <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> | <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> | <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> | <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable resource;

@end

/**
 <p>Contains the output of DescribeIdFormat.</p>
 */
@interface AWSEC2DescribeIdFormatResult : AWSModel


/**
 <p>Information about the ID format for the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IdFormat *> * _Nullable statuses;

@end

/**
 <p>Contains the parameters for DescribeIdentityIdFormat.</p>
 Required parameters: [PrincipalArn]
 */
@interface AWSEC2DescribeIdentityIdFormatRequest : AWSRequest


/**
 <p>The ARN of the principal, which can be an IAM role, IAM user, or the root user.</p>
 */
@property (nonatomic, strong) NSString * _Nullable principalArn;

/**
 <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> | <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> | <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> | <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable resource;

@end

/**
 <p>Contains the output of DescribeIdentityIdFormat.</p>
 */
@interface AWSEC2DescribeIdentityIdFormatResult : AWSModel


/**
 <p>Information about the ID format for the resources.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IdFormat *> * _Nullable statuses;

@end

/**
 <p>Contains the parameters for DescribeImageAttribute.</p>
 Required parameters: [Attribute, ImageId]
 */
@interface AWSEC2DescribeImageAttributeRequest : AWSRequest


/**
 <p>The AMI attribute.</p><p><b>Note</b>: Depending on your account privileges, the <code>blockDeviceMapping</code> attribute may return a <code>Client.AuthFailure</code> error. If this happens, use <a>DescribeImages</a> to get information about the block device mapping for the AMI.</p>
 */
@property (nonatomic, assign) AWSEC2ImageAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

@end

/**
 <p>Contains the parameters for DescribeImages.</p>
 */
@interface AWSEC2DescribeImagesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Scopes the images by users with explicit launch permissions. Specify an AWS account ID, <code>self</code> (the sender of the request), or <code>all</code> (public AMIs).</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable executableUsers;

/**
 <p>One or more filters.</p><ul><li><p><code>architecture</code> - The image architecture (<code>i386</code> | <code>x86_64</code>).</p></li><li><p><code>block-device-mapping.delete-on-termination</code> - A Boolean value that indicates whether the Amazon EBS volume is deleted on instance termination.</p></li><li><p><code>block-device-mapping.device-name</code> - The device name specified in the block device mapping (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p></li><li><p><code>block-device-mapping.snapshot-id</code> - The ID of the snapshot used for the EBS volume.</p></li><li><p><code>block-device-mapping.volume-size</code> - The volume size of the EBS volume, in GiB.</p></li><li><p><code>block-device-mapping.volume-type</code> - The volume type of the EBS volume (<code>gp2</code> | <code>io1</code> | <code>st1 </code>| <code>sc1</code> | <code>standard</code>).</p></li><li><p><code>description</code> - The description of the image (provided during image creation).</p></li><li><p><code>ena-support</code> - A Boolean that indicates whether enhanced networking with ENA is enabled.</p></li><li><p><code>hypervisor</code> - The hypervisor type (<code>ovm</code> | <code>xen</code>).</p></li><li><p><code>image-id</code> - The ID of the image.</p></li><li><p><code>image-type</code> - The image type (<code>machine</code> | <code>kernel</code> | <code>ramdisk</code>).</p></li><li><p><code>is-public</code> - A Boolean that indicates whether the image is public.</p></li><li><p><code>kernel-id</code> - The kernel ID.</p></li><li><p><code>manifest-location</code> - The location of the image manifest.</p></li><li><p><code>name</code> - The name of the AMI (provided during image creation).</p></li><li><p><code>owner-alias</code> - String value from an Amazon-maintained list (<code>amazon</code> | <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not to be confused with the user-configured AWS account alias, which is set from the IAM console.</p></li><li><p><code>owner-id</code> - The AWS account ID of the image owner.</p></li><li><p><code>platform</code> - The platform. To only list Windows-based AMIs, use <code>windows</code>.</p></li><li><p><code>product-code</code> - The product code.</p></li><li><p><code>product-code.type</code> - The type of the product code (<code>devpay</code> | <code>marketplace</code>).</p></li><li><p><code>ramdisk-id</code> - The RAM disk ID.</p></li><li><p><code>root-device-name</code> - The device name of the root device volume (for example, <code>/dev/sda1</code>).</p></li><li><p><code>root-device-type</code> - The type of the root device volume (<code>ebs</code> | <code>instance-store</code>).</p></li><li><p><code>state</code> - The state of the image (<code>available</code> | <code>pending</code> | <code>failed</code>).</p></li><li><p><code>state-reason-code</code> - The reason code for the state change.</p></li><li><p><code>state-reason-message</code> - The message for the state change.</p></li><li><p><code>sriov-net-support</code> - A value of <code>simple</code> indicates that enhanced networking with the Intel 82599 VF interface is enabled.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the tag-value filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>virtualization-type</code> - The virtualization type (<code>paravirtual</code> | <code>hvm</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more image IDs.</p><p>Default: Describes all images available to you.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable imageIds;

/**
 <p>Filters the images by the owner. Specify an AWS account ID, <code>self</code> (owner is the sender of the request), or an AWS owner alias (valid values are <code>amazon</code> | <code>aws-marketplace</code> | <code>microsoft</code>). Omitting this option returns all images for which you have launch permissions, regardless of ownership.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable owners;

@end

/**
 <p>Contains the output of DescribeImages.</p>
 */
@interface AWSEC2DescribeImagesResult : AWSModel


/**
 <p>Information about one or more images.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Image *> * _Nullable images;

@end

/**
 <p>Contains the parameters for DescribeImportImageTasks.</p>
 */
@interface AWSEC2DescribeImportImageTasksRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Filter tasks using the <code>task-state</code> filter and one of the following values: active, completed, deleting, deleted.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>A list of import image task IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable importTaskIds;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>A token that indicates the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output for DescribeImportImageTasks.</p>
 */
@interface AWSEC2DescribeImportImageTasksResult : AWSModel


/**
 <p>A list of zero or more import image tasks that are currently active or were completed or canceled in the previous 7 days.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ImportImageTask *> * _Nullable importImageTasks;

/**
 <p>The token to use to get the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeImportSnapshotTasks.</p>
 */
@interface AWSEC2DescribeImportSnapshotTasksRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>A list of import snapshot task IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable importTaskIds;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>A token that indicates the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output for DescribeImportSnapshotTasks.</p>
 */
@interface AWSEC2DescribeImportSnapshotTasksResult : AWSModel


/**
 <p>A list of zero or more import snapshot tasks that are currently active or were completed or canceled in the previous 7 days.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ImportSnapshotTask *> * _Nullable importSnapshotTasks;

/**
 <p>The token to use to get the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeInstanceAttribute.</p>
 Required parameters: [Attribute, InstanceId]
 */
@interface AWSEC2DescribeInstanceAttributeRequest : AWSRequest


/**
 <p>The instance attribute.</p><p>Note: The <code>enaSupport</code> attribute is not supported at this time.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 
 */
@interface AWSEC2DescribeInstanceCreditSpecificationsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>instance-id</code> - The ID of the instance.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more instance IDs.</p><p>Default: Describes all your instances.</p><p>Constraints: Maximum 1000 explicitly specified instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. This value can be between 5 and 1000. You cannot specify this parameter and the instance IDs parameter in the same call.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeInstanceCreditSpecificationsResult : AWSModel


/**
 <p>Information about the credit option for CPU usage of an instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceCreditSpecification *> * _Nullable instanceCreditSpecifications;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeInstanceStatus.</p>
 */
@interface AWSEC2DescribeInstanceStatusRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone of the instance.</p></li><li><p><code>event.code</code> - The code for the scheduled event (<code>instance-reboot</code> | <code>system-reboot</code> | <code>system-maintenance</code> | <code>instance-retirement</code> | <code>instance-stop</code>).</p></li><li><p><code>event.description</code> - A description of the event.</p></li><li><p><code>event.not-after</code> - The latest end time for the scheduled event (for example, <code>2014-09-15T17:15:20.000Z</code>).</p></li><li><p><code>event.not-before</code> - The earliest start time for the scheduled event (for example, <code>2014-09-15T17:15:20.000Z</code>).</p></li><li><p><code>instance-state-code</code> - The code for the instance state, as a 16-bit unsigned integer. The high byte is an opaque internal value and should be ignored. The low byte is set based on the state represented. The valid values are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p></li><li><p><code>instance-state-name</code> - The state of the instance (<code>pending</code> | <code>running</code> | <code>shutting-down</code> | <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p></li><li><p><code>instance-status.reachability</code> - Filters on instance status where the name is <code>reachability</code> (<code>passed</code> | <code>failed</code> | <code>initializing</code> | <code>insufficient-data</code>).</p></li><li><p><code>instance-status.status</code> - The status of the instance (<code>ok</code> | <code>impaired</code> | <code>initializing</code> | <code>insufficient-data</code> | <code>not-applicable</code>).</p></li><li><p><code>system-status.reachability</code> - Filters on system status where the name is <code>reachability</code> (<code>passed</code> | <code>failed</code> | <code>initializing</code> | <code>insufficient-data</code>).</p></li><li><p><code>system-status.status</code> - The system status of the instance (<code>ok</code> | <code>impaired</code> | <code>initializing</code> | <code>insufficient-data</code> | <code>not-applicable</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>When <code>true</code>, includes the health status for all instances. When <code>false</code>, includes the health status for running instances only.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable includeAllInstances;

/**
 <p>One or more instance IDs.</p><p>Default: Describes all your instances.</p><p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. This value can be between 5 and 1000. You cannot specify this parameter and the instance IDs parameter in the same call.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeInstanceStatus.</p>
 */
@interface AWSEC2DescribeInstanceStatusResult : AWSModel


/**
 <p>One or more instance status descriptions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceStatus *> * _Nullable instanceStatuses;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeInstances.</p>
 */
@interface AWSEC2DescribeInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>affinity</code> - The affinity setting for an instance running on a Dedicated Host (<code>default</code> | <code>host</code>).</p></li><li><p><code>architecture</code> - The instance architecture (<code>i386</code> | <code>x86_64</code>).</p></li><li><p><code>availability-zone</code> - The Availability Zone of the instance.</p></li><li><p><code>block-device-mapping.attach-time</code> - The attach time for an EBS volume mapped to the instance, for example, <code>2010-09-15T17:15:20.000Z</code>.</p></li><li><p><code>block-device-mapping.delete-on-termination</code> - A Boolean that indicates whether the EBS volume is deleted on instance termination.</p></li><li><p><code>block-device-mapping.device-name</code> - The device name specified in the block device mapping (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p></li><li><p><code>block-device-mapping.status</code> - The status for the EBS volume (<code>attaching</code> | <code>attached</code> | <code>detaching</code> | <code>detached</code>).</p></li><li><p><code>block-device-mapping.volume-id</code> - The volume ID of the EBS volume.</p></li><li><p><code>client-token</code> - The idempotency token you provided when you launched the instance.</p></li><li><p><code>dns-name</code> - The public DNS name of the instance.</p></li><li><p><code>group-id</code> - The ID of the security group for the instance. EC2-Classic only.</p></li><li><p><code>group-name</code> - The name of the security group for the instance. EC2-Classic only.</p></li><li><p><code>host-id</code> - The ID of the Dedicated Host on which the instance is running, if applicable.</p></li><li><p><code>hypervisor</code> - The hypervisor type of the instance (<code>ovm</code> | <code>xen</code>).</p></li><li><p><code>iam-instance-profile.arn</code> - The instance profile associated with the instance. Specified as an ARN.</p></li><li><p><code>image-id</code> - The ID of the image used to launch the instance.</p></li><li><p><code>instance-id</code> - The ID of the instance.</p></li><li><p><code>instance-lifecycle</code> - Indicates whether this is a Spot Instance or a Scheduled Instance (<code>spot</code> | <code>scheduled</code>).</p></li><li><p><code>instance-state-code</code> - The state of the instance, as a 16-bit unsigned integer. The high byte is an opaque internal value and should be ignored. The low byte is set based on the state represented. The valid values are: 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64 (stopping), and 80 (stopped).</p></li><li><p><code>instance-state-name</code> - The state of the instance (<code>pending</code> | <code>running</code> | <code>shutting-down</code> | <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p></li><li><p><code>instance-type</code> - The type of instance (for example, <code>t2.micro</code>).</p></li><li><p><code>instance.group-id</code> - The ID of the security group for the instance. </p></li><li><p><code>instance.group-name</code> - The name of the security group for the instance. </p></li><li><p><code>ip-address</code> - The public IPv4 address of the instance.</p></li><li><p><code>kernel-id</code> - The kernel ID.</p></li><li><p><code>key-name</code> - The name of the key pair used when the instance was launched.</p></li><li><p><code>launch-index</code> - When launching multiple instances, this is the index for the instance in the launch group (for example, 0, 1, 2, and so on). </p></li><li><p><code>launch-time</code> - The time when the instance was launched.</p></li><li><p><code>monitoring-state</code> - Indicates whether detailed monitoring is enabled (<code>disabled</code> | <code>enabled</code>).</p></li><li><p><code>network-interface.addresses.private-ip-address</code> - The private IPv4 address associated with the network interface.</p></li><li><p><code>network-interface.addresses.primary</code> - Specifies whether the IPv4 address of the network interface is the primary private IPv4 address.</p></li><li><p><code>network-interface.addresses.association.public-ip</code> - The ID of the association of an Elastic IP address (IPv4) with a network interface.</p></li><li><p><code>network-interface.addresses.association.ip-owner-id</code> - The owner ID of the private IPv4 address associated with the network interface.</p></li><li><p><code>network-interface.association.public-ip</code> - The address of the Elastic IP address (IPv4) bound to the network interface.</p></li><li><p><code>network-interface.association.ip-owner-id</code> - The owner of the Elastic IP address (IPv4) associated with the network interface.</p></li><li><p><code>network-interface.association.allocation-id</code> - The allocation ID returned when you allocated the Elastic IP address (IPv4) for your network interface.</p></li><li><p><code>network-interface.association.association-id</code> - The association ID returned when the network interface was associated with an IPv4 address.</p></li><li><p><code>network-interface.attachment.attachment-id</code> - The ID of the interface attachment.</p></li><li><p><code>network-interface.attachment.instance-id</code> - The ID of the instance to which the network interface is attached.</p></li><li><p><code>network-interface.attachment.instance-owner-id</code> - The owner ID of the instance to which the network interface is attached.</p></li><li><p><code>network-interface.attachment.device-index</code> - The device index to which the network interface is attached.</p></li><li><p><code>network-interface.attachment.status</code> - The status of the attachment (<code>attaching</code> | <code>attached</code> | <code>detaching</code> | <code>detached</code>).</p></li><li><p><code>network-interface.attachment.attach-time</code> - The time that the network interface was attached to an instance.</p></li><li><p><code>network-interface.attachment.delete-on-termination</code> - Specifies whether the attachment is deleted when an instance is terminated.</p></li><li><p><code>network-interface.availability-zone</code> - The Availability Zone for the network interface.</p></li><li><p><code>network-interface.description</code> - The description of the network interface.</p></li><li><p><code>network-interface.group-id</code> - The ID of a security group associated with the network interface.</p></li><li><p><code>network-interface.group-name</code> - The name of a security group associated with the network interface.</p></li><li><p><code>network-interface.ipv6-addresses.ipv6-address</code> - The IPv6 address associated with the network interface.</p></li><li><p><code>network-interface.mac-address</code> - The MAC address of the network interface.</p></li><li><p><code>network-interface.network-interface-id</code> - The ID of the network interface.</p></li><li><p><code>network-interface.owner-id</code> - The ID of the owner of the network interface.</p></li><li><p><code>network-interface.private-dns-name</code> - The private DNS name of the network interface.</p></li><li><p><code>network-interface.requester-id</code> - The requester ID for the network interface.</p></li><li><p><code>network-interface.requester-managed</code> - Indicates whether the network interface is being managed by AWS.</p></li><li><p><code>network-interface.status</code> - The status of the network interface (<code>available</code>) | <code>in-use</code>).</p></li><li><p><code>network-interface.source-dest-check</code> - Whether the network interface performs source/destination checking. A value of <code>true</code> means that checking is enabled, and <code>false</code> means that checking is disabled. The value must be <code>false</code> for the network interface to perform network address translation (NAT) in your VPC.</p></li><li><p><code>network-interface.subnet-id</code> - The ID of the subnet for the network interface.</p></li><li><p><code>network-interface.vpc-id</code> - The ID of the VPC for the network interface.</p></li><li><p><code>owner-id</code> - The AWS account ID of the instance owner.</p></li><li><p><code>placement-group-name</code> - The name of the placement group for the instance.</p></li><li><p><code>platform</code> - The platform. Use <code>windows</code> if you have Windows instances; otherwise, leave blank.</p></li><li><p><code>private-dns-name</code> - The private IPv4 DNS name of the instance.</p></li><li><p><code>private-ip-address</code> - The private IPv4 address of the instance.</p></li><li><p><code>product-code</code> - The product code associated with the AMI used to launch the instance.</p></li><li><p><code>product-code.type</code> - The type of product code (<code>devpay</code> | <code>marketplace</code>).</p></li><li><p><code>ramdisk-id</code> - The RAM disk ID.</p></li><li><p><code>reason</code> - The reason for the current state of the instance (for example, shows "User Initiated [date]" when you stop or terminate the instance). Similar to the state-reason-code filter.</p></li><li><p><code>requester-id</code> - The ID of the entity that launched the instance on your behalf (for example, AWS Management Console, Auto Scaling, and so on).</p></li><li><p><code>reservation-id</code> - The ID of the instance's reservation. A reservation ID is created any time you launch an instance. A reservation ID has a one-to-one relationship with an instance launch request, but can be associated with more than one instance if you launch multiple instances using the same launch request. For example, if you launch one instance, you get one reservation ID. If you launch ten instances using the same launch request, you also get one reservation ID.</p></li><li><p><code>root-device-name</code> - The device name of the root device volume (for example, <code>/dev/sda1</code>).</p></li><li><p><code>root-device-type</code> - The type of the root device volume (<code>ebs</code> | <code>instance-store</code>).</p></li><li><p><code>source-dest-check</code> - Indicates whether the instance performs source/destination checking. A value of <code>true</code> means that checking is enabled, and <code>false</code> means that checking is disabled. The value must be <code>false</code> for the instance to perform network address translation (NAT) in your VPC. </p></li><li><p><code>spot-instance-request-id</code> - The ID of the Spot Instance request.</p></li><li><p><code>state-reason-code</code> - The reason code for the state change.</p></li><li><p><code>state-reason-message</code> - A message that describes the state change.</p></li><li><p><code>subnet-id</code> - The ID of the subnet for the instance.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of the tag's key). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>tenancy</code> - The tenancy of an instance (<code>dedicated</code> | <code>default</code> | <code>host</code>).</p></li><li><p><code>virtualization-type</code> - The virtualization type of the instance (<code>paravirtual</code> | <code>hvm</code>).</p></li><li><p><code>vpc-id</code> - The ID of the VPC that the instance is running in.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more instance IDs.</p><p>Default: Describes all your instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. This value can be between 5 and 1000. You cannot specify this parameter and the instance IDs parameter or tag filters in the same call.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeInstances.</p>
 */
@interface AWSEC2DescribeInstancesResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Zero or more reservations.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Reservation *> * _Nullable reservations;

@end

/**
 <p>Contains the parameters for DescribeInternetGateways.</p>
 */
@interface AWSEC2DescribeInternetGatewaysRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>attachment.state</code> - The current state of the attachment between the gateway and the VPC (<code>available</code>). Present only if a VPC is attached.</p></li><li><p><code>attachment.vpc-id</code> - The ID of an attached VPC.</p></li><li><p><code>internet-gateway-id</code> - The ID of the Internet gateway.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more Internet gateway IDs.</p><p>Default: Describes all your Internet gateways.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable internetGatewayIds;

@end

/**
 <p>Contains the output of DescribeInternetGateways.</p>
 */
@interface AWSEC2DescribeInternetGatewaysResult : AWSModel


/**
 <p>Information about one or more Internet gateways.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InternetGateway *> * _Nullable internetGateways;

@end

/**
 <p>Contains the parameters for DescribeKeyPairs.</p>
 */
@interface AWSEC2DescribeKeyPairsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>fingerprint</code> - The fingerprint of the key pair.</p></li><li><p><code>key-name</code> - The name of the key pair.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more key pair names.</p><p>Default: Describes all your key pairs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable keyNames;

@end

/**
 <p>Contains the output of DescribeKeyPairs.</p>
 */
@interface AWSEC2DescribeKeyPairsResult : AWSModel


/**
 <p>Information about one or more key pairs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2KeyPairInfo *> * _Nullable keyPairs;

@end

/**
 
 */
@interface AWSEC2DescribeLaunchTemplateVersionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>create-time</code> - The time the launch template version was created.</p></li><li><p><code>ebs-optimized</code> - A boolean that indicates whether the instance is optimized for Amazon EBS I/O.</p></li><li><p><code>iam-instance-profile</code> - The ARN of the IAM instance profile.</p></li><li><p><code>image-id</code> - The ID of the AMI.</p></li><li><p><code>instance-type</code> - The instance type.</p></li><li><p><code>is-default-version</code> - A boolean that indicates whether the launch template version is the default version.</p></li><li><p><code>kernel-id</code> - The kernel ID.</p></li><li><p><code>ram-disk-id</code> - The RAM disk ID.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The ID of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. This value can be between 5 and 1000.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The version number up to which to describe launch template versions.</p>
 */
@property (nonatomic, strong) NSString * _Nullable maxVersion;

/**
 <p>The version number after which to describe launch template versions.</p>
 */
@property (nonatomic, strong) NSString * _Nullable minVersion;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more versions of the launch template.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable versions;

@end

/**
 
 */
@interface AWSEC2DescribeLaunchTemplateVersionsResult : AWSModel


/**
 <p>Information about the launch template versions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateVersion *> * _Nullable launchTemplateVersions;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeLaunchTemplatesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>create-time</code> - The time the launch template was created.</p></li><li><p><code>launch-template-name</code> - The name of the launch template.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of the tag's key). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more launch template IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable launchTemplateIds;

/**
 <p>One or more launch template names.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable launchTemplateNames;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. This value can be between 5 and 1000.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeLaunchTemplatesResult : AWSModel


/**
 <p>Information about the launch templates.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplate *> * _Nullable launchTemplates;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeMovingAddresses.</p>
 */
@interface AWSEC2DescribeMovingAddressesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>moving-status</code> - The status of the Elastic IP address (<code>MovingToVpc</code> | <code>RestoringToClassic</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value outside of this range, an error is returned.</p><p>Default: If no value is provided, the default is 1000.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to use to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more Elastic IP addresses.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable publicIps;

@end

/**
 <p>Contains the output of DescribeMovingAddresses.</p>
 */
@interface AWSEC2DescribeMovingAddressesResult : AWSModel


/**
 <p>The status for each Elastic IP address.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2MovingAddressStatus *> * _Nullable movingAddressStatuses;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeNatGateways.</p>
 */
@interface AWSEC2DescribeNatGatewaysRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>nat-gateway-id</code> - The ID of the NAT gateway.</p></li><li><p><code>state</code> - The state of the NAT gateway (<code>pending</code> | <code>failed</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p></li><li><p><code>subnet-id</code> - The ID of the subnet in which the NAT gateway resides.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC in which the NAT gateway resides.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filter;

/**
 <p>The maximum number of items to return for this request. The request returns a token that you can specify in a subsequent call to get the next set of results.</p><p>Constraint: If the value specified is greater than 1000, we return only 1000 items.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>One or more NAT gateway IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable natGatewayIds;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeNatGateways.</p>
 */
@interface AWSEC2DescribeNatGatewaysResult : AWSModel


/**
 <p>Information about the NAT gateways.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NatGateway *> * _Nullable natGateways;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeNetworkAcls.</p>
 */
@interface AWSEC2DescribeNetworkAclsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>association.association-id</code> - The ID of an association ID for the ACL.</p></li><li><p><code>association.network-acl-id</code> - The ID of the network ACL involved in the association.</p></li><li><p><code>association.subnet-id</code> - The ID of the subnet involved in the association.</p></li><li><p><code>default</code> - Indicates whether the ACL is the default network ACL for the VPC.</p></li><li><p><code>entry.cidr</code> - The IPv4 CIDR range specified in the entry.</p></li><li><p><code>entry.egress</code> - Indicates whether the entry applies to egress traffic.</p></li><li><p><code>entry.icmp.code</code> - The ICMP code specified in the entry, if any.</p></li><li><p><code>entry.icmp.type</code> - The ICMP type specified in the entry, if any.</p></li><li><p><code>entry.ipv6-cidr</code> - The IPv6 CIDR range specified in the entry.</p></li><li><p><code>entry.port-range.from</code> - The start of the port range specified in the entry. </p></li><li><p><code>entry.port-range.to</code> - The end of the port range specified in the entry. </p></li><li><p><code>entry.protocol</code> - The protocol specified in the entry (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol number).</p></li><li><p><code>entry.rule-action</code> - Allows or denies the matching traffic (<code>allow</code> | <code>deny</code>).</p></li><li><p><code>entry.rule-number</code> - The number of an entry (in other words, rule) in the ACL's set of entries.</p></li><li><p><code>network-acl-id</code> - The ID of the network ACL.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC for the network ACL.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more network ACL IDs.</p><p>Default: Describes all your network ACLs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable networkAclIds;

@end

/**
 <p>Contains the output of DescribeNetworkAcls.</p>
 */
@interface AWSEC2DescribeNetworkAclsResult : AWSModel


/**
 <p>Information about one or more network ACLs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkAcl *> * _Nullable networkAcls;

@end

/**
 <p>Contains the parameters for DescribeNetworkInterfaceAttribute.</p>
 Required parameters: [NetworkInterfaceId]
 */
@interface AWSEC2DescribeNetworkInterfaceAttributeRequest : AWSRequest


/**
 <p>The attribute of the network interface. This parameter is required.</p>
 */
@property (nonatomic, assign) AWSEC2NetworkInterfaceAttribute attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

@end

/**
 <p>Contains the output of DescribeNetworkInterfaceAttribute.</p>
 */
@interface AWSEC2DescribeNetworkInterfaceAttributeResult : AWSModel


/**
 <p>The attachment (if any) of the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfaceAttachment * _Nullable attachment;

/**
 <p>The description of the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable detail;

/**
 <p>The security groups associated with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable groups;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>Indicates whether source/destination checking is enabled.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable sourceDestCheck;

@end

/**
 <p>Contains the parameters for DescribeNetworkInterfacePermissions.</p>
 */
@interface AWSEC2DescribeNetworkInterfacePermissionsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>network-interface-permission.network-interface-permission-id</code> - The ID of the permission.</p></li><li><p><code>network-interface-permission.network-interface-id</code> - The ID of the network interface.</p></li><li><p><code>network-interface-permission.aws-account-id</code> - The AWS account ID.</p></li><li><p><code>network-interface-permission.aws-service</code> - The AWS service.</p></li><li><p><code>network-interface-permission.permission</code> - The type of permission (<code>INSTANCE-ATTACH</code> | <code>EIP-ASSOCIATE</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value. If this parameter is not specified, up to 50 results are returned by default.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>One or more network interface permission IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable networkInterfacePermissionIds;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output for DescribeNetworkInterfacePermissions.</p>
 */
@interface AWSEC2DescribeNetworkInterfacePermissionsResult : AWSModel


/**
 <p>The network interface permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkInterfacePermission *> * _Nullable networkInterfacePermissions;

/**
 <p>The token to use to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeNetworkInterfaces.</p>
 */
@interface AWSEC2DescribeNetworkInterfacesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>addresses.private-ip-address</code> - The private IPv4 addresses associated with the network interface.</p></li><li><p><code>addresses.primary</code> - Whether the private IPv4 address is the primary IP address associated with the network interface. </p></li><li><p><code>addresses.association.public-ip</code> - The association ID returned when the network interface was associated with the Elastic IP address (IPv4).</p></li><li><p><code>addresses.association.owner-id</code> - The owner ID of the addresses associated with the network interface.</p></li><li><p><code>association.association-id</code> - The association ID returned when the network interface was associated with an IPv4 address.</p></li><li><p><code>association.allocation-id</code> - The allocation ID returned when you allocated the Elastic IP address (IPv4) for your network interface.</p></li><li><p><code>association.ip-owner-id</code> - The owner of the Elastic IP address (IPv4) associated with the network interface.</p></li><li><p><code>association.public-ip</code> - The address of the Elastic IP address (IPv4) bound to the network interface.</p></li><li><p><code>association.public-dns-name</code> - The public DNS name for the network interface (IPv4).</p></li><li><p><code>attachment.attachment-id</code> - The ID of the interface attachment.</p></li><li><p><code>attachment.attach.time</code> - The time that the network interface was attached to an instance.</p></li><li><p><code>attachment.delete-on-termination</code> - Indicates whether the attachment is deleted when an instance is terminated.</p></li><li><p><code>attachment.device-index</code> - The device index to which the network interface is attached.</p></li><li><p><code>attachment.instance-id</code> - The ID of the instance to which the network interface is attached.</p></li><li><p><code>attachment.instance-owner-id</code> - The owner ID of the instance to which the network interface is attached.</p></li><li><p><code>attachment.nat-gateway-id</code> - The ID of the NAT gateway to which the network interface is attached.</p></li><li><p><code>attachment.status</code> - The status of the attachment (<code>attaching</code> | <code>attached</code> | <code>detaching</code> | <code>detached</code>).</p></li><li><p><code>availability-zone</code> - The Availability Zone of the network interface.</p></li><li><p><code>description</code> - The description of the network interface.</p></li><li><p><code>group-id</code> - The ID of a security group associated with the network interface.</p></li><li><p><code>group-name</code> - The name of a security group associated with the network interface.</p></li><li><p><code>ipv6-addresses.ipv6-address</code> - An IPv6 address associated with the network interface.</p></li><li><p><code>mac-address</code> - The MAC address of the network interface.</p></li><li><p><code>network-interface-id</code> - The ID of the network interface.</p></li><li><p><code>owner-id</code> - The AWS account ID of the network interface owner.</p></li><li><p><code>private-ip-address</code> - The private IPv4 address or addresses of the network interface.</p></li><li><p><code>private-dns-name</code> - The private DNS name of the network interface (IPv4).</p></li><li><p><code>requester-id</code> - The ID of the entity that launched the instance on your behalf (for example, AWS Management Console, Auto Scaling, and so on).</p></li><li><p><code>requester-managed</code> - Indicates whether the network interface is being managed by an AWS service (for example, AWS Management Console, Auto Scaling, and so on).</p></li><li><p><code>source-desk-check</code> - Indicates whether the network interface performs source/destination checking. A value of <code>true</code> means checking is enabled, and <code>false</code> means checking is disabled. The value must be <code>false</code> for the network interface to perform network address translation (NAT) in your VPC. </p></li><li><p><code>status</code> - The status of the network interface. If the network interface is not attached to an instance, the status is <code>available</code>; if a network interface is attached to an instance the status is <code>in-use</code>.</p></li><li><p><code>subnet-id</code> - The ID of the subnet for the network interface.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC for the network interface.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more network interface IDs.</p><p>Default: Describes all your network interfaces.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable networkInterfaceIds;

@end

/**
 <p>Contains the output of DescribeNetworkInterfaces.</p>
 */
@interface AWSEC2DescribeNetworkInterfacesResult : AWSModel


/**
 <p>Information about one or more network interfaces.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkInterface *> * _Nullable networkInterfaces;

@end

/**
 <p>Contains the parameters for DescribePlacementGroups.</p>
 */
@interface AWSEC2DescribePlacementGroupsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>group-name</code> - The name of the placement group.</p></li><li><p><code>state</code> - The state of the placement group (<code>pending</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p></li><li><p><code>strategy</code> - The strategy of the placement group (<code>cluster</code> | <code>spread</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more placement group names.</p><p>Default: Describes all your placement groups, or only those otherwise specified.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupNames;

@end

/**
 <p>Contains the output of DescribePlacementGroups.</p>
 */
@interface AWSEC2DescribePlacementGroupsResult : AWSModel


/**
 <p>One or more placement groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PlacementGroup *> * _Nullable placementGroups;

@end

/**
 <p>Contains the parameters for DescribePrefixLists.</p>
 */
@interface AWSEC2DescribePrefixListsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>prefix-list-id</code>: The ID of a prefix list.</p></li><li><p><code>prefix-list-name</code>: The name of a prefix list.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of items to return for this request. The request returns a token that you can specify in a subsequent call to get the next set of results.</p><p>Constraint: If the value specified is greater than 1000, we return only 1000 items.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of items to return. (You received this token from a prior call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more prefix list IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable prefixListIds;

@end

/**
 <p>Contains the output of DescribePrefixLists.</p>
 */
@interface AWSEC2DescribePrefixListsResult : AWSModel


/**
 <p>The token to use when requesting the next set of items. If there are no additional items to return, the string is empty.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>All available prefix lists.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrefixList *> * _Nullable prefixLists;

@end

/**
 
 */
@interface AWSEC2DescribePrincipalIdFormatRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another call with the returned NextToken value. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> | <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> | <code>import-task</code> | <code>instance</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> | <code>prefix-list</code> | <code>reservation</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code> | <code>snapshot</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>volume</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code></p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable resources;

@end

/**
 
 */
@interface AWSEC2DescribePrincipalIdFormatResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is null when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the ID format settings for the ARN.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrincipalIdFormat *> * _Nullable principals;

@end

/**
 <p>Contains the parameters for DescribeRegions.</p>
 */
@interface AWSEC2DescribeRegionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>endpoint</code> - The endpoint of the region (for example, <code>ec2.us-east-1.amazonaws.com</code>).</p></li><li><p><code>region-name</code> - The name of the region (for example, <code>us-east-1</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The names of one or more regions.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable regionNames;

@end

/**
 <p>Contains the output of DescribeRegions.</p>
 */
@interface AWSEC2DescribeRegionsResult : AWSModel


/**
 <p>Information about one or more regions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Region *> * _Nullable regions;

@end

/**
 <p>Contains the parameters for DescribeReservedInstancesListings.</p>
 */
@interface AWSEC2DescribeReservedInstancesListingsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>reserved-instances-id</code> - The ID of the Reserved Instances.</p></li><li><p><code>reserved-instances-listing-id</code> - The ID of the Reserved Instances listing.</p></li><li><p><code>status</code> - The status of the Reserved Instance listing (<code>pending</code> | <code>active</code> | <code>cancelled</code> | <code>closed</code>).</p></li><li><p><code>status-message</code> - The reason for the status.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more Reserved Instance IDs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

/**
 <p>One or more Reserved Instance listing IDs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesListingId;

@end

/**
 <p>Contains the output of DescribeReservedInstancesListings.</p>
 */
@interface AWSEC2DescribeReservedInstancesListingsResult : AWSModel


/**
 <p>Information about the Reserved Instance listing.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesListing *> * _Nullable reservedInstancesListings;

@end

/**
 <p>Contains the parameters for DescribeReservedInstancesModifications.</p>
 */
@interface AWSEC2DescribeReservedInstancesModificationsRequest : AWSRequest


/**
 <p>One or more filters.</p><ul><li><p><code>client-token</code> - The idempotency token for the modification request.</p></li><li><p><code>create-date</code> - The time when the modification request was created.</p></li><li><p><code>effective-date</code> - The time when the modification becomes effective.</p></li><li><p><code>modification-result.reserved-instances-id</code> - The ID for the Reserved Instances created as part of the modification request. This ID is only available when the status of the modification is <code>fulfilled</code>.</p></li><li><p><code>modification-result.target-configuration.availability-zone</code> - The Availability Zone for the new Reserved Instances.</p></li><li><p><code>modification-result.target-configuration.instance-count </code> - The number of new Reserved Instances.</p></li><li><p><code>modification-result.target-configuration.instance-type</code> - The instance type of the new Reserved Instances.</p></li><li><p><code>modification-result.target-configuration.platform</code> - The network platform of the new Reserved Instances (<code>EC2-Classic</code> | <code>EC2-VPC</code>).</p></li><li><p><code>reserved-instances-id</code> - The ID of the Reserved Instances modified.</p></li><li><p><code>reserved-instances-modification-id</code> - The ID of the modification request.</p></li><li><p><code>status</code> - The status of the Reserved Instances modification request (<code>processing</code> | <code>fulfilled</code> | <code>failed</code>).</p></li><li><p><code>status-message</code> - The reason for the status.</p></li><li><p><code>update-date</code> - The time when the modification request was last updated.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>IDs for the submitted modification request.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reservedInstancesModificationIds;

@end

/**
 <p>Contains the output of DescribeReservedInstancesModifications.</p>
 */
@interface AWSEC2DescribeReservedInstancesModificationsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The Reserved Instance modification information.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesModification *> * _Nullable reservedInstancesModifications;

@end

/**
 <p>Contains the parameters for DescribeReservedInstancesOfferings.</p>
 */
@interface AWSEC2DescribeReservedInstancesOfferingsRequest : AWSRequest


/**
 <p>The Availability Zone in which the Reserved Instance can be used.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone where the Reserved Instance can be used.</p></li><li><p><code>duration</code> - The duration of the Reserved Instance (for example, one year or three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p></li><li><p><code>fixed-price</code> - The purchase price of the Reserved Instance (for example, 9800.0).</p></li><li><p><code>instance-type</code> - The instance type that is covered by the reservation.</p></li><li><p><code>marketplace</code> - Set to <code>true</code> to show only Reserved Instance Marketplace offerings. When this filter is not used, which is the default behavior, all offerings from both AWS and the Reserved Instance Marketplace are listed.</p></li><li><p><code>product-description</code> - The Reserved Instance product platform description. Instances that include <code>(Amazon VPC)</code> in the product platform description will only be displayed to EC2-Classic account holders and are for use with Amazon VPC. (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> | <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> | <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> | <code> Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon VPC)</code>) </p></li><li><p><code>reserved-instances-offering-id</code> - The Reserved Instances offering ID.</p></li><li><p><code>scope</code> - The scope of the Reserved Instance (<code>Availability Zone</code> or <code>Region</code>).</p></li><li><p><code>usage-price</code> - The usage price of the Reserved Instance, per hour (for example, 0.84).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>Include Reserved Instance Marketplace offerings in the response.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable includeMarketplace;

/**
 <p>The tenancy of the instances covered by the reservation. A Reserved Instance with a tenancy of <code>dedicated</code> is applied to instances that run in a VPC on single-tenant hardware (i.e., Dedicated Instances).</p><p><b>Important:</b> The <code>host</code> value cannot be used with this parameter. Use the <code>default</code> or <code>dedicated</code> values only.</p><p>Default: <code>default</code></p>
 */
@property (nonatomic, assign) AWSEC2Tenancy instanceTenancy;

/**
 <p>The instance type that the reservation will cover (for example, <code>m1.small</code>). For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The maximum duration (in seconds) to filter when searching for offerings.</p><p>Default: 94608000 (3 years)</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxDuration;

/**
 <p>The maximum number of instances to filter when searching for offerings.</p><p>Default: 20</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxInstanceCount;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. The maximum is 100.</p><p>Default: 100</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The minimum duration (in seconds) to filter when searching for offerings.</p><p>Default: 2592000 (1 month)</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minDuration;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The offering class of the Reserved Instance. Can be <code>standard</code> or <code>convertible</code>.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingClassType offeringClass;

/**
 <p>The Reserved Instance offering type. If you are using tools that predate the 2011-11-01 API version, you only have access to the <code>Medium Utilization</code> Reserved Instance offering type. </p>
 */
@property (nonatomic, assign) AWSEC2OfferingTypeValues offeringType;

/**
 <p>The Reserved Instance product platform description. Instances that include <code>(Amazon VPC)</code> in the description are for use with Amazon VPC.</p>
 */
@property (nonatomic, assign) AWSEC2RIProductDescription productDescription;

/**
 <p>One or more Reserved Instances offering IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reservedInstancesOfferingIds;

@end

/**
 <p>Contains the output of DescribeReservedInstancesOfferings.</p>
 */
@interface AWSEC2DescribeReservedInstancesOfferingsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>A list of Reserved Instances offerings.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesOffering *> * _Nullable reservedInstancesOfferings;

@end

/**
 <p>Contains the parameters for DescribeReservedInstances.</p>
 */
@interface AWSEC2DescribeReservedInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone where the Reserved Instance can be used.</p></li><li><p><code>duration</code> - The duration of the Reserved Instance (one year or three years), in seconds (<code>31536000</code> | <code>94608000</code>).</p></li><li><p><code>end</code> - The time when the Reserved Instance expires (for example, 2015-08-07T11:54:42.000Z).</p></li><li><p><code>fixed-price</code> - The purchase price of the Reserved Instance (for example, 9800.0).</p></li><li><p><code>instance-type</code> - The instance type that is covered by the reservation.</p></li><li><p><code>scope</code> - The scope of the Reserved Instance (<code>Region</code> or <code>Availability Zone</code>).</p></li><li><p><code>product-description</code> - The Reserved Instance product platform description. Instances that include <code>(Amazon VPC)</code> in the product platform description will only be displayed to EC2-Classic account holders and are for use with Amazon VPC (<code>Linux/UNIX</code> | <code>Linux/UNIX (Amazon VPC)</code> | <code>SUSE Linux</code> | <code>SUSE Linux (Amazon VPC)</code> | <code>Red Hat Enterprise Linux</code> | <code>Red Hat Enterprise Linux (Amazon VPC)</code> | <code>Windows</code> | <code>Windows (Amazon VPC)</code> | <code>Windows with SQL Server Standard</code> | <code>Windows with SQL Server Standard (Amazon VPC)</code> | <code>Windows with SQL Server Web</code> | <code>Windows with SQL Server Web (Amazon VPC)</code> | <code>Windows with SQL Server Enterprise</code> | <code>Windows with SQL Server Enterprise (Amazon VPC)</code>).</p></li><li><p><code>reserved-instances-id</code> - The ID of the Reserved Instance.</p></li><li><p><code>start</code> - The time at which the Reserved Instance purchase request was placed (for example, 2014-08-07T11:54:42.000Z).</p></li><li><p><code>state</code> - The state of the Reserved Instance (<code>payment-pending</code> | <code>active</code> | <code>payment-failed</code> | <code>retired</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>usage-price</code> - The usage price of the Reserved Instance, per hour (for example, 0.84).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>Describes whether the Reserved Instance is Standard or Convertible.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingClassType offeringClass;

/**
 <p>The Reserved Instance offering type. If you are using tools that predate the 2011-11-01 API version, you only have access to the <code>Medium Utilization</code> Reserved Instance offering type.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingTypeValues offeringType;

/**
 <p>One or more Reserved Instance IDs.</p><p>Default: Describes all your Reserved Instances, or only those otherwise specified.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reservedInstancesIds;

@end

/**
 <p>Contains the output for DescribeReservedInstances.</p>
 */
@interface AWSEC2DescribeReservedInstancesResult : AWSModel


/**
 <p>A list of Reserved Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstances *> * _Nullable reservedInstances;

@end

/**
 <p>Contains the parameters for DescribeRouteTables.</p>
 */
@interface AWSEC2DescribeRouteTablesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>association.route-table-association-id</code> - The ID of an association ID for the route table.</p></li><li><p><code>association.route-table-id</code> - The ID of the route table involved in the association.</p></li><li><p><code>association.subnet-id</code> - The ID of the subnet involved in the association.</p></li><li><p><code>association.main</code> - Indicates whether the route table is the main route table for the VPC (<code>true</code> | <code>false</code>). Route tables that do not have an association ID are not returned in the response.</p></li><li><p><code>route-table-id</code> - The ID of the route table.</p></li><li><p><code>route.destination-cidr-block</code> - The IPv4 CIDR range specified in a route in the table.</p></li><li><p><code>route.destination-ipv6-cidr-block</code> - The IPv6 CIDR range specified in a route in the route table.</p></li><li><p><code>route.destination-prefix-list-id</code> - The ID (prefix) of the AWS service specified in a route in the table.</p></li><li><p><code>route.egress-only-internet-gateway-id</code> - The ID of an egress-only Internet gateway specified in a route in the route table.</p></li><li><p><code>route.gateway-id</code> - The ID of a gateway specified in a route in the table.</p></li><li><p><code>route.instance-id</code> - The ID of an instance specified in a route in the table.</p></li><li><p><code>route.nat-gateway-id</code> - The ID of a NAT gateway.</p></li><li><p><code>route.origin</code> - Describes how the route was created. <code>CreateRouteTable</code> indicates that the route was automatically created when the route table was created; <code>CreateRoute</code> indicates that the route was manually added to the route table; <code>EnableVgwRoutePropagation</code> indicates that the route was propagated by route propagation.</p></li><li><p><code>route.state</code> - The state of a route in the route table (<code>active</code> | <code>blackhole</code>). The blackhole state indicates that the route's target isn't available (for example, the specified gateway isn't attached to the VPC, the specified NAT instance has been terminated, and so on).</p></li><li><p><code>route.vpc-peering-connection-id</code> - The ID of a VPC peering connection specified in a route in the table.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC for the route table.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more route table IDs.</p><p>Default: Describes all your route tables.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable routeTableIds;

@end

/**
 <p>Contains the output of DescribeRouteTables.</p>
 */
@interface AWSEC2DescribeRouteTablesResult : AWSModel


/**
 <p>Information about one or more route tables.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2RouteTable *> * _Nullable routeTables;

@end

/**
 <p>Contains the parameters for DescribeScheduledInstanceAvailability.</p>
 Required parameters: [FirstSlotStartTimeRange, Recurrence]
 */
@interface AWSEC2DescribeScheduledInstanceAvailabilityRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone (for example, <code>us-west-2a</code>).</p></li><li><p><code>instance-type</code> - The instance type (for example, <code>c4.large</code>).</p></li><li><p><code>network-platform</code> - The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p></li><li><p><code>platform</code> - The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The time period for the first schedule to start.</p>
 */
@property (nonatomic, strong) AWSEC2SlotDateTimeRangeRequest * _Nullable firstSlotStartTimeRange;

/**
 <p>The maximum number of results to return in a single call. This value can be between 5 and 300. The default value is 300. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The maximum available duration, in hours. This value must be greater than <code>MinSlotDurationInHours</code> and less than 1,720.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxSlotDurationInHours;

/**
 <p>The minimum available duration, in hours. The minimum required duration is 1,200 hours per year. For example, the minimum daily schedule is 4 hours, the minimum weekly schedule is 24 hours, and the minimum monthly schedule is 100 hours.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minSlotDurationInHours;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The schedule recurrence.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstanceRecurrenceRequest * _Nullable recurrence;

@end

/**
 <p>Contains the output of DescribeScheduledInstanceAvailability.</p>
 */
@interface AWSEC2DescribeScheduledInstanceAvailabilityResult : AWSModel


/**
 <p>The token required to retrieve the next set of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the available Scheduled Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstanceAvailability *> * _Nullable scheduledInstanceAvailabilitySet;

@end

/**
 <p>Contains the parameters for DescribeScheduledInstances.</p>
 */
@interface AWSEC2DescribeScheduledInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone (for example, <code>us-west-2a</code>).</p></li><li><p><code>instance-type</code> - The instance type (for example, <code>c4.large</code>).</p></li><li><p><code>network-platform</code> - The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p></li><li><p><code>platform</code> - The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return in a single call. This value can be between 5 and 300. The default value is 100. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more Scheduled Instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable scheduledInstanceIds;

/**
 <p>The time period for the first schedule to start.</p>
 */
@property (nonatomic, strong) AWSEC2SlotStartTimeRangeRequest * _Nullable slotStartTimeRange;

@end

/**
 <p>Contains the output of DescribeScheduledInstances.</p>
 */
@interface AWSEC2DescribeScheduledInstancesResult : AWSModel


/**
 <p>The token required to retrieve the next set of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the Scheduled Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstance *> * _Nullable scheduledInstanceSet;

@end

/**
 
 */
@interface AWSEC2DescribeSecurityGroupReferencesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the operation, without actually making the request, and provides an error response. If you have the required permissions, the error response is DryRunOperation. Otherwise, it is UnauthorizedOperation.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more security group IDs in your account.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupId;

@end

/**
 
 */
@interface AWSEC2DescribeSecurityGroupReferencesResult : AWSModel


/**
 <p>Information about the VPCs with the referencing security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SecurityGroupReference *> * _Nullable securityGroupReferenceSet;

@end

/**
 <p>Contains the parameters for DescribeSecurityGroups.</p>
 */
@interface AWSEC2DescribeSecurityGroupsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters. If using multiple filters for rules, the results include security groups for which any combination of rules - not necessarily a single rule - match all filters.</p><ul><li><p><code>description</code> - The description of the security group.</p></li><li><p><code>egress.ip-permission.cidr</code> - An IPv4 CIDR block for an outbound security group rule.</p></li><li><p><code>egress.ip-permission.from-port</code> - For an outbound rule, the start of port range for the TCP and UDP protocols, or an ICMP type number.</p></li><li><p><code>egress.ip-permission.group-id</code> - The ID of a security group that has been referenced in an outbound security group rule.</p></li><li><p><code>egress.ip-permission.group-name</code> - The name of a security group that has been referenced in an outbound security group rule.</p></li><li><p><code>egress.ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an outbound security group rule.</p></li><li><p><code>egress.ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service to which a security group rule allows outbound access.</p></li><li><p><code>egress.ip-permission.protocol</code> - The IP protocol for an outbound security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol number).</p></li><li><p><code>egress.ip-permission.to-port</code> - For an outbound rule, the end of port range for the TCP and UDP protocols, or an ICMP code.</p></li><li><p><code>egress.ip-permission.user-id</code> - The ID of an AWS account that has been referenced in an outbound security group rule.</p></li><li><p><code>group-id</code> - The ID of the security group. </p></li><li><p><code>group-name</code> - The name of the security group.</p></li><li><p><code>ip-permission.cidr</code> - An IPv4 CIDR block for an inbound security group rule.</p></li><li><p><code>ip-permission.from-port</code> - For an inbound rule, the start of port range for the TCP and UDP protocols, or an ICMP type number.</p></li><li><p><code>ip-permission.group-id</code> - The ID of a security group that has been referenced in an inbound security group rule.</p></li><li><p><code>ip-permission.group-name</code> - The name of a security group that has been referenced in an inbound security group rule.</p></li><li><p><code>ip-permission.ipv6-cidr</code> - An IPv6 CIDR block for an inbound security group rule.</p></li><li><p><code>ip-permission.prefix-list-id</code> - The ID (prefix) of the AWS service from which a security group rule allows inbound access.</p></li><li><p><code>ip-permission.protocol</code> - The IP protocol for an inbound security group rule (<code>tcp</code> | <code>udp</code> | <code>icmp</code> or a protocol number).</p></li><li><p><code>ip-permission.to-port</code> - For an inbound rule, the end of port range for the TCP and UDP protocols, or an ICMP code.</p></li><li><p><code>ip-permission.user-id</code> - The ID of an AWS account that has been referenced in an inbound security group rule.</p></li><li><p><code>owner-id</code> - The AWS account ID of the owner of the security group.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the security group.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the security group.</p></li><li><p><code>vpc-id</code> - The ID of the VPC specified when the security group was created.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more security group IDs. Required for security groups in a nondefault VPC.</p><p>Default: Describes all your security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupIds;

/**
 <p>[EC2-Classic and default VPC only] One or more security group names. You can specify either the security group name or the security group ID. For security groups in a nondefault VPC, use the <code>group-name</code> filter to describe security groups by name.</p><p>Default: Describes all your security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupNames;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000. If this parameter is not specified, then all results are returned.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeSecurityGroups.</p>
 */
@interface AWSEC2DescribeSecurityGroupsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about one or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SecurityGroup *> * _Nullable securityGroups;

@end

/**
 <p>Contains the parameters for DescribeSnapshotAttribute.</p>
 Required parameters: [Attribute, SnapshotId]
 */
@interface AWSEC2DescribeSnapshotAttributeRequest : AWSRequest


/**
 <p>The snapshot attribute you would like to view.</p>
 */
@property (nonatomic, assign) AWSEC2SnapshotAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the EBS snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

@end

/**
 <p>Contains the output of DescribeSnapshotAttribute.</p>
 */
@interface AWSEC2DescribeSnapshotAttributeResult : AWSModel


/**
 <p>A list of permissions for creating volumes from the snapshot.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CreateVolumePermission *> * _Nullable createVolumePermissions;

/**
 <p>A list of product codes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>The ID of the EBS snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

@end

/**
 <p>Contains the parameters for DescribeSnapshots.</p>
 */
@interface AWSEC2DescribeSnapshotsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>description</code> - A description of the snapshot.</p></li><li><p><code>owner-alias</code> - Value from an Amazon-maintained list (<code>amazon</code> | <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not to be confused with the user-configured AWS account alias, which is set from the IAM console.</p></li><li><p><code>owner-id</code> - The ID of the AWS account that owns the snapshot.</p></li><li><p><code>progress</code> - The progress of the snapshot, as a percentage (for example, 80%).</p></li><li><p><code>snapshot-id</code> - The snapshot ID.</p></li><li><p><code>start-time</code> - The time stamp when the snapshot was initiated.</p></li><li><p><code>status</code> - The status of the snapshot (<code>pending</code> | <code>completed</code> | <code>error</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>volume-id</code> - The ID of the volume the snapshot is for.</p></li><li><p><code>volume-size</code> - The size of the volume, in GiB.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of snapshot results returned by <code>DescribeSnapshots</code> in paginated output. When this parameter is used, <code>DescribeSnapshots</code> only returns <code>MaxResults</code> results in a single page along with a <code>NextToken</code> response element. The remaining results of the initial request can be seen by sending another <code>DescribeSnapshots</code> request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. If this parameter is not used, then <code>DescribeSnapshots</code> returns all results. You cannot specify this parameter and the snapshot IDs parameter in the same request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The <code>NextToken</code> value returned from a previous paginated <code>DescribeSnapshots</code> request where <code>MaxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>NextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Returns the snapshots owned by the specified owner. Multiple owners can be specified.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable ownerIds;

/**
 <p>One or more AWS accounts IDs that can create volumes from the snapshot.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable restorableByUserIds;

/**
 <p>One or more snapshot IDs.</p><p>Default: Describes snapshots for which you have launch permissions.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable snapshotIds;

@end

/**
 <p>Contains the output of DescribeSnapshots.</p>
 */
@interface AWSEC2DescribeSnapshotsResult : AWSModel


/**
 <p>The <code>NextToken</code> value to include in a future <code>DescribeSnapshots</code> request. When the results of a <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this value can be used to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the snapshots.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Snapshot *> * _Nullable snapshots;

@end

/**
 <p>Contains the parameters for DescribeSpotDatafeedSubscription.</p>
 */
@interface AWSEC2DescribeSpotDatafeedSubscriptionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 <p>Contains the output of DescribeSpotDatafeedSubscription.</p>
 */
@interface AWSEC2DescribeSpotDatafeedSubscriptionResult : AWSModel


/**
 <p>The Spot Instance data feed subscription.</p>
 */
@property (nonatomic, strong) AWSEC2SpotDatafeedSubscription * _Nullable spotDatafeedSubscription;

@end

/**
 <p>Contains the parameters for DescribeSpotFleetInstances.</p>
 Required parameters: [SpotFleetRequestId]
 */
@interface AWSEC2DescribeSpotFleetInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

@end

/**
 <p>Contains the output of DescribeSpotFleetInstances.</p>
 Required parameters: [ActiveInstances, SpotFleetRequestId]
 */
@interface AWSEC2DescribeSpotFleetInstancesResponse : AWSModel


/**
 <p>The running instances. This list is refreshed periodically and might be out of date.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ActiveInstance *> * _Nullable activeInstances;

/**
 <p>The token required to retrieve the next set of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

@end

/**
 <p>Contains the parameters for DescribeSpotFleetRequestHistory.</p>
 Required parameters: [SpotFleetRequestId, StartTime]
 */
@interface AWSEC2DescribeSpotFleetRequestHistoryRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The type of events to describe. By default, all events are described.</p>
 */
@property (nonatomic, assign) AWSEC2EventType eventType;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

/**
 <p>The starting date and time for the events, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 <p>Contains the output of DescribeSpotFleetRequestHistory.</p>
 Required parameters: [HistoryRecords, LastEvaluatedTime, SpotFleetRequestId, StartTime]
 */
@interface AWSEC2DescribeSpotFleetRequestHistoryResponse : AWSModel


/**
 <p>Information about the events in the history of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2HistoryRecord *> * _Nullable historyRecords;

/**
 <p>The last date and time for the events, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). All records up to this time were retrieved.</p><p>If <code>nextToken</code> indicates that there are more results, this value is not present.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable lastEvaluatedTime;

/**
 <p>The token required to retrieve the next set of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

/**
 <p>The starting date and time for the events, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 <p>Contains the parameters for DescribeSpotFleetRequests.</p>
 */
@interface AWSEC2DescribeSpotFleetRequestsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The IDs of the Spot Fleet requests.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable spotFleetRequestIds;

@end

/**
 <p>Contains the output of DescribeSpotFleetRequests.</p>
 Required parameters: [SpotFleetRequestConfigs]
 */
@interface AWSEC2DescribeSpotFleetRequestsResponse : AWSModel


/**
 <p>The token required to retrieve the next set of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the configuration of your Spot Fleet.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SpotFleetRequestConfig *> * _Nullable spotFleetRequestConfigs;

@end

/**
 <p>Contains the parameters for DescribeSpotInstanceRequests.</p>
 */
@interface AWSEC2DescribeSpotInstanceRequestsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone-group</code> - The Availability Zone group.</p></li><li><p><code>create-time</code> - The time stamp when the Spot Instance request was created.</p></li><li><p><code>fault-code</code> - The fault code related to the request.</p></li><li><p><code>fault-message</code> - The fault message related to the request.</p></li><li><p><code>instance-id</code> - The ID of the instance that fulfilled the request.</p></li><li><p><code>launch-group</code> - The Spot Instance launch group.</p></li><li><p><code>launch.block-device-mapping.delete-on-termination</code> - Indicates whether the EBS volume is deleted on instance termination.</p></li><li><p><code>launch.block-device-mapping.device-name</code> - The device name for the volume in the block device mapping (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p></li><li><p><code>launch.block-device-mapping.snapshot-id</code> - The ID of the snapshot for the EBS volume.</p></li><li><p><code>launch.block-device-mapping.volume-size</code> - The size of the EBS volume, in GiB.</p></li><li><p><code>launch.block-device-mapping.volume-type</code> - The type of EBS volume: <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code>for Cold HDD, or <code>standard</code> for Magnetic.</p></li><li><p><code>launch.group-id</code> - The ID of the security group for the instance.</p></li><li><p><code>launch.group-name</code> - The name of the security group for the instance.</p></li><li><p><code>launch.image-id</code> - The ID of the AMI.</p></li><li><p><code>launch.instance-type</code> - The type of instance (for example, <code>m3.medium</code>).</p></li><li><p><code>launch.kernel-id</code> - The kernel ID.</p></li><li><p><code>launch.key-name</code> - The name of the key pair the instance launched with.</p></li><li><p><code>launch.monitoring-enabled</code> - Whether detailed monitoring is enabled for the Spot Instance.</p></li><li><p><code>launch.ramdisk-id</code> - The RAM disk ID.</p></li><li><p><code>launched-availability-zone</code> - The Availability Zone in which the request is launched.</p></li><li><p><code>network-interface.addresses.primary</code> - Indicates whether the IP address is the primary private IP address.</p></li><li><p><code>network-interface.delete-on-termination</code> - Indicates whether the network interface is deleted when the instance is terminated.</p></li><li><p><code>network-interface.description</code> - A description of the network interface.</p></li><li><p><code>network-interface.device-index</code> - The index of the device for the network interface attachment on the instance.</p></li><li><p><code>network-interface.group-id</code> - The ID of the security group associated with the network interface.</p></li><li><p><code>network-interface.network-interface-id</code> - The ID of the network interface.</p></li><li><p><code>network-interface.private-ip-address</code> - The primary private IP address of the network interface.</p></li><li><p><code>network-interface.subnet-id</code> - The ID of the subnet for the instance.</p></li><li><p><code>product-description</code> - The product description associated with the instance (<code>Linux/UNIX</code> | <code>Windows</code>).</p></li><li><p><code>spot-instance-request-id</code> - The Spot Instance request ID.</p></li><li><p><code>spot-price</code> - The maximum hourly price for any Spot Instance launched to fulfill the request.</p></li><li><p><code>state</code> - The state of the Spot Instance request (<code>open</code> | <code>active</code> | <code>closed</code> | <code>cancelled</code> | <code>failed</code>). Spot request status information can help you track your Amazon EC2 Spot Instance requests. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot Request Status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p></li><li><p><code>status-code</code> - The short code describing the most recent evaluation of your Spot Instance request.</p></li><li><p><code>status-message</code> - The message explaining the status of the Spot Instance request.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>type</code> - The type of Spot Instance request (<code>one-time</code> | <code>persistent</code>).</p></li><li><p><code>valid-from</code> - The start date of the request.</p></li><li><p><code>valid-until</code> - The end date of the request.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more Spot Instance request IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable spotInstanceRequestIds;

@end

/**
 <p>Contains the output of DescribeSpotInstanceRequests.</p>
 */
@interface AWSEC2DescribeSpotInstanceRequestsResult : AWSModel


/**
 <p>One or more Spot Instance requests.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SpotInstanceRequest *> * _Nullable spotInstanceRequests;

@end

/**
 <p>Contains the parameters for DescribeSpotPriceHistory.</p>
 */
@interface AWSEC2DescribeSpotPriceHistoryRequest : AWSRequest


/**
 <p>Filters the results by the specified Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The date and time, up to the current date, from which to stop retrieving the price history data, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>One or more filters.</p><ul><li><p><code>availability-zone</code> - The Availability Zone for which prices should be returned.</p></li><li><p><code>instance-type</code> - The type of instance (for example, <code>m3.medium</code>).</p></li><li><p><code>product-description</code> - The product description for the Spot price (<code>Linux/UNIX</code> | <code>SUSE Linux</code> | <code>Windows</code> | <code>Linux/UNIX (Amazon VPC)</code> | <code>SUSE Linux (Amazon VPC)</code> | <code>Windows (Amazon VPC)</code>).</p></li><li><p><code>spot-price</code> - The Spot price. The value must match exactly (or use wildcards; greater than or less than comparison is not supported).</p></li><li><p><code>timestamp</code> - The time stamp of the Spot price history, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). You can use wildcards (* and ?). Greater than or less than comparison is not supported.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>Filters the results by the specified instance types.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceTypes;

/**
 <p>The maximum number of results to return in a single call. Specify a value between 1 and 1000. The default value is 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Filters the results by the specified basic product descriptions.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable productDescriptions;

/**
 <p>The date and time, up to the past 90 days, from which to start retrieving the price history data, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

@end

/**
 <p>Contains the output of DescribeSpotPriceHistory.</p>
 */
@interface AWSEC2DescribeSpotPriceHistoryResult : AWSModel


/**
 <p>The token required to retrieve the next set of results. This value is null or an empty string when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The historical Spot prices.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SpotPrice *> * _Nullable spotPriceHistory;

@end

/**
 
 */
@interface AWSEC2DescribeStaleSecurityGroupsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the operation, without actually making the request, and provides an error response. If you have the required permissions, the error response is DryRunOperation. Otherwise, it is UnauthorizedOperation.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The maximum number of items to return for this request. The request returns a token that you can specify in a subsequent call to get the next set of results.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of items to return. (You received this token from a prior call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 
 */
@interface AWSEC2DescribeStaleSecurityGroupsResult : AWSModel


/**
 <p>The token to use when requesting the next set of items. If there are no additional items to return, the string is empty.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the stale security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2StaleSecurityGroup *> * _Nullable staleSecurityGroupSet;

@end

/**
 <p>Contains the parameters for DescribeSubnets.</p>
 */
@interface AWSEC2DescribeSubnetsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>availabilityZone</code> - The Availability Zone for the subnet. You can also use <code>availability-zone</code> as the filter name.</p></li><li><p><code>available-ip-address-count</code> - The number of IPv4 addresses in the subnet that are available.</p></li><li><p><code>cidrBlock</code> - The IPv4 CIDR block of the subnet. The CIDR block you specify must exactly match the subnet's CIDR block for information to be returned for the subnet. You can also use <code>cidr</code> or <code>cidr-block</code> as the filter names.</p></li><li><p><code>defaultForAz</code> - Indicates whether this is the default subnet for the Availability Zone. You can also use <code>default-for-az</code> as the filter name.</p></li><li><p><code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block associated with the subnet.</p></li><li><p><code>ipv6-cidr-block-association.association-id</code> - An association ID for an IPv6 CIDR block associated with the subnet.</p></li><li><p><code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block associated with the subnet.</p></li><li><p><code>state</code> - The state of the subnet (<code>pending</code> | <code>available</code>).</p></li><li><p><code>subnet-id</code> - The ID of the subnet.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC for the subnet.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more subnet IDs.</p><p>Default: Describes all your subnets.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable subnetIds;

@end

/**
 <p>Contains the output of DescribeSubnets.</p>
 */
@interface AWSEC2DescribeSubnetsResult : AWSModel


/**
 <p>Information about one or more subnets.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Subnet *> * _Nullable subnets;

@end

/**
 <p>Contains the parameters for DescribeTags.</p>
 */
@interface AWSEC2DescribeTagsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>key</code> - The tag key.</p></li><li><p><code>resource-id</code> - The resource ID.</p></li><li><p><code>resource-type</code> - The resource type (<code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip</code> | <code>fpga-image</code> | <code>image</code> | <code>instance</code> | <code>internet-gateway</code> | <code>launch-template</code> | <code>natgateway</code> | <code>network-acl</code> | <code>network-interface</code> | <code>reserved-instances</code> | <code>route-table</code> | <code>security-group</code> | <code>snapshot</code> | <code>spot-instances-request</code> | <code>subnet</code> | <code>volume</code> | <code>vpc</code> | <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>).</p></li><li><p><code>value</code> - The tag value.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return in a single call. This value can be between 5 and 1000. To retrieve the remaining results, make another call with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the output of DescribeTags.</p>
 */
@interface AWSEC2DescribeTagsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return..</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>A list of tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TagDescription *> * _Nullable tags;

@end

/**
 <p>Contains the parameters for DescribeVolumeAttribute.</p>
 Required parameters: [VolumeId]
 */
@interface AWSEC2DescribeVolumeAttributeRequest : AWSRequest


/**
 <p>The attribute of the volume. This parameter is required.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Contains the output of DescribeVolumeAttribute.</p>
 */
@interface AWSEC2DescribeVolumeAttributeResult : AWSModel


/**
 <p>The state of <code>autoEnableIO</code> attribute.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable autoEnableIO;

/**
 <p>A list of product codes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Contains the parameters for DescribeVolumeStatus.</p>
 */
@interface AWSEC2DescribeVolumeStatusRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>action.code</code> - The action code for the event (for example, <code>enable-volume-io</code>).</p></li><li><p><code>action.description</code> - A description of the action.</p></li><li><p><code>action.event-id</code> - The event ID associated with the action.</p></li><li><p><code>availability-zone</code> - The Availability Zone of the instance.</p></li><li><p><code>event.description</code> - A description of the event.</p></li><li><p><code>event.event-id</code> - The event ID.</p></li><li><p><code>event.event-type</code> - The event type (for <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for <code>io-performance</code>: <code>io-performance:degraded</code> | <code>io-performance:severely-degraded</code> | <code>io-performance:stalled</code>).</p></li><li><p><code>event.not-after</code> - The latest end time for the event.</p></li><li><p><code>event.not-before</code> - The earliest start time for the event.</p></li><li><p><code>volume-status.details-name</code> - The cause for <code>volume-status.status</code> (<code>io-enabled</code> | <code>io-performance</code>).</p></li><li><p><code>volume-status.details-status</code> - The status of <code>volume-status.details-name</code> (for <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for <code>io-performance</code>: <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> | <code>stalled</code>).</p></li><li><p><code>volume-status.status</code> - The status of the volume (<code>ok</code> | <code>impaired</code> | <code>warning</code> | <code>insufficient-data</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of volume results returned by <code>DescribeVolumeStatus</code> in paginated output. When this parameter is used, the request only returns <code>MaxResults</code> results in a single page along with a <code>NextToken</code> response element. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned. If this parameter is not used, then <code>DescribeVolumeStatus</code> returns all results. You cannot specify this parameter and the volume IDs parameter in the same request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The <code>NextToken</code> value to include in a future <code>DescribeVolumeStatus</code> request. When the results of the request exceed <code>MaxResults</code>, this value can be used to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more volume IDs.</p><p>Default: Describes all your volumes.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable volumeIds;

@end

/**
 <p>Contains the output of DescribeVolumeStatus.</p>
 */
@interface AWSEC2DescribeVolumeStatusResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>A list of volumes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VolumeStatusItem *> * _Nullable volumeStatuses;

@end

/**
 
 */
@interface AWSEC2DescribeVolumesModificationsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters. Supported filters: <code>volume-id</code>, <code>modification-state</code>, <code>target-size</code>, <code>target-iops</code>, <code>target-volume-type</code>, <code>original-size</code>, <code>original-iops</code>, <code>original-volume-type</code>, <code>start-time</code>. </p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results (up to a limit of 500) to be returned in a paginated request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The <code>nextToken</code> value returned by a previous paginated request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more volume IDs for which in-progress modifications will be described.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable volumeIds;

@end

/**
 
 */
@interface AWSEC2DescribeVolumesModificationsResult : AWSModel


/**
 <p>Token for pagination, null if there are no more results </p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>A list of returned <a>VolumeModification</a> objects.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VolumeModification *> * _Nullable volumesModifications;

@end

/**
 <p>Contains the parameters for DescribeVolumes.</p>
 */
@interface AWSEC2DescribeVolumesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>attachment.attach-time</code> - The time stamp when the attachment initiated.</p></li><li><p><code>attachment.delete-on-termination</code> - Whether the volume is deleted on instance termination.</p></li><li><p><code>attachment.device</code> - The device name specified in the block device mapping (for example, <code>/dev/sda1</code>).</p></li><li><p><code>attachment.instance-id</code> - The ID of the instance the volume is attached to.</p></li><li><p><code>attachment.status</code> - The attachment state (<code>attaching</code> | <code>attached</code> | <code>detaching</code>).</p></li><li><p><code>availability-zone</code> - The Availability Zone in which the volume was created.</p></li><li><p><code>create-time</code> - The time stamp when the volume was created.</p></li><li><p><code>encrypted</code> - The encryption status of the volume.</p></li><li><p><code>size</code> - The size of the volume, in GiB.</p></li><li><p><code>snapshot-id</code> - The snapshot from which the volume was created.</p></li><li><p><code>status</code> - The status of the volume (<code>creating</code> | <code>available</code> | <code>in-use</code> | <code>deleting</code> | <code>deleted</code> | <code>error</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>volume-id</code> - The volume ID.</p></li><li><p><code>volume-type</code> - The Amazon EBS volume type. This can be <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for Magnetic volumes.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of volume results returned by <code>DescribeVolumes</code> in paginated output. When this parameter is used, <code>DescribeVolumes</code> only returns <code>MaxResults</code> results in a single page along with a <code>NextToken</code> response element. The remaining results of the initial request can be seen by sending another <code>DescribeVolumes</code> request with the returned <code>NextToken</code> value. This value can be between 5 and 500; if <code>MaxResults</code> is given a value larger than 500, only 500 results are returned. If this parameter is not used, then <code>DescribeVolumes</code> returns all results. You cannot specify this parameter and the volume IDs parameter in the same request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The <code>NextToken</code> value returned from a previous paginated <code>DescribeVolumes</code> request where <code>MaxResults</code> was used and the results exceeded the value of that parameter. Pagination continues from the end of the previous results that returned the <code>NextToken</code> value. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more volume IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable volumeIds;

@end

/**
 <p>Contains the output of DescribeVolumes.</p>
 */
@interface AWSEC2DescribeVolumesResult : AWSModel


/**
 <p>The <code>NextToken</code> value to include in a future <code>DescribeVolumes</code> request. When the results of a <code>DescribeVolumes</code> request exceed <code>MaxResults</code>, this value can be used to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the volumes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Volume *> * _Nullable volumes;

@end

/**
 <p>Contains the parameters for DescribeVpcAttribute.</p>
 Required parameters: [Attribute, VpcId]
 */
@interface AWSEC2DescribeVpcAttributeRequest : AWSRequest


/**
 <p>The VPC attribute.</p>
 */
@property (nonatomic, assign) AWSEC2VpcAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of DescribeVpcAttribute.</p>
 */
@interface AWSEC2DescribeVpcAttributeResult : AWSModel


/**
 <p>Indicates whether the instances launched in the VPC get DNS hostnames. If this attribute is <code>true</code>, instances in the VPC get DNS hostnames; otherwise, they do not.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable enableDnsHostnames;

/**
 <p>Indicates whether DNS resolution is enabled for the VPC. If this attribute is <code>true</code>, the Amazon DNS server resolves DNS hostnames for your instances to their corresponding IP addresses; otherwise, it does not.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable enableDnsSupport;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the parameters for DescribeVpcClassicLinkDnsSupport.</p>
 */
@interface AWSEC2DescribeVpcClassicLinkDnsSupportRequest : AWSRequest


/**
 <p>The maximum number of items to return for this request. The request returns a token that you can specify in a subsequent call to get the next set of results.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of items to return. (You received this token from a prior call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more VPC IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcIds;

@end

/**
 <p>Contains the output of DescribeVpcClassicLinkDnsSupport.</p>
 */
@interface AWSEC2DescribeVpcClassicLinkDnsSupportResult : AWSModel


/**
 <p>The token to use when requesting the next set of items.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the ClassicLink DNS support status of the VPCs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ClassicLinkDnsSupport *> * _Nullable vpcs;

@end

/**
 <p>Contains the parameters for DescribeVpcClassicLink.</p>
 */
@interface AWSEC2DescribeVpcClassicLinkRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>is-classic-link-enabled</code> - Whether the VPC is enabled for ClassicLink (<code>true</code> | <code>false</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more VPCs for which you want to describe the ClassicLink status.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcIds;

@end

/**
 <p>Contains the output of DescribeVpcClassicLink.</p>
 */
@interface AWSEC2DescribeVpcClassicLinkResult : AWSModel


/**
 <p>The ClassicLink status of one or more VPCs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcClassicLink *> * _Nullable vpcs;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointConnectionNotificationsRequest : AWSRequest


/**
 <p>The ID of the notification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable connectionNotificationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>connection-notification-arn</code> - The ARN of SNS topic for the notification.</p></li><li><p><code>connection-notification-id</code> - The ID of the notification.</p></li><li><p><code>connection-notification-state</code> - The state of the notification (<code>Enabled</code> | <code>Disabled</code>).</p></li><li><p><code>connection-notification-type</code> - The type of notification (<code>Topic</code>).</p></li><li><p><code>service-id</code> - The ID of the endpoint service.</p></li><li><p><code>vpc-endpoint-id</code> - The ID of the VPC endpoint.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return in a single call. To retrieve the remaining results, make another request with the returned <code>NextToken</code> value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to request the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointConnectionNotificationsResult : AWSModel


/**
 <p>One or more notifications.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ConnectionNotification *> * _Nullable connectionNotificationSet;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointConnectionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>service-id</code> - The ID of the service.</p></li><li><p><code>vpc-endpoint-owner</code> - The AWS account number of the owner of the endpoint.</p></li><li><p><code>vpc-endpoint-state</code> - The state of the endpoint (<code>pendingAcceptance</code> | <code>pending</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code> | <code>rejected</code> | <code>failed</code>).</p></li><li><p><code>vpc-endpoint-id</code> - The ID of the endpoint.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointConnectionsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about one or more VPC endpoint connections.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcEndpointConnection *> * _Nullable vpcEndpointConnections;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointServiceConfigurationsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>service-name</code> - The name of the service.</p></li><li><p><code>service-id</code> - The ID of the service.</p></li><li><p><code>service-state</code> - The state of the service (<code>Pending</code> | <code>Available</code> | <code>Deleting</code> | <code>Deleted</code> | <code>Failed</code>). </p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The IDs of one or more services.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable serviceIds;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointServiceConfigurationsResult : AWSModel


/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about one or more services.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ServiceConfiguration *> * _Nullable serviceConfigurations;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointServicePermissionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>principal</code> - The ARN of the principal.</p></li><li><p><code>principal-type</code> - The principal type (<code>All</code> | <code>Service</code> | <code>OrganizationUnit</code> | <code>Account</code> | <code>User</code> | <code>Role</code>).</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of results to return for the request in a single page. The remaining results of the initial request can be seen by sending another request with the returned <code>NextToken</code> value. This value can be between 5 and 1000; if <code>MaxResults</code> is given a value larger than 1000, only 1000 results are returned.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token to retrieve the next page of results.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>The ID of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

@end

/**
 
 */
@interface AWSEC2DescribeVpcEndpointServicePermissionsResult : AWSModel


/**
 <p>Information about one or more allowed principals.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2AllowedPrincipal *> * _Nullable allowedPrincipals;

/**
 <p>The token to use to retrieve the next page of results. This value is <code>null</code> when there are no more results to return.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

@end

/**
 <p>Contains the parameters for DescribeVpcEndpointServices.</p>
 */
@interface AWSEC2DescribeVpcEndpointServicesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>service-name</code>: The name of the service.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of items to return for this request. The request returns a token that you can specify in a subsequent call to get the next set of results.</p><p>Constraint: If the value is greater than 1000, we return only 1000 items.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of items to return. (You received this token from a prior call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more service names.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable serviceNames;

@end

/**
 <p>Contains the output of DescribeVpcEndpointServices.</p>
 */
@interface AWSEC2DescribeVpcEndpointServicesResult : AWSModel


/**
 <p>The token to use when requesting the next set of items. If there are no additional items to return, the string is empty.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the service.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ServiceDetail *> * _Nullable serviceDetails;

/**
 <p>A list of supported services.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable serviceNames;

@end

/**
 <p>Contains the parameters for DescribeVpcEndpoints.</p>
 */
@interface AWSEC2DescribeVpcEndpointsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>service-name</code>: The name of the service.</p></li><li><p><code>vpc-id</code>: The ID of the VPC in which the endpoint resides.</p></li><li><p><code>vpc-endpoint-id</code>: The ID of the endpoint.</p></li><li><p><code>vpc-endpoint-state</code>: The state of the endpoint. (<code>pending</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code>)</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>The maximum number of items to return for this request. The request returns a token that you can specify in a subsequent call to get the next set of results.</p><p>Constraint: If the value is greater than 1000, we return only 1000 items.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxResults;

/**
 <p>The token for the next set of items to return. (You received this token from a prior call.)</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>One or more endpoint IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcEndpointIds;

@end

/**
 <p>Contains the output of DescribeVpcEndpoints.</p>
 */
@interface AWSEC2DescribeVpcEndpointsResult : AWSModel


/**
 <p>The token to use when requesting the next set of items. If there are no additional items to return, the string is empty.</p>
 */
@property (nonatomic, strong) NSString * _Nullable nextToken;

/**
 <p>Information about the endpoints.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcEndpoint *> * _Nullable vpcEndpoints;

@end

/**
 <p>Contains the parameters for DescribeVpcPeeringConnections.</p>
 */
@interface AWSEC2DescribeVpcPeeringConnectionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>accepter-vpc-info.cidr-block</code> - The IPv4 CIDR block of the accepter VPC.</p></li><li><p><code>accepter-vpc-info.owner-id</code> - The AWS account ID of the owner of the accepter VPC.</p></li><li><p><code>accepter-vpc-info.vpc-id</code> - The ID of the accepter VPC.</p></li><li><p><code>expiration-time</code> - The expiration date and time for the VPC peering connection.</p></li><li><p><code>requester-vpc-info.cidr-block</code> - The IPv4 CIDR block of the requester's VPC.</p></li><li><p><code>requester-vpc-info.owner-id</code> - The AWS account ID of the owner of the requester VPC.</p></li><li><p><code>requester-vpc-info.vpc-id</code> - The ID of the requester VPC.</p></li><li><p><code>status-code</code> - The status of the VPC peering connection (<code>pending-acceptance</code> | <code>failed</code> | <code>expired</code> | <code>provisioning</code> | <code>active</code> | <code>deleting</code> | <code>deleted</code> | <code>rejected</code>).</p></li><li><p><code>status-message</code> - A message that provides more information about the status of the VPC peering connection, if applicable.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-peering-connection-id</code> - The ID of the VPC peering connection.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more VPC peering connection IDs.</p><p>Default: Describes all your VPC peering connections.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcPeeringConnectionIds;

@end

/**
 <p>Contains the output of DescribeVpcPeeringConnections.</p>
 */
@interface AWSEC2DescribeVpcPeeringConnectionsResult : AWSModel


/**
 <p>Information about the VPC peering connections.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcPeeringConnection *> * _Nullable vpcPeeringConnections;

@end

/**
 <p>Contains the parameters for DescribeVpcs.</p>
 */
@interface AWSEC2DescribeVpcsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>cidr</code> - The primary IPv4 CIDR block of the VPC. The CIDR block you specify must exactly match the VPC's CIDR block for information to be returned for the VPC. Must contain the slash followed by one or two digits (for example, <code>/28</code>).</p></li><li><p><code>cidr-block-association.cidr-block</code> - An IPv4 CIDR block associated with the VPC.</p></li><li><p><code>cidr-block-association.association-id</code> - The association ID for an IPv4 CIDR block associated with the VPC.</p></li><li><p><code>cidr-block-association.state</code> - The state of an IPv4 CIDR block associated with the VPC.</p></li><li><p><code>dhcp-options-id</code> - The ID of a set of DHCP options.</p></li><li><p><code>ipv6-cidr-block-association.ipv6-cidr-block</code> - An IPv6 CIDR block associated with the VPC.</p></li><li><p><code>ipv6-cidr-block-association.association-id</code> - The association ID for an IPv6 CIDR block associated with the VPC.</p></li><li><p><code>ipv6-cidr-block-association.state</code> - The state of an IPv6 CIDR block associated with the VPC.</p></li><li><p><code>isDefault</code> - Indicates whether the VPC is the default VPC.</p></li><li><p><code>state</code> - The state of the VPC (<code>pending</code> | <code>available</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>vpc-id</code> - The ID of the VPC.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more VPC IDs.</p><p>Default: Describes all your VPCs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcIds;

@end

/**
 <p>Contains the output of DescribeVpcs.</p>
 */
@interface AWSEC2DescribeVpcsResult : AWSModel


/**
 <p>Information about one or more VPCs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Vpc *> * _Nullable vpcs;

@end

/**
 <p>Contains the parameters for DescribeVpnConnections.</p>
 */
@interface AWSEC2DescribeVpnConnectionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>customer-gateway-configuration</code> - The configuration information for the customer gateway.</p></li><li><p><code>customer-gateway-id</code> - The ID of a customer gateway associated with the VPN connection.</p></li><li><p><code>state</code> - The state of the VPN connection (<code>pending</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p></li><li><p><code>option.static-routes-only</code> - Indicates whether the connection has static routes only. Used for devices that do not support Border Gateway Protocol (BGP).</p></li><li><p><code>route.destination-cidr-block</code> - The destination CIDR block. This corresponds to the subnet used in a customer data center.</p></li><li><p><code>bgp-asn</code> - The BGP Autonomous System Number (ASN) associated with a BGP device.</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>type</code> - The type of VPN connection. Currently the only supported type is <code>ipsec.1</code>.</p></li><li><p><code>vpn-connection-id</code> - The ID of the VPN connection.</p></li><li><p><code>vpn-gateway-id</code> - The ID of a virtual private gateway associated with the VPN connection.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more VPN connection IDs.</p><p>Default: Describes your VPN connections.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpnConnectionIds;

@end

/**
 <p>Contains the output of DescribeVpnConnections.</p>
 */
@interface AWSEC2DescribeVpnConnectionsResult : AWSModel


/**
 <p>Information about one or more VPN connections.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpnConnection *> * _Nullable vpnConnections;

@end

/**
 <p>Contains the parameters for DescribeVpnGateways.</p>
 */
@interface AWSEC2DescribeVpnGatewaysRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more filters.</p><ul><li><p><code>amazon-side-asn</code> - The Autonomous System Number (ASN) for the Amazon side of the gateway.</p></li><li><p><code>attachment.state</code> - The current state of the attachment between the gateway and the VPC (<code>attaching</code> | <code>attached</code> | <code>detaching</code> | <code>detached</code>).</p></li><li><p><code>attachment.vpc-id</code> - The ID of an attached VPC.</p></li><li><p><code>availability-zone</code> - The Availability Zone for the virtual private gateway (if applicable).</p></li><li><p><code>state</code> - The state of the virtual private gateway (<code>pending</code> | <code>available</code> | <code>deleting</code> | <code>deleted</code>).</p></li><li><p><code>tag</code>:<i>key</i>=<i>value</i> - The key/value combination of a tag assigned to the resource. Specify the key of the tag in the filter name and the value of the tag in the filter value. For example, for the tag Purpose=X, specify <code>tag:Purpose</code> for the filter name and <code>X</code> for the filter value.</p></li><li><p><code>tag-key</code> - The key of a tag assigned to the resource. This filter is independent of the <code>tag-value</code> filter. For example, if you use both the filter "tag-key=Purpose" and the filter "tag-value=X", you get any resources assigned both the tag key Purpose (regardless of what the tag's value is), and the tag value X (regardless of what the tag's key is). If you want to list only resources where Purpose is X, see the <code>tag</code>:<i>key</i>=<i>value</i> filter.</p></li><li><p><code>tag-value</code> - The value of a tag assigned to the resource. This filter is independent of the <code>tag-key</code> filter.</p></li><li><p><code>type</code> - The type of virtual private gateway. Currently the only supported type is <code>ipsec.1</code>.</p></li><li><p><code>vpn-gateway-id</code> - The ID of the virtual private gateway.</p></li></ul>
 */
@property (nonatomic, strong) NSArray<AWSEC2Filter *> * _Nullable filters;

/**
 <p>One or more virtual private gateway IDs.</p><p>Default: Describes all your virtual private gateways.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpnGatewayIds;

@end

/**
 <p>Contains the output of DescribeVpnGateways.</p>
 */
@interface AWSEC2DescribeVpnGatewaysResult : AWSModel


/**
 <p>Information about one or more virtual private gateways.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpnGateway *> * _Nullable vpnGateways;

@end

/**
 <p>Contains the parameters for DetachClassicLinkVpc.</p>
 Required parameters: [InstanceId, VpcId]
 */
@interface AWSEC2DetachClassicLinkVpcRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance to unlink from the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The ID of the VPC to which the instance is linked.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of DetachClassicLinkVpc.</p>
 */
@interface AWSEC2DetachClassicLinkVpcResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for DetachInternetGateway.</p>
 Required parameters: [InternetGatewayId, VpcId]
 */
@interface AWSEC2DetachInternetGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable internetGatewayId;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the parameters for DetachNetworkInterface.</p>
 Required parameters: [AttachmentId]
 */
@interface AWSEC2DetachNetworkInterfaceRequest : AWSRequest


/**
 <p>The ID of the attachment.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attachmentId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies whether to force a detachment.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable force;

@end

/**
 <p>Contains the parameters for DetachVolume.</p>
 Required parameters: [VolumeId]
 */
@interface AWSEC2DetachVolumeRequest : AWSRequest


/**
 <p>The device name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable device;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Forces detachment if the previous detachment attempt did not occur cleanly (for example, logging into an instance, unmounting the volume, and detaching normally). This option can lead to data loss or a corrupted file system. Use this option only as a last resort to detach a volume from a failed instance. The instance won't have an opportunity to flush file system caches or file system metadata. If you use this option, you must perform file system check and repair procedures.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable force;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Contains the parameters for DetachVpnGateway.</p>
 Required parameters: [VpcId, VpnGatewayId]
 */
@interface AWSEC2DetachVpnGatewayRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnGatewayId;

@end

/**
 <p>Describes a DHCP configuration option.</p>
 */
@interface AWSEC2DhcpConfiguration : AWSModel


/**
 <p>The name of a DHCP option.</p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 <p>One or more values for the DHCP option.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2AttributeValue *> * _Nullable values;

@end

/**
 <p>Describes a set of DHCP options.</p>
 */
@interface AWSEC2DhcpOptions : AWSModel


/**
 <p>One or more DHCP options in the set.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DhcpConfiguration *> * _Nullable dhcpConfigurations;

/**
 <p>The ID of the set of DHCP options.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dhcpOptionsId;

/**
 <p>Any tags assigned to the DHCP options set.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Contains the parameters for DisableVgwRoutePropagation.</p>
 Required parameters: [GatewayId, RouteTableId]
 */
@interface AWSEC2DisableVgwRoutePropagationRequest : AWSRequest


/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable gatewayId;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

@end

/**
 <p>Contains the parameters for DisableVpcClassicLinkDnsSupport.</p>
 */
@interface AWSEC2DisableVpcClassicLinkDnsSupportRequest : AWSRequest


/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of DisableVpcClassicLinkDnsSupport.</p>
 */
@interface AWSEC2DisableVpcClassicLinkDnsSupportResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for DisableVpcClassicLink.</p>
 Required parameters: [VpcId]
 */
@interface AWSEC2DisableVpcClassicLinkRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of DisableVpcClassicLink.</p>
 */
@interface AWSEC2DisableVpcClassicLinkResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for DisassociateAddress.</p>
 */
@interface AWSEC2DisassociateAddressRequest : AWSRequest


/**
 <p>[EC2-VPC] The association ID. Required for EC2-VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 
 */
@interface AWSEC2DisassociateIamInstanceProfileRequest : AWSRequest


/**
 <p>The ID of the IAM instance profile association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

@end

/**
 
 */
@interface AWSEC2DisassociateIamInstanceProfileResult : AWSModel


/**
 <p>Information about the IAM instance profile association.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileAssociation * _Nullable iamInstanceProfileAssociation;

@end

/**
 <p>Contains the parameters for DisassociateRouteTable.</p>
 Required parameters: [AssociationId]
 */
@interface AWSEC2DisassociateRouteTableRequest : AWSRequest


/**
 <p>The association ID representing the current association between the route table and subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 
 */
@interface AWSEC2DisassociateSubnetCidrBlockRequest : AWSRequest


/**
 <p>The association ID for the CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

@end

/**
 
 */
@interface AWSEC2DisassociateSubnetCidrBlockResult : AWSModel


/**
 <p>Information about the IPv6 CIDR block association.</p>
 */
@property (nonatomic, strong) AWSEC2SubnetIpv6CidrBlockAssociation * _Nullable ipv6CidrBlockAssociation;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 
 */
@interface AWSEC2DisassociateVpcCidrBlockRequest : AWSRequest


/**
 <p>The association ID for the CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

@end

/**
 
 */
@interface AWSEC2DisassociateVpcCidrBlockResult : AWSModel


/**
 <p>Information about the IPv4 CIDR block association.</p>
 */
@property (nonatomic, strong) AWSEC2VpcCidrBlockAssociation * _Nullable cidrBlockAssociation;

/**
 <p>Information about the IPv6 CIDR block association.</p>
 */
@property (nonatomic, strong) AWSEC2VpcIpv6CidrBlockAssociation * _Nullable ipv6CidrBlockAssociation;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a disk image.</p>
 */
@interface AWSEC2DiskImage : AWSModel


/**
 <p>A description of the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Information about the disk image.</p>
 */
@property (nonatomic, strong) AWSEC2DiskImageDetail * _Nullable image;

/**
 <p>Information about the volume.</p>
 */
@property (nonatomic, strong) AWSEC2VolumeDetail * _Nullable volume;

@end

/**
 <p>Describes a disk image.</p>
 */
@interface AWSEC2DiskImageDescription : AWSModel


/**
 <p>The checksum computed for the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable checksum;

/**
 <p>The disk image format.</p>
 */
@property (nonatomic, assign) AWSEC2DiskImageFormat format;

/**
 <p>A presigned URL for the import manifest stored in Amazon S3. For information about creating a presigned URL for an Amazon S3 object, read the "Query String Request Authentication Alternative" section of the <a href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer Guide</i>.</p><p>For information about the import manifest referenced by this API action, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM Import Manifest</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importManifestUrl;

/**
 <p>The size of the disk image, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable size;

@end

/**
 <p>Describes a disk image.</p>
 Required parameters: [Bytes, Format, ImportManifestUrl]
 */
@interface AWSEC2DiskImageDetail : AWSModel


/**
 <p>The size of the disk image, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bytes;

/**
 <p>The disk image format.</p>
 */
@property (nonatomic, assign) AWSEC2DiskImageFormat format;

/**
 <p>A presigned URL for the import manifest stored in Amazon S3 and presented here as an Amazon S3 presigned URL. For information about creating a presigned URL for an Amazon S3 object, read the "Query String Request Authentication Alternative" section of the <a href="http://docs.aws.amazon.com/AmazonS3/latest/dev/RESTAuthentication.html">Authenticating REST Requests</a> topic in the <i>Amazon Simple Storage Service Developer Guide</i>.</p><p>For information about the import manifest referenced by this API action, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/manifest.html">VM Import Manifest</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importManifestUrl;

@end

/**
 <p>Describes a disk image volume.</p>
 */
@interface AWSEC2DiskImageVolumeDescription : AWSModel


/**
 <p>The volume identifier.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identifier;

/**
 <p>The size of the volume, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable size;

@end

/**
 <p>Describes a DNS entry.</p>
 */
@interface AWSEC2DnsEntry : AWSModel


/**
 <p>The DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dnsName;

/**
 <p>The ID of the private hosted zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostedZoneId;

@end

/**
 <p>Describes a block device for an EBS volume.</p>
 */
@interface AWSEC2EbsBlockDevice : AWSModel


/**
 <p>Indicates whether the EBS volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be attached to instances that support Amazon EBS encryption. If you are creating a volume from a snapshot, you can't specify an encryption value. This is because only blank volumes can be encrypted on creation.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) that the volume supports. For <code>io1</code>, this represents the number of IOPS that are provisioned for the volume. For <code>gp2</code>, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information about General Purpose SSD baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and 100-10000 IOPS for <code>gp2</code> volumes.</p><p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or <code>standard</code> volumes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>Identifier (key ID, key alias, ID ARN, or alias ARN) for a user-managed CMK under which the EBS volume is encrypted.</p><p>Note: This parameter is only supported on <code>BlockDeviceMapping</code> objects called by <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RunInstances.html">RunInstances</a>, <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotFleet.html">RequestSpotFleet</a>, and <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_RequestSpotInstances.html">RequestSpotInstances</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>The ID of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The size of the volume, in GiB.</p><p>Constraints: 1-16384 for General Purpose SSD (<code>gp2</code>), 4-16384 for Provisioned IOPS SSD (<code>io1</code>), 500-16384 for Throughput Optimized HDD (<code>st1</code>), 500-16384 for Cold HDD (<code>sc1</code>), and 1-1024 for Magnetic (<code>standard</code>) volumes. If you specify a snapshot, the volume size must be equal to or larger than the snapshot size.</p><p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable volumeSize;

/**
 <p>The volume type: <code>gp2</code>, <code>io1</code>, <code>st1</code>, <code>sc1</code>, or <code>standard</code>.</p><p>Default: <code>standard</code></p>
 */
@property (nonatomic, assign) AWSEC2VolumeType volumeType;

@end

/**
 <p>Describes a parameter used to set up an EBS volume in a block device mapping.</p>
 */
@interface AWSEC2EbsInstanceBlockDevice : AWSModel


/**
 <p>The time stamp when the attachment initiated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable attachTime;

/**
 <p>Indicates whether the volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The attachment state.</p>
 */
@property (nonatomic, assign) AWSEC2AttachmentStatus status;

/**
 <p>The ID of the EBS volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Describes information used to set up an EBS volume specified in a block device mapping.</p>
 */
@interface AWSEC2EbsInstanceBlockDeviceSpecification : AWSModel


/**
 <p>Indicates whether the volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The ID of the EBS volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Describes an egress-only Internet gateway.</p>
 */
@interface AWSEC2EgressOnlyInternetGateway : AWSModel


/**
 <p>Information about the attachment of the egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InternetGatewayAttachment *> * _Nullable attachments;

/**
 <p>The ID of the egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable egressOnlyInternetGatewayId;

@end

/**
 <p>Describes the association between an instance and an Elastic GPU.</p>
 */
@interface AWSEC2ElasticGpuAssociation : AWSModel


/**
 <p>The ID of the association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable elasticGpuAssociationId;

/**
 <p>The state of the association between the instance and the Elastic GPU.</p>
 */
@property (nonatomic, strong) NSString * _Nullable elasticGpuAssociationState;

/**
 <p>The time the Elastic GPU was associated with the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable elasticGpuAssociationTime;

/**
 <p>The ID of the Elastic GPU.</p>
 */
@property (nonatomic, strong) NSString * _Nullable elasticGpuId;

@end

/**
 <p>Describes the status of an Elastic GPU.</p>
 */
@interface AWSEC2ElasticGpuHealth : AWSModel


/**
 <p>The health status.</p>
 */
@property (nonatomic, assign) AWSEC2ElasticGpuStatus status;

@end

/**
 <p>A specification for an Elastic GPU.</p>
 Required parameters: [Type]
 */
@interface AWSEC2ElasticGpuSpecification : AWSModel


/**
 <p>The type of Elastic GPU.</p>
 */
@property (nonatomic, strong) NSString * _Nullable types;

@end

/**
 <p>Describes an elastic GPU.</p>
 */
@interface AWSEC2ElasticGpuSpecificationResponse : AWSModel


/**
 <p>The elastic GPU type.</p>
 */
@property (nonatomic, strong) NSString * _Nullable types;

@end

/**
 <p>Describes an Elastic GPU.</p>
 */
@interface AWSEC2ElasticGpus : AWSModel


/**
 <p>The Availability Zone in the which the Elastic GPU resides.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The status of the Elastic GPU.</p>
 */
@property (nonatomic, strong) AWSEC2ElasticGpuHealth * _Nullable elasticGpuHealth;

/**
 <p>The ID of the Elastic GPU.</p>
 */
@property (nonatomic, strong) NSString * _Nullable elasticGpuId;

/**
 <p>The state of the Elastic GPU.</p>
 */
@property (nonatomic, assign) AWSEC2ElasticGpuState elasticGpuState;

/**
 <p>The type of Elastic GPU.</p>
 */
@property (nonatomic, strong) NSString * _Nullable elasticGpuType;

/**
 <p>The ID of the instance to which the Elastic GPU is attached.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Contains the parameters for EnableVgwRoutePropagation.</p>
 Required parameters: [GatewayId, RouteTableId]
 */
@interface AWSEC2EnableVgwRoutePropagationRequest : AWSRequest


/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable gatewayId;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

@end

/**
 <p>Contains the parameters for EnableVolumeIO.</p>
 Required parameters: [VolumeId]
 */
@interface AWSEC2EnableVolumeIORequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Contains the parameters for EnableVpcClassicLinkDnsSupport.</p>
 */
@interface AWSEC2EnableVpcClassicLinkDnsSupportRequest : AWSRequest


/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of EnableVpcClassicLinkDnsSupport.</p>
 */
@interface AWSEC2EnableVpcClassicLinkDnsSupportResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for EnableVpcClassicLink.</p>
 Required parameters: [VpcId]
 */
@interface AWSEC2EnableVpcClassicLinkRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of EnableVpcClassicLink.</p>
 */
@interface AWSEC2EnableVpcClassicLinkResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Describes a Spot Fleet event.</p>
 */
@interface AWSEC2EventInformation : AWSModel


/**
 <p>The description of the event.</p>
 */
@property (nonatomic, strong) NSString * _Nullable eventDescription;

/**
 <p>The event.</p><p>The following are the <code>error</code> events:</p><ul><li><p><code>iamFleetRoleInvalid</code> - The Spot Fleet did not have the required permissions either to launch or terminate an instance.</p></li><li><p><code>launchSpecTemporarilyBlacklisted</code> - The configuration is not valid and several attempts to launch instances have failed. For more information, see the description of the event.</p></li><li><p><code>spotFleetRequestConfigurationInvalid</code> - The configuration is not valid. For more information, see the description of the event.</p></li><li><p><code>spotInstanceCountLimitExceeded</code> - You've reached the limit on the number of Spot Instances that you can launch.</p></li></ul><p>The following are the <code>fleetRequestChange</code> events:</p><ul><li><p><code>active</code> - The Spot Fleet has been validated and Amazon EC2 is attempting to maintain the target number of running Spot Instances.</p></li><li><p><code>cancelled</code> - The Spot Fleet is canceled and has no running Spot Instances. The Spot Fleet will be deleted two days after its instances were terminated.</p></li><li><p><code>cancelled_running</code> - The Spot Fleet is canceled and does not launch additional Spot Instances. Existing Spot Instances continue to run until they are interrupted or terminated.</p></li><li><p><code>cancelled_terminating</code> - The Spot Fleet is canceled and its Spot Instances are terminating.</p></li><li><p><code>expired</code> - The Spot Fleet request has expired. A subsequent event indicates that the instances were terminated, if the request was created with <code>TerminateInstancesWithExpiration</code> set.</p></li><li><p><code>modify_in_progress</code> - A request to modify the Spot Fleet request was accepted and is in progress.</p></li><li><p><code>modify_successful</code> - The Spot Fleet request was modified.</p></li><li><p><code>price_update</code> - The price for a launch configuration was adjusted because it was too high. This change is permanent.</p></li><li><p><code>submitted</code> - The Spot Fleet request is being evaluated and Amazon EC2 is preparing to launch the target number of Spot Instances.</p></li></ul><p>The following are the <code>instanceChange</code> events:</p><ul><li><p><code>launched</code> - A request was fulfilled and a new instance was launched.</p></li><li><p><code>terminated</code> - An instance was terminated by the user.</p></li></ul><p>The following are the <code>Information</code> events:</p><ul><li><p><code>launchSpecUnusable</code> - The price in a launch specification is not valid because it is below the Spot price or the Spot price is above the On-Demand price.</p></li><li><p><code>fleetProgressHalted</code> - The price in every launch specification is not valid. A launch specification might become valid if the Spot price changes.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable eventSubType;

/**
 <p>The ID of the instance. This information is available only for <code>instanceChange</code> events.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Describes an instance export task.</p>
 */
@interface AWSEC2ExportTask : AWSModel


/**
 <p>A description of the resource being exported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the export task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable exportTaskId;

/**
 <p>Information about the export task.</p>
 */
@property (nonatomic, strong) AWSEC2ExportToS3Task * _Nullable exportToS3Task;

/**
 <p>Information about the instance to export.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceExportDetails * _Nullable instanceExportDetails;

/**
 <p>The state of the export task.</p>
 */
@property (nonatomic, assign) AWSEC2ExportTaskState state;

/**
 <p>The status message related to the export task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes the format and location for an instance export task.</p>
 */
@interface AWSEC2ExportToS3Task : AWSModel


/**
 <p>The container format used to combine disk images with metadata (such as OVF). If absent, only the disk image is exported.</p>
 */
@property (nonatomic, assign) AWSEC2ContainerFormat containerFormat;

/**
 <p>The format for the exported image.</p>
 */
@property (nonatomic, assign) AWSEC2DiskImageFormat diskImageFormat;

/**
 <p>The S3 bucket for the destination image. The destination bucket must exist and grant WRITE and READ_ACP permissions to the AWS account <code>vm-import-export@amazon.com</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Bucket;

/**
 <p>The encryption key for your S3 bucket.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Key;

@end

/**
 <p>Describes an instance export task.</p>
 */
@interface AWSEC2ExportToS3TaskSpecification : AWSModel


/**
 <p>The container format used to combine disk images with metadata (such as OVF). If absent, only the disk image is exported.</p>
 */
@property (nonatomic, assign) AWSEC2ContainerFormat containerFormat;

/**
 <p>The format for the exported image.</p>
 */
@property (nonatomic, assign) AWSEC2DiskImageFormat diskImageFormat;

/**
 <p>The S3 bucket for the destination image. The destination bucket must exist and grant WRITE and READ_ACP permissions to the AWS account <code>vm-import-export@amazon.com</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Bucket;

/**
 <p>The image is written to a single object in the S3 bucket at the S3 key s3prefix + exportTaskId + '.' + diskImageFormat.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Prefix;

@end

/**
 <p>A filter name and value pair that is used to return a more specific list of results from a describe operation. Filters can be used to match a set of resources by specific criteria, such as tags, attributes, or IDs. The filters supported by a describe operation are documented with the describe operation. For example:</p><ul><li><p><a>DescribeAvailabilityZones</a></p></li><li><p><a>DescribeImages</a></p></li><li><p><a>DescribeInstances</a></p></li><li><p><a>DescribeKeyPairs</a></p></li><li><p><a>DescribeSecurityGroups</a></p></li><li><p><a>DescribeSnapshots</a></p></li><li><p><a>DescribeSubnets</a></p></li><li><p><a>DescribeTags</a></p></li><li><p><a>DescribeVolumes</a></p></li><li><p><a>DescribeVpcs</a></p></li></ul>
 */
@interface AWSEC2Filter : AWSModel


/**
 <p>The name of the filter. Filter names are case-sensitive.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>One or more filter values. Filter values are case-sensitive.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable values;

@end

/**
 <p>Describes an EC2 Fleet.</p>
 */
@interface AWSEC2FleetData : AWSModel


/**
 <p>The progress of the EC2 Fleet. If there is an error, the status is <code>error</code>. After all requests are placed, the status is <code>pending_fulfillment</code>. If the size of the EC2 Fleet is equal to or greater than its target capacity, the status is <code>fulfilled</code>. If the size of the EC2 Fleet is decreased, the status is <code>pending_termination</code> while instances are terminating.</p>
 */
@property (nonatomic, assign) AWSEC2FleetActivityStatus activityStatus;

/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p><p>Constraints: Maximum 64 ASCII characters</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The creation date and time of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>Indicates whether running instances should be terminated if the target capacity of the EC2 Fleet is decreased below the current size of the EC2 Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2FleetExcessCapacityTerminationPolicy excessCapacityTerminationPolicy;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>The state of the EC2 Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2FleetStateCode fleetState;

/**
 <p>The number of units fulfilled by this request compared to the set target capacity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fulfilledCapacity;

/**
 <p>The number of units fulfilled by this request compared to the set target On-Demand capacity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fulfilledOnDemandCapacity;

/**
 <p>The launch template and overrides.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FleetLaunchTemplateConfig *> * _Nullable launchTemplateConfigs;

/**
 <p>Indicates whether EC2 Fleet should replace unhealthy instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable replaceUnhealthyInstances;

/**
 <p>The configuration of Spot Instances in an EC2 Fleet.</p>
 */
@property (nonatomic, strong) AWSEC2SpotOptions * _Nullable spotOptions;

/**
 <p>The tags for an EC2 Fleet resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The number of units to request. You can choose to set the target capacity in terms of instances or a performance characteristic that is important to your application workload, such as vCPUs, memory, or I/O. If the request type is <code>maintain</code>, you can specify a target capacity of 0 and add capacity later.</p>
 */
@property (nonatomic, strong) AWSEC2TargetCapacitySpecification * _Nullable targetCapacitySpecification;

/**
 <p>Indicates whether running instances should be terminated when the EC2 Fleet expires. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable terminateInstancesWithExpiration;

/**
 <p>The type of request. Indicates whether the EC2 Fleet only <code>requests</code> the target capacity, or also attempts to <code>maintain</code> it. If you request a certain target capacity, EC2 Fleet only places the required requests; it does not attempt to replenish instances if capacity is diminished, and does not submit requests in alternative capacity pools if capacity is unavailable. To maintain a certain target capacity, EC2 Fleet places the required requests to meet this target capacity. It also automatically replenishes any interrupted Spot Instances. Default: <code>maintain</code>.</p>
 */
@property (nonatomic, assign) AWSEC2FleetType types;

/**
 <p>The start date and time of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is to start fulfilling the request immediately. </p>
 */
@property (nonatomic, strong) NSDate * _Nullable validFrom;

/**
 <p>The end date and time of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point, no new instance requests are placed or able to fulfill the request. The default end date is 7 days from the current date. </p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>Describes a launch template and overrides.</p>
 */
@interface AWSEC2FleetLaunchTemplateConfig : AWSModel


/**
 <p>The launch template.</p>
 */
@property (nonatomic, strong) AWSEC2FleetLaunchTemplateSpecification * _Nullable launchTemplateSpecification;

/**
 <p>Any parameters that you specify override the same parameters in the launch template.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FleetLaunchTemplateOverrides *> * _Nullable overrides;

@end

/**
 <p>Describes a launch template and overrides.</p>
 */
@interface AWSEC2FleetLaunchTemplateConfigRequest : AWSModel


/**
 <p>The launch template to use. You must specify either the launch template ID or launch template name in the request. </p>
 */
@property (nonatomic, strong) AWSEC2FleetLaunchTemplateSpecificationRequest * _Nullable launchTemplateSpecification;

/**
 <p>Any parameters that you specify override the same parameters in the launch template.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2FleetLaunchTemplateOverridesRequest *> * _Nullable overrides;

@end

/**
 <p>Describes overrides for a launch template.</p>
 */
@interface AWSEC2FleetLaunchTemplateOverrides : AWSModel


/**
 <p>The Availability Zone in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The maximum price per unit hour that you are willing to pay for a Spot Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable maxPrice;

/**
 <p>The ID of the subnet in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The number of units provided by the specified instance type.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable weightedCapacity;

@end

/**
 <p>Describes overrides for a launch template.</p>
 */
@interface AWSEC2FleetLaunchTemplateOverridesRequest : AWSModel


/**
 <p>The Availability Zone in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The maximum price per unit hour that you are willing to pay for a Spot Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable maxPrice;

/**
 <p>The ID of the subnet in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The number of units provided by the specified instance type.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable weightedCapacity;

@end

/**
 <p>Describes a launch template.</p>
 */
@interface AWSEC2FleetLaunchTemplateSpecification : AWSModel


/**
 <p>The ID of the launch template. You must specify either a template ID or a template name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either a template name or a template ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version number. By default, the default version of the launch template is used.</p>
 */
@property (nonatomic, strong) NSString * _Nullable version;

@end

/**
 <p>The launch template to use. You must specify either the launch template ID or launch template name in the request. </p>
 */
@interface AWSEC2FleetLaunchTemplateSpecificationRequest : AWSModel


/**
 <p>The ID of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version number of the launch template. </p>
 */
@property (nonatomic, strong) NSString * _Nullable version;

@end

/**
 <p>Describes a flow log.</p>
 */
@interface AWSEC2FlowLog : AWSModel


/**
 <p>The date and time the flow log was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationTime;

/**
 <p>Information about the error that occurred. <code>Rate limited</code> indicates that CloudWatch logs throttling has been applied for one or more network interfaces, or that you've reached the limit on the number of CloudWatch Logs log groups that you can create. <code>Access error</code> indicates that the IAM role associated with the flow log does not have sufficient permissions to publish to CloudWatch Logs. <code>Unknown error</code> indicates an internal error.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliverLogsErrorMessage;

/**
 <p>The ARN of the IAM role that posts logs to CloudWatch Logs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliverLogsPermissionArn;

/**
 <p>The status of the logs delivery (<code>SUCCESS</code> | <code>FAILED</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deliverLogsStatus;

/**
 <p>The flow log ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable flowLogId;

/**
 <p>The status of the flow log (<code>ACTIVE</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable flowLogStatus;

/**
 <p>The name of the flow log group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable logGroupName;

/**
 <p>The ID of the resource on which the flow log was created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceId;

/**
 <p>The type of traffic captured for the flow log.</p>
 */
@property (nonatomic, assign) AWSEC2TrafficType trafficType;

@end

/**
 <p>Describes an Amazon FPGA image (AFI).</p>
 */
@interface AWSEC2FpgaImage : AWSModel


/**
 <p>The date and time the AFI was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>The description of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The global FPGA image identifier (AGFI ID).</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageGlobalId;

/**
 <p>The FPGA image identifier (AFI ID).</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

/**
 <p>The name of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The alias of the AFI owner. Possible values include <code>self</code>, <code>amazon</code>, and <code>aws-marketplace</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerAlias;

/**
 <p>The AWS account ID of the AFI owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>Information about the PCI bus.</p>
 */
@property (nonatomic, strong) AWSEC2PciId * _Nullable pciId;

/**
 <p>The product codes for the AFI.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>Indicates whether the AFI is public.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable public;

/**
 <p>The version of the AWS Shell that was used to create the bitstream.</p>
 */
@property (nonatomic, strong) NSString * _Nullable shellVersion;

/**
 <p>Information about the state of the AFI.</p>
 */
@property (nonatomic, strong) AWSEC2FpgaImageState * _Nullable state;

/**
 <p>Any tags assigned to the AFI.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The time of the most recent update to the AFI.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable updateTime;

@end

/**
 <p>Describes an Amazon FPGA image (AFI) attribute.</p>
 */
@interface AWSEC2FpgaImageAttribute : AWSModel


/**
 <p>The description of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

/**
 <p>One or more load permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LoadPermission *> * _Nullable loadPermissions;

/**
 <p>The name of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>One or more product codes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

@end

/**
 <p>Describes the state of the bitstream generation process for an Amazon FPGA image (AFI).</p>
 */
@interface AWSEC2FpgaImageState : AWSModel


/**
 <p>The state. The following are the possible values:</p><ul><li><p><code>pending</code> - AFI bitstream generation is in progress.</p></li><li><p><code>available</code> - The AFI is available for use.</p></li><li><p><code>failed</code> - AFI bitstream generation failed.</p></li><li><p><code>unavailable</code> - The AFI is no longer available for use.</p></li></ul>
 */
@property (nonatomic, assign) AWSEC2FpgaImageStateCode code;

/**
 <p>If the state is <code>failed</code>, this is the error message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Contains the parameters for GetConsoleOutput.</p>
 Required parameters: [InstanceId]
 */
@interface AWSEC2GetConsoleOutputRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>When enabled, retrieves the latest console output for the instance.</p><p>Default: disabled (<code>false</code>)</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable latest;

@end

/**
 <p>Contains the output of GetConsoleOutput.</p>
 */
@interface AWSEC2GetConsoleOutputResult : AWSModel


/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The console output, base64-encoded. If you are using a command line tool, the tool decodes the output for you.</p>
 */
@property (nonatomic, strong) NSString * _Nullable output;

/**
 <p>The time at which the output was last updated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Contains the parameters for the request.</p>
 Required parameters: [InstanceId]
 */
@interface AWSEC2GetConsoleScreenshotRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>When set to <code>true</code>, acts as keystroke input and wakes up an instance that's in standby or "sleep" mode.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable wakeUp;

@end

/**
 <p>Contains the output of the request.</p>
 */
@interface AWSEC2GetConsoleScreenshotResult : AWSModel


/**
 <p>The data that comprises the image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageData;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 
 */
@interface AWSEC2GetHostReservationPurchasePreviewRequest : AWSRequest


/**
 <p>The ID/s of the Dedicated Host/s that the reservation will be associated with.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIdSet;

/**
 <p>The offering ID of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

@end

/**
 
 */
@interface AWSEC2GetHostReservationPurchasePreviewResult : AWSModel


/**
 <p>The currency in which the <code>totalUpfrontPrice</code> and <code>totalHourlyPrice</code> amounts are specified. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The purchase information of the Dedicated Host Reservation and the Dedicated Hosts associated with it.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Purchase *> * _Nullable purchase;

/**
 <p>The potential total hourly price of the reservation per hour.</p>
 */
@property (nonatomic, strong) NSString * _Nullable totalHourlyPrice;

/**
 <p>The potential total upfront price. This is billed immediately.</p>
 */
@property (nonatomic, strong) NSString * _Nullable totalUpfrontPrice;

@end

/**
 
 */
@interface AWSEC2GetLaunchTemplateDataRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 
 */
@interface AWSEC2GetLaunchTemplateDataResult : AWSModel


/**
 <p>The instance data.</p>
 */
@property (nonatomic, strong) AWSEC2ResponseLaunchTemplateData * _Nullable launchTemplateData;

@end

/**
 <p>Contains the parameters for GetPasswordData.</p>
 Required parameters: [InstanceId]
 */
@interface AWSEC2GetPasswordDataRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the Windows instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Contains the output of GetPasswordData.</p>
 */
@interface AWSEC2GetPasswordDataResult : AWSModel


/**
 <p>The ID of the Windows instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The password of the instance. Returns an empty string if the password is not available.</p>
 */
@property (nonatomic, strong) NSString * _Nullable passwordData;

/**
 <p>The time the data was last updated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Contains the parameters for GetReservedInstanceExchangeQuote.</p>
 Required parameters: [ReservedInstanceIds]
 */
@interface AWSEC2GetReservedInstancesExchangeQuoteRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The IDs of the Convertible Reserved Instances to exchange.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reservedInstanceIds;

/**
 <p>The configuration of the target Convertible Reserved Instance to exchange for your current Convertible Reserved Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TargetConfigurationRequest *> * _Nullable targetConfigurations;

@end

/**
 <p>Contains the output of GetReservedInstancesExchangeQuote.</p>
 */
@interface AWSEC2GetReservedInstancesExchangeQuoteResult : AWSModel


/**
 <p>The currency of the transaction.</p>
 */
@property (nonatomic, strong) NSString * _Nullable currencyCode;

/**
 <p>If <code>true</code>, the exchange is valid. If <code>false</code>, the exchange cannot be completed.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable isValidExchange;

/**
 <p>The new end date of the reservation term.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable outputReservedInstancesWillExpireAt;

/**
 <p>The total true upfront charge for the exchange.</p>
 */
@property (nonatomic, strong) NSString * _Nullable paymentDue;

/**
 <p>The cost associated with the Reserved Instance.</p>
 */
@property (nonatomic, strong) AWSEC2ReservationValue * _Nullable reservedInstanceValueRollup;

/**
 <p>The configuration of your Convertible Reserved Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstanceReservationValue *> * _Nullable reservedInstanceValueSet;

/**
 <p>The cost associated with the Reserved Instance.</p>
 */
@property (nonatomic, strong) AWSEC2ReservationValue * _Nullable targetConfigurationValueRollup;

/**
 <p>The values of the target Convertible Reserved Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TargetReservationValue *> * _Nullable targetConfigurationValueSet;

/**
 <p>Describes the reason why the exchange cannot be completed.</p>
 */
@property (nonatomic, strong) NSString * _Nullable validationFailureReason;

@end

/**
 <p>Describes a security group.</p>
 */
@interface AWSEC2GroupIdentifier : AWSModel


/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>The name of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

@end

/**
 <p>Describes an event in the history of the Spot Fleet request.</p>
 Required parameters: [EventInformation, EventType, Timestamp]
 */
@interface AWSEC2HistoryRecord : AWSModel


/**
 <p>Information about the event.</p>
 */
@property (nonatomic, strong) AWSEC2EventInformation * _Nullable eventInformation;

/**
 <p>The event type.</p><ul><li><p><code>error</code> - An error with the Spot Fleet request.</p></li><li><p><code>fleetRequestChange</code> - A change in the status or configuration of the Spot Fleet request.</p></li><li><p><code>instanceChange</code> - An instance was launched or terminated.</p></li><li><p><code>Information</code> - An informational event.</p></li></ul>
 */
@property (nonatomic, assign) AWSEC2EventType eventType;

/**
 <p>The date and time of the event, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Describes an event in the history of the EC2 Fleet.</p>
 */
@interface AWSEC2HistoryRecordEntry : AWSModel


/**
 <p>Information about the event.</p>
 */
@property (nonatomic, strong) AWSEC2EventInformation * _Nullable eventInformation;

/**
 <p>The event type.</p>
 */
@property (nonatomic, assign) AWSEC2FleetEventType eventType;

/**
 <p>The date and time of the event, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Describes the properties of the Dedicated Host.</p>
 */
@interface AWSEC2Host : AWSModel


/**
 <p>The time that the Dedicated Host was allocated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable allocationTime;

/**
 <p>Whether auto-placement is on or off.</p>
 */
@property (nonatomic, assign) AWSEC2AutoPlacement autoPlacement;

/**
 <p>The Availability Zone of the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The number of new instances that can be launched onto the Dedicated Host.</p>
 */
@property (nonatomic, strong) AWSEC2AvailableCapacity * _Nullable availableCapacity;

/**
 <p>Unique, case-sensitive identifier you provide to ensure idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>. </p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The ID of the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostId;

/**
 <p>The hardware specifications of the Dedicated Host.</p>
 */
@property (nonatomic, strong) AWSEC2HostProperties * _Nullable hostProperties;

/**
 <p>The reservation ID of the Dedicated Host. This returns a <code>null</code> response if the Dedicated Host doesn't have an associated reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostReservationId;

/**
 <p>The IDs and instance type that are currently running on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2HostInstance *> * _Nullable instances;

/**
 <p>The time that the Dedicated Host was released.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable releaseTime;

/**
 <p>The Dedicated Host's state.</p>
 */
@property (nonatomic, assign) AWSEC2AllocationState state;

@end

/**
 <p>Describes an instance running on a Dedicated Host.</p>
 */
@interface AWSEC2HostInstance : AWSModel


/**
 <p>the IDs of instances that are running on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The instance type size (for example, <code>m3.medium</code>) of the running instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

@end

/**
 <p>Details about the Dedicated Host Reservation offering.</p>
 */
@interface AWSEC2HostOffering : AWSModel


/**
 <p>The currency of the offering.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The duration of the offering (in seconds).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable duration;

/**
 <p>The hourly price of the offering.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hourlyPrice;

/**
 <p>The instance family of the offering.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceFamily;

/**
 <p>The ID of the offering.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

/**
 <p>The available payment option.</p>
 */
@property (nonatomic, assign) AWSEC2PaymentOption paymentOption;

/**
 <p>The upfront price of the offering. Does not apply to No Upfront offerings.</p>
 */
@property (nonatomic, strong) NSString * _Nullable upfrontPrice;

@end

/**
 <p>Describes properties of a Dedicated Host.</p>
 */
@interface AWSEC2HostProperties : AWSModel


/**
 <p>The number of cores on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable cores;

/**
 <p>The instance type size that the Dedicated Host supports (for example, <code>m3.medium</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The number of sockets on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sockets;

/**
 <p>The number of vCPUs on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable totalVCpus;

@end

/**
 <p>Details about the Dedicated Host Reservation and associated Dedicated Hosts.</p>
 */
@interface AWSEC2HostReservation : AWSModel


/**
 <p>The number of Dedicated Hosts the reservation is associated with.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable count;

/**
 <p>The currency in which the <code>upfrontPrice</code> and <code>hourlyPrice</code> amounts are specified. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The length of the reservation's term, specified in seconds. Can be <code>31536000 (1 year)</code> | <code>94608000 (3 years)</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable duration;

/**
 <p>The date and time that the reservation ends.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable end;

/**
 <p>The IDs of the Dedicated Hosts associated with the reservation.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIdSet;

/**
 <p>The ID of the reservation that specifies the associated Dedicated Hosts.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostReservationId;

/**
 <p>The hourly price of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hourlyPrice;

/**
 <p>The instance family of the Dedicated Host Reservation. The instance family on the Dedicated Host must be the same in order for it to benefit from the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceFamily;

/**
 <p>The ID of the reservation. This remains the same regardless of which Dedicated Hosts are associated with it.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

/**
 <p>The payment option selected for this reservation.</p>
 */
@property (nonatomic, assign) AWSEC2PaymentOption paymentOption;

/**
 <p>The date and time that the reservation started.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable start;

/**
 <p>The state of the reservation.</p>
 */
@property (nonatomic, assign) AWSEC2ReservationState state;

/**
 <p>The upfront price of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable upfrontPrice;

@end

/**
 <p>Describes an IAM instance profile.</p>
 */
@interface AWSEC2IamInstanceProfile : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The ID of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable identifier;

@end

/**
 <p>Describes an association between an IAM instance profile and an instance.</p>
 */
@interface AWSEC2IamInstanceProfileAssociation : AWSModel


/**
 <p>The ID of the association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfile * _Nullable iamInstanceProfile;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The state of the association.</p>
 */
@property (nonatomic, assign) AWSEC2IamInstanceProfileAssociationState state;

/**
 <p>The time the IAM instance profile was associated with the instance.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Describes an IAM instance profile.</p>
 */
@interface AWSEC2IamInstanceProfileSpecification : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The name of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>Describes the ICMP type and code.</p>
 */
@interface AWSEC2IcmpTypeCode : AWSModel


/**
 <p>The ICMP code. A value of -1 means all codes for the specified ICMP type.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable code;

/**
 <p>The ICMP type. A value of -1 means all types.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable types;

@end

/**
 <p>Describes the ID format for a resource.</p>
 */
@interface AWSEC2IdFormat : AWSModel


/**
 <p>The date in UTC at which you are permanently switched over to using longer IDs. If a deadline is not yet available for this resource type, this field is not returned.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deadline;

/**
 <p>The type of resource.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resource;

/**
 <p>Indicates whether longer IDs (17-character IDs) are enabled for the resource.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable useLongIds;

@end

/**
 <p>Describes an image.</p>
 */
@interface AWSEC2Image : AWSModel


/**
 <p>The architecture of the image.</p>
 */
@property (nonatomic, assign) AWSEC2ArchitectureValues architecture;

/**
 <p>Any block device mapping entries.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>The date and time the image was created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable creationDate;

/**
 <p>The description of the AMI that was provided during image creation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Specifies whether enhanced networking with ENA is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enaSupport;

/**
 <p>The hypervisor type of the image.</p>
 */
@property (nonatomic, assign) AWSEC2HypervisorType hypervisor;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The location of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageLocation;

/**
 <p>The AWS account alias (for example, <code>amazon</code>, <code>self</code>) or the AWS account ID of the AMI owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageOwnerAlias;

/**
 <p>The type of image.</p>
 */
@property (nonatomic, assign) AWSEC2ImageTypeValues imageType;

/**
 <p>The kernel associated with the image, if any. Only applicable for machine images.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the AMI that was provided during image creation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The AWS account ID of the image owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The value is <code>Windows</code> for Windows AMIs; otherwise blank.</p>
 */
@property (nonatomic, assign) AWSEC2PlatformValues platform;

/**
 <p>Any product codes associated with the AMI.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>Indicates whether the image has public launch permissions. The value is <code>true</code> if this image has public launch permissions or <code>false</code> if it has only implicit and explicit launch permissions.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable public;

/**
 <p>The RAM disk associated with the image, if any. Only applicable for machine images.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>The device name of the root device volume (for example, <code>/dev/sda1</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable rootDeviceName;

/**
 <p>The type of root device used by the AMI. The AMI can use an EBS volume or an instance store volume.</p>
 */
@property (nonatomic, assign) AWSEC2DeviceType rootDeviceType;

/**
 <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function interface is enabled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sriovNetSupport;

/**
 <p>The current state of the AMI. If the state is <code>available</code>, the image is successfully registered and can be used to launch an instance.</p>
 */
@property (nonatomic, assign) AWSEC2ImageState state;

/**
 <p>The reason for the state change.</p>
 */
@property (nonatomic, strong) AWSEC2StateReason * _Nullable stateReason;

/**
 <p>Any tags assigned to the image.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The type of virtualization of the AMI.</p>
 */
@property (nonatomic, assign) AWSEC2VirtualizationType virtualizationType;

@end

/**
 <p>Describes an image attribute.</p>
 */
@interface AWSEC2ImageAttribute : AWSModel


/**
 <p>One or more block device mapping entries.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>A description for the AMI.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable detail;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The kernel ID.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable kernelId;

/**
 <p>One or more launch permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchPermission *> * _Nullable launchPermissions;

/**
 <p>One or more product codes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>The RAM disk ID.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable ramdiskId;

/**
 <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function interface is enabled.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable sriovNetSupport;

@end

/**
 <p>Describes the disk container object for an import image task.</p>
 */
@interface AWSEC2ImageDiskContainer : AWSModel


/**
 <p>The description of the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The block device mapping for the disk.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>The format of the disk image being imported.</p><p>Valid values: <code>VHD</code> | <code>VMDK</code> | <code>OVA</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable format;

/**
 <p>The ID of the EBS snapshot to be used for importing the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The URL to the Amazon S3-based disk image being imported. The URL can either be a https URL (https://..) or an Amazon S3 URL (s3://..)</p>
 */
@property (nonatomic, strong) NSString * _Nullable url;

/**
 <p>The S3 bucket for the disk image.</p>
 */
@property (nonatomic, strong) AWSEC2UserBucket * _Nullable userBucket;

@end

/**
 <p>Contains the parameters for ImportImage.</p>
 */
@interface AWSEC2ImportImageRequest : AWSRequest


/**
 <p>The architecture of the virtual machine.</p><p>Valid values: <code>i386</code> | <code>x86_64</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable architecture;

/**
 <p>The client-specific data.</p>
 */
@property (nonatomic, strong) AWSEC2ClientData * _Nullable clientData;

/**
 <p>The token to enable idempotency for VM import requests.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>A description string for the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Information about the disk containers.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ImageDiskContainer *> * _Nullable diskContainers;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The target hypervisor platform.</p><p>Valid values: <code>xen</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable hypervisor;

/**
 <p>The license type to be used for the Amazon Machine Image (AMI) after importing.</p><p><b>Note:</b> You may only use BYOL if you have existing licenses with rights to use these licenses in a third party cloud like AWS. For more information, see <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmimport-image-import.html#prerequisites-image">Prerequisites</a> in the VM Import/Export User Guide.</p><p>Valid values: <code>AWS</code> | <code>BYOL</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable licenseType;

/**
 <p>The operating system of the virtual machine.</p><p>Valid values: <code>Windows</code> | <code>Linux</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable platform;

/**
 <p>The name of the role to use when not using the default role, 'vmimport'.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleName;

@end

/**
 <p>Contains the output for ImportImage.</p>
 */
@interface AWSEC2ImportImageResult : AWSModel


/**
 <p>The architecture of the virtual machine.</p>
 */
@property (nonatomic, strong) NSString * _Nullable architecture;

/**
 <p>A description of the import task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The target hypervisor of the import task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hypervisor;

/**
 <p>The ID of the Amazon Machine Image (AMI) created by the import task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The task ID of the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importTaskId;

/**
 <p>The license type of the virtual machine.</p>
 */
@property (nonatomic, strong) NSString * _Nullable licenseType;

/**
 <p>The operating system of the virtual machine.</p>
 */
@property (nonatomic, strong) NSString * _Nullable platform;

/**
 <p>The progress of the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable progress;

/**
 <p>Information about the snapshots.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SnapshotDetail *> * _Nullable snapshotDetails;

/**
 <p>A brief status of the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>A detailed status message of the import task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes an import image task.</p>
 */
@interface AWSEC2ImportImageTask : AWSModel


/**
 <p>The architecture of the virtual machine.</p><p>Valid values: <code>i386</code> | <code>x86_64</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable architecture;

/**
 <p>A description of the import task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The target hypervisor for the import task.</p><p>Valid values: <code>xen</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable hypervisor;

/**
 <p>The ID of the Amazon Machine Image (AMI) of the imported virtual machine.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The ID of the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importTaskId;

/**
 <p>The license type of the virtual machine.</p>
 */
@property (nonatomic, strong) NSString * _Nullable licenseType;

/**
 <p>The description string for the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable platform;

/**
 <p>The percentage of progress of the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable progress;

/**
 <p>Information about the snapshots.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SnapshotDetail *> * _Nullable snapshotDetails;

/**
 <p>A brief status for the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>A descriptive status message for the import image task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes the launch specification for VM import.</p>
 */
@interface AWSEC2ImportInstanceLaunchSpecification : AWSModel


/**
 <p>Reserved.</p>
 */
@property (nonatomic, strong) NSString * _Nullable additionalInfo;

/**
 <p>The architecture of the instance.</p>
 */
@property (nonatomic, assign) AWSEC2ArchitectureValues architecture;

/**
 <p>One or more security group IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupIds;

/**
 <p>One or more security group names.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupNames;

/**
 <p>Indicates whether an instance stops or terminates when you initiate shutdown from the instance (using the operating system command for system shutdown).</p>
 */
@property (nonatomic, assign) AWSEC2ShutdownBehavior instanceInitiatedShutdownBehavior;

/**
 <p>The instance type. For more information about the instance types that you can import, see <a href="http://docs.aws.amazon.com/vm-import/latest/userguide/vmie_prereqs.html#vmimport-instance-types">Instance Types</a> in the VM Import/Export User Guide.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>Indicates whether monitoring is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable monitoring;

/**
 <p>The placement information for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2Placement * _Nullable placement;

/**
 <p>[EC2-VPC] An available IP address from the IP address range of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>[EC2-VPC] The ID of the subnet in which to launch the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The Base64-encoded user data to make available to the instance.</p>
 */
@property (nonatomic, strong) AWSEC2UserData * _Nullable userData;

@end

/**
 <p>Contains the parameters for ImportInstance.</p>
 Required parameters: [Platform]
 */
@interface AWSEC2ImportInstanceRequest : AWSRequest


/**
 <p>A description for the instance being imported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The disk image.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DiskImage *> * _Nullable diskImages;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The launch specification.</p>
 */
@property (nonatomic, strong) AWSEC2ImportInstanceLaunchSpecification * _Nullable launchSpecification;

/**
 <p>The instance operating system.</p>
 */
@property (nonatomic, assign) AWSEC2PlatformValues platform;

@end

/**
 <p>Contains the output for ImportInstance.</p>
 */
@interface AWSEC2ImportInstanceResult : AWSModel


/**
 <p>Information about the conversion task.</p>
 */
@property (nonatomic, strong) AWSEC2ConversionTask * _Nullable conversionTask;

@end

/**
 <p>Describes an import instance task.</p>
 */
@interface AWSEC2ImportInstanceTaskDetails : AWSModel


/**
 <p>A description of the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The instance operating system.</p>
 */
@property (nonatomic, assign) AWSEC2PlatformValues platform;

/**
 <p>One or more volumes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ImportInstanceVolumeDetailItem *> * _Nullable volumes;

@end

/**
 <p>Describes an import volume task.</p>
 Required parameters: [AvailabilityZone, BytesConverted, Image, Status, Volume]
 */
@interface AWSEC2ImportInstanceVolumeDetailItem : AWSModel


/**
 <p>The Availability Zone where the resulting instance will reside.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The number of bytes converted so far.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bytesConverted;

/**
 <p>A description of the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The image.</p>
 */
@property (nonatomic, strong) AWSEC2DiskImageDescription * _Nullable image;

/**
 <p>The status of the import of this particular disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>The status information or errors related to the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>The volume.</p>
 */
@property (nonatomic, strong) AWSEC2DiskImageVolumeDescription * _Nullable volume;

@end

/**
 <p>Contains the parameters for ImportKeyPair.</p>
 Required parameters: [KeyName, PublicKeyMaterial]
 */
@interface AWSEC2ImportKeyPairRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>A unique name for the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The public key. For API calls, the text must be base64-encoded. For command line tools, base64 encoding is performed for you.</p>
 */
@property (nonatomic, strong) NSData * _Nullable publicKeyMaterial;

@end

/**
 <p>Contains the output of ImportKeyPair.</p>
 */
@interface AWSEC2ImportKeyPairResult : AWSModel


/**
 <p>The MD5 public key fingerprint as specified in section 4 of RFC 4716.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyFingerprint;

/**
 <p>The key pair name you provided.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

@end

/**
 <p>Contains the parameters for ImportSnapshot.</p>
 */
@interface AWSEC2ImportSnapshotRequest : AWSRequest


/**
 <p>The client-specific data.</p>
 */
@property (nonatomic, strong) AWSEC2ClientData * _Nullable clientData;

/**
 <p>Token to enable idempotency for VM import requests.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The description string for the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Information about the disk container.</p>
 */
@property (nonatomic, strong) AWSEC2SnapshotDiskContainer * _Nullable diskContainer;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The name of the role to use when not using the default role, 'vmimport'.</p>
 */
@property (nonatomic, strong) NSString * _Nullable roleName;

@end

/**
 <p>Contains the output for ImportSnapshot.</p>
 */
@interface AWSEC2ImportSnapshotResult : AWSModel


/**
 <p>A description of the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importTaskId;

/**
 <p>Information about the import snapshot task.</p>
 */
@property (nonatomic, strong) AWSEC2SnapshotTaskDetail * _Nullable snapshotTaskDetail;

@end

/**
 <p>Describes an import snapshot task.</p>
 */
@interface AWSEC2ImportSnapshotTask : AWSModel


/**
 <p>A description of the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable importTaskId;

/**
 <p>Describes an import snapshot task.</p>
 */
@property (nonatomic, strong) AWSEC2SnapshotTaskDetail * _Nullable snapshotTaskDetail;

@end

/**
 <p>Contains the parameters for ImportVolume.</p>
 Required parameters: [AvailabilityZone, Image, Volume]
 */
@interface AWSEC2ImportVolumeRequest : AWSRequest


/**
 <p>The Availability Zone for the resulting EBS volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>A description of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The disk image.</p>
 */
@property (nonatomic, strong) AWSEC2DiskImageDetail * _Nullable image;

/**
 <p>The volume size.</p>
 */
@property (nonatomic, strong) AWSEC2VolumeDetail * _Nullable volume;

@end

/**
 <p>Contains the output for ImportVolume.</p>
 */
@interface AWSEC2ImportVolumeResult : AWSModel


/**
 <p>Information about the conversion task.</p>
 */
@property (nonatomic, strong) AWSEC2ConversionTask * _Nullable conversionTask;

@end

/**
 <p>Describes an import volume task.</p>
 */
@interface AWSEC2ImportVolumeTaskDetails : AWSModel


/**
 <p>The Availability Zone where the resulting volume will reside.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The number of bytes converted so far.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable bytesConverted;

/**
 <p>The description you provided when starting the import volume task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The image.</p>
 */
@property (nonatomic, strong) AWSEC2DiskImageDescription * _Nullable image;

/**
 <p>The volume.</p>
 */
@property (nonatomic, strong) AWSEC2DiskImageVolumeDescription * _Nullable volume;

@end

/**
 <p>Describes an instance.</p>
 */
@interface AWSEC2Instance : AWSModel


/**
 <p>The AMI launch index, which can be used to find this instance in the launch group.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amiLaunchIndex;

/**
 <p>The architecture of the image.</p>
 */
@property (nonatomic, assign) AWSEC2ArchitectureValues architecture;

/**
 <p>Any block device mapping entries for the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceBlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>The idempotency token you provided when you launched the instance, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The CPU options for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2CpuOptions * _Nullable cpuOptions;

/**
 <p>Indicates whether the instance is optimized for Amazon EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS Optimized instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The Elastic GPU associated with the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ElasticGpuAssociation *> * _Nullable elasticGpuAssociations;

/**
 <p>Specifies whether enhanced networking with ENA is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enaSupport;

/**
 <p>The hypervisor type of the instance.</p>
 */
@property (nonatomic, assign) AWSEC2HypervisorType hypervisor;

/**
 <p>The IAM instance profile associated with the instance, if applicable.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfile * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI used to launch the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>Indicates whether this is a Spot Instance or a Scheduled Instance.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceLifecycleType instanceLifecycle;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The kernel associated with this instance, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair, if this instance was launched with an associated key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The time the instance was launched.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable launchTime;

/**
 <p>The monitoring for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2Monitoring * _Nullable monitoring;

/**
 <p>[EC2-VPC] One or more network interfaces for the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceNetworkInterface *> * _Nullable networkInterfaces;

/**
 <p>The location where the instance launched, if applicable.</p>
 */
@property (nonatomic, strong) AWSEC2Placement * _Nullable placement;

/**
 <p>The value is <code>Windows</code> for Windows instances; otherwise blank.</p>
 */
@property (nonatomic, assign) AWSEC2PlatformValues platform;

/**
 <p>(IPv4 only) The private DNS hostname name assigned to the instance. This DNS hostname can only be used inside the Amazon EC2 network. This name is not available until the instance enters the <code>running</code> state. </p><p>[EC2-VPC] The Amazon-provided DNS server resolves Amazon-provided private DNS hostnames if you've enabled DNS resolution and DNS hostnames in your VPC. If you are not using the Amazon-provided DNS server in your VPC, your custom domain name servers must resolve the hostname as appropriate.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The private IPv4 address assigned to the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>The product codes attached to this instance, if applicable.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>(IPv4 only) The public DNS name assigned to the instance. This name is not available until the instance enters the <code>running</code> state. For EC2-VPC, this name is only available if you've enabled DNS hostnames for your VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicDnsName;

/**
 <p>The public IPv4 address assigned to the instance, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIpAddress;

/**
 <p>The RAM disk associated with this instance, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>The device name of the root device volume (for example, <code>/dev/sda1</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable rootDeviceName;

/**
 <p>The root device type used by the AMI. The AMI can use an EBS volume or an instance store volume.</p>
 */
@property (nonatomic, assign) AWSEC2DeviceType rootDeviceType;

/**
 <p>One or more security groups for the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable securityGroups;

/**
 <p>Specifies whether to enable an instance launched in a VPC to perform NAT. This controls whether source/destination checking is enabled on the instance. A value of <code>true</code> means that checking is enabled, and <code>false</code> means that checking is disabled. The value must be <code>false</code> for the instance to perform NAT. For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sourceDestCheck;

/**
 <p>If the request is a Spot Instance request, the ID of the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotInstanceRequestId;

/**
 <p>Specifies whether enhanced networking with the Intel 82599 Virtual Function interface is enabled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sriovNetSupport;

/**
 <p>The current state of the instance.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceState * _Nullable state;

/**
 <p>The reason for the most recent state transition.</p>
 */
@property (nonatomic, strong) AWSEC2StateReason * _Nullable stateReason;

/**
 <p>The reason for the most recent state transition. This might be an empty string.</p>
 */
@property (nonatomic, strong) NSString * _Nullable stateTransitionReason;

/**
 <p>[EC2-VPC] The ID of the subnet in which the instance is running.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>Any tags assigned to the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The virtualization type of the instance.</p>
 */
@property (nonatomic, assign) AWSEC2VirtualizationType virtualizationType;

/**
 <p>[EC2-VPC] The ID of the VPC in which the instance is running.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes an instance attribute.</p>
 */
@interface AWSEC2InstanceAttribute : AWSModel


/**
 <p>The block device mapping of the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceBlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>If the value is <code>true</code>, you can't terminate the instance through the Amazon EC2 console, CLI, or API; otherwise, you can.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable disableApiTermination;

/**
 <p>Indicates whether the instance is optimized for Amazon EBS I/O.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable ebsOptimized;

/**
 <p>Indicates whether enhanced networking with ENA is enabled.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable enaSupport;

/**
 <p>The security groups associated with the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable groups;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>Indicates whether an instance stops or terminates when you initiate shutdown from the instance (using the operating system command for system shutdown).</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable instanceInitiatedShutdownBehavior;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable instanceType;

/**
 <p>The kernel ID.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable kernelId;

/**
 <p>A list of product codes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ProductCode *> * _Nullable productCodes;

/**
 <p>The RAM disk ID.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable ramdiskId;

/**
 <p>The device name of the root device volume (for example, <code>/dev/sda1</code>).</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable rootDeviceName;

/**
 <p>Indicates whether source/destination checking is enabled. A value of <code>true</code> means that checking is enabled, and <code>false</code> means that checking is disabled. This value must be <code>false</code> for a NAT instance to perform NAT.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable sourceDestCheck;

/**
 <p>Indicates whether enhanced networking with the Intel 82599 Virtual Function interface is enabled.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable sriovNetSupport;

/**
 <p>The user data.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable userData;

@end

/**
 <p>Describes a block device mapping.</p>
 */
@interface AWSEC2InstanceBlockDeviceMapping : AWSModel


/**
 <p>The device name (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>Parameters used to automatically set up EBS volumes when the instance is launched.</p>
 */
@property (nonatomic, strong) AWSEC2EbsInstanceBlockDevice * _Nullable ebs;

@end

/**
 <p>Describes a block device mapping entry.</p>
 */
@interface AWSEC2InstanceBlockDeviceMappingSpecification : AWSModel


/**
 <p>The device name (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>Parameters used to automatically set up EBS volumes when the instance is launched.</p>
 */
@property (nonatomic, strong) AWSEC2EbsInstanceBlockDeviceSpecification * _Nullable ebs;

/**
 <p>suppress the specified device included in the block device mapping.</p>
 */
@property (nonatomic, strong) NSString * _Nullable noDevice;

/**
 <p>The virtual device name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualName;

@end

/**
 <p>Information about the instance type that the Dedicated Host supports.</p>
 */
@interface AWSEC2InstanceCapacity : AWSModel


/**
 <p>The number of instances that can still be launched onto the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable availableCapacity;

/**
 <p>The instance type size supported by the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The total number of instances that can be launched onto the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable totalCapacity;

@end

/**
 <p>Describes a Reserved Instance listing state.</p>
 */
@interface AWSEC2InstanceCount : AWSModel


/**
 <p>The number of listed Reserved Instances in the state specified by the <code>state</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The states of the listed Reserved Instances.</p>
 */
@property (nonatomic, assign) AWSEC2ListingState state;

@end

/**
 <p>Describes the credit option for CPU usage of a T2 instance. </p>
 */
@interface AWSEC2InstanceCreditSpecification : AWSModel


/**
 <p>The credit option for CPU usage of the instance. Valid values are <code>standard</code> and <code>unlimited</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cpuCredits;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Describes the credit option for CPU usage of a T2 instance.</p>
 */
@interface AWSEC2InstanceCreditSpecificationRequest : AWSModel


/**
 <p>The credit option for CPU usage of the instance. Valid values are <code>standard</code> and <code>unlimited</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cpuCredits;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Describes an instance to export.</p>
 */
@interface AWSEC2InstanceExportDetails : AWSModel


/**
 <p>The ID of the resource being exported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The target virtualization environment.</p>
 */
@property (nonatomic, assign) AWSEC2ExportEnvironment targetEnvironment;

@end

/**
 <p>Describes an IPv6 address.</p>
 */
@interface AWSEC2InstanceIpv6Address : AWSModel


/**
 <p>The IPv6 address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6Address;

@end

/**
 <p>Describes an IPv6 address.</p>
 */
@interface AWSEC2InstanceIpv6AddressRequest : AWSModel


/**
 <p>The IPv6 address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6Address;

@end

/**
 <p>Describes the market (purchasing) option for the instances.</p>
 */
@interface AWSEC2InstanceMarketOptionsRequest : AWSModel


/**
 <p>The market type.</p>
 */
@property (nonatomic, assign) AWSEC2MarketType marketType;

/**
 <p>The options for Spot Instances.</p>
 */
@property (nonatomic, strong) AWSEC2SpotMarketOptions * _Nullable spotOptions;

@end

/**
 <p>Describes the monitoring of an instance.</p>
 */
@interface AWSEC2InstanceMonitoring : AWSModel


/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The monitoring for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2Monitoring * _Nullable monitoring;

@end

/**
 <p>Describes a network interface.</p>
 */
@interface AWSEC2InstanceNetworkInterface : AWSModel


/**
 <p>The association information for an Elastic IPv4 associated with the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceNetworkInterfaceAssociation * _Nullable association;

/**
 <p>The network interface attachment.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceNetworkInterfaceAttachment * _Nullable attachment;

/**
 <p>The description.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>One or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable groups;

/**
 <p>One or more IPv6 addresses associated with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The MAC address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable macAddress;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The ID of the AWS account that created the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The private DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The IPv4 address of the network interface within the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>One or more private IPv4 addresses associated with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstancePrivateIpAddress *> * _Nullable privateIpAddresses;

/**
 <p>Indicates whether to validate network traffic to or from this network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sourceDestCheck;

/**
 <p>The status of the network interface.</p>
 */
@property (nonatomic, assign) AWSEC2NetworkInterfaceStatus status;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes association information for an Elastic IP address (IPv4).</p>
 */
@interface AWSEC2InstanceNetworkInterfaceAssociation : AWSModel


/**
 <p>The ID of the owner of the Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipOwnerId;

/**
 <p>The public DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicDnsName;

/**
 <p>The public IP address or Elastic IP address bound to the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Describes a network interface attachment.</p>
 */
@interface AWSEC2InstanceNetworkInterfaceAttachment : AWSModel


/**
 <p>The time stamp when the attachment initiated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable attachTime;

/**
 <p>The ID of the network interface attachment.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attachmentId;

/**
 <p>Indicates whether the network interface is deleted when the instance is terminated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The index of the device on the instance for the network interface attachment.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>The attachment state.</p>
 */
@property (nonatomic, assign) AWSEC2AttachmentStatus status;

@end

/**
 <p>Describes a network interface.</p>
 */
@interface AWSEC2InstanceNetworkInterfaceSpecification : AWSModel


/**
 <p>Indicates whether to assign a public IPv4 address to an instance you launch in a VPC. The public IP address can only be assigned to a network interface for eth0, and can only be assigned to a new network interface, not an existing one. You cannot specify more than one network interface in the request. If launching into a default subnet, the default value is <code>true</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable associatePublicIpAddress;

/**
 <p>If set to <code>true</code>, the interface is deleted when the instance is terminated. You can specify <code>true</code> only if creating a new network interface when launching an instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The description of the network interface. Applies only if creating a network interface when launching an instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The index of the device on the instance for the network interface attachment. If you are specifying a network interface in a <a>RunInstances</a> request, you must provide the device index.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>The IDs of the security groups for the network interface. Applies only if creating a network interface when launching an instance.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>A number of IPv6 addresses to assign to the network interface. Amazon EC2 chooses the IPv6 addresses from the range of the subnet. You cannot specify this option and the option to assign specific IPv6 addresses in the same request. You can specify this option if you've specified a minimum number of instances to launch.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>One or more IPv6 addresses to assign to the network interface. You cannot specify this option and the option to assign a number of IPv6 addresses in the same request. You cannot specify this option if you've specified a minimum number of instances to launch.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The private IPv4 address of the network interface. Applies only if creating a network interface when launching an instance. You cannot specify this option if you're launching more than one instance in a <a>RunInstances</a> request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>One or more private IPv4 addresses to assign to the network interface. Only one private IPv4 address can be designated as primary. You cannot specify this option if you're launching more than one instance in a <a>RunInstances</a> request.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrivateIpAddressSpecification *> * _Nullable privateIpAddresses;

/**
 <p>The number of secondary private IPv4 addresses. You can't specify this option and specify more than one private IP address using the private IP addresses option. You cannot specify this option if you're launching more than one instance in a <a>RunInstances</a> request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable secondaryPrivateIpAddressCount;

/**
 <p>The ID of the subnet associated with the network string. Applies only if creating a network interface when launching an instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Describes a private IPv4 address.</p>
 */
@interface AWSEC2InstancePrivateIpAddress : AWSModel


/**
 <p>The association information for an Elastic IP address for the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceNetworkInterfaceAssociation * _Nullable association;

/**
 <p>Indicates whether this IPv4 address is the primary private IP address of the network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable primary;

/**
 <p>The private IPv4 DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The private IPv4 address of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

@end

/**
 <p>Describes the current state of an instance.</p>
 */
@interface AWSEC2InstanceState : AWSModel


/**
 <p>The low byte represents the state. The high byte is an opaque internal value and should be ignored.</p><ul><li><p><code>0</code> : <code>pending</code></p></li><li><p><code>16</code> : <code>running</code></p></li><li><p><code>32</code> : <code>shutting-down</code></p></li><li><p><code>48</code> : <code>terminated</code></p></li><li><p><code>64</code> : <code>stopping</code></p></li><li><p><code>80</code> : <code>stopped</code></p></li></ul>
 */
@property (nonatomic, strong) NSNumber * _Nullable code;

/**
 <p>The current state of the instance.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceStateName name;

@end

/**
 <p>Describes an instance state change.</p>
 */
@interface AWSEC2InstanceStateChange : AWSModel


/**
 <p>The current state of the instance.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceState * _Nullable currentState;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The previous state of the instance.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceState * _Nullable previousState;

@end

/**
 <p>Describes the status of an instance.</p>
 */
@interface AWSEC2InstanceStatus : AWSModel


/**
 <p>The Availability Zone of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>Any scheduled events associated with the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceStatusEvent *> * _Nullable events;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The intended state of the instance. <a>DescribeInstanceStatus</a> requires that an instance be in the <code>running</code> state.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceState * _Nullable instanceState;

/**
 <p>Reports impaired functionality that stems from issues internal to the instance, such as impaired reachability.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceStatusSummary * _Nullable instanceStatus;

/**
 <p>Reports impaired functionality that stems from issues related to the systems that support an instance, such as hardware failures and network connectivity problems.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceStatusSummary * _Nullable systemStatus;

@end

/**
 <p>Describes the instance status.</p>
 */
@interface AWSEC2InstanceStatusDetails : AWSModel


/**
 <p>The time when a status check failed. For an instance that was launched and impaired, this is the time when the instance was launched.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable impairedSince;

/**
 <p>The type of instance status.</p>
 */
@property (nonatomic, assign) AWSEC2StatusName name;

/**
 <p>The status.</p>
 */
@property (nonatomic, assign) AWSEC2StatusType status;

@end

/**
 <p>Describes a scheduled event for an instance.</p>
 */
@interface AWSEC2InstanceStatusEvent : AWSModel


/**
 <p>The event code.</p>
 */
@property (nonatomic, assign) AWSEC2EventCode code;

/**
 <p>A description of the event.</p><p>After a scheduled event is completed, it can still be described for up to a week. If the event has been completed, this description starts with the following text: [Completed].</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The latest scheduled end time for the event.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable notAfter;

/**
 <p>The earliest scheduled start time for the event.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable notBefore;

@end

/**
 <p>Describes the status of an instance.</p>
 */
@interface AWSEC2InstanceStatusSummary : AWSModel


/**
 <p>The system instance health or application instance health.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceStatusDetails *> * _Nullable details;

/**
 <p>The status.</p>
 */
@property (nonatomic, assign) AWSEC2SummaryStatus status;

@end

/**
 <p>Describes an Internet gateway.</p>
 */
@interface AWSEC2InternetGateway : AWSModel


/**
 <p>Any VPCs attached to the Internet gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InternetGatewayAttachment *> * _Nullable attachments;

/**
 <p>The ID of the Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable internetGatewayId;

/**
 <p>Any tags assigned to the Internet gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Describes the attachment of a VPC to an Internet gateway or an egress-only Internet gateway.</p>
 */
@interface AWSEC2InternetGatewayAttachment : AWSModel


/**
 <p>The current state of the attachment. For an Internet gateway, the state is <code>available</code> when attached to a VPC; otherwise, this value is not returned.</p>
 */
@property (nonatomic, assign) AWSEC2AttachmentStatus state;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a set of permissions for a security group rule.</p>
 */
@interface AWSEC2IpPermission : AWSModel


/**
 <p>The start of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 type number. A value of <code>-1</code> indicates all ICMP/ICMPv6 types. If you specify all ICMP/ICMPv6 types, you must specify all codes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fromPort;

/**
 <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>) or number (see <a href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol Numbers</a>). </p><p>[EC2-VPC only] Use <code>-1</code> to specify all protocols. When authorizing security group rules, specifying <code>-1</code> or a protocol number other than <code>tcp</code>, <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6) allows traffic on all ports, regardless of any port range you specify. For <code>tcp</code>, <code>udp</code>, and <code>icmp</code>, you must specify a port range. For <code>58</code> (ICMPv6), you can optionally specify a port range; if you don't, traffic for all types and codes is allowed when authorizing rules. </p>
 */
@property (nonatomic, strong) NSString * _Nullable ipProtocol;

/**
 <p>One or more IPv4 ranges.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpRange *> * _Nullable ipRanges;

/**
 <p>[EC2-VPC only] One or more IPv6 ranges.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Ipv6Range *> * _Nullable ipv6Ranges;

/**
 <p>(EC2-VPC only; valid for <a>AuthorizeSecurityGroupEgress</a>, <a>RevokeSecurityGroupEgress</a> and <a>DescribeSecurityGroups</a> only) One or more prefix list IDs for an AWS service. In an <a>AuthorizeSecurityGroupEgress</a> request, this is the AWS service that you want to access through a VPC endpoint from instances associated with the security group.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrefixListId *> * _Nullable prefixListIds;

/**
 <p>The end of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 code. A value of <code>-1</code> indicates all ICMP/ICMPv6 codes for the specified ICMP type. If you specify all ICMP/ICMPv6 types, you must specify all codes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable toPort;

/**
 <p>One or more security group and AWS account ID pairs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UserIdGroupPair *> * _Nullable userIdGroupPairs;

@end

/**
 <p>Describes an IPv4 range.</p>
 */
@interface AWSEC2IpRange : AWSModel


/**
 <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security group, not both. To specify a single IPv4 address, use the /32 prefix length.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrIp;

/**
 <p>A description for the security group rule that references this IPv4 address range.</p><p>Constraints: Up to 255 characters in length. Allowed characters are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

@end

/**
 <p>Describes an IPv6 CIDR block.</p>
 */
@interface AWSEC2Ipv6CidrBlock : AWSModel


/**
 <p>The IPv6 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

@end

/**
 <p>[EC2-VPC only] Describes an IPv6 range.</p>
 */
@interface AWSEC2Ipv6Range : AWSModel


/**
 <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security group, not both. To specify a single IPv6 address, use the /128 prefix length.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrIpv6;

/**
 <p>A description for the security group rule that references this IPv6 address range.</p><p>Constraints: Up to 255 characters in length. Allowed characters are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

@end

/**
 <p>Describes a key pair.</p>
 */
@interface AWSEC2KeyPair : AWSModel


/**
 <p>The SHA-1 digest of the DER encoded private key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyFingerprint;

/**
 <p>An unencrypted PEM encoded RSA private key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyMaterial;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

@end

/**
 <p>Describes a key pair.</p>
 */
@interface AWSEC2KeyPairInfo : AWSModel


/**
 <p>If you used <a>CreateKeyPair</a> to create the key pair, this is the SHA-1 digest of the DER encoded private key. If you used <a>ImportKeyPair</a> to provide AWS the public key, this is the MD5 public key fingerprint as specified in section 4 of RFC4716.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyFingerprint;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

@end

/**
 <p>Describes a launch permission.</p>
 */
@interface AWSEC2LaunchPermission : AWSModel


/**
 <p>The name of the group.</p>
 */
@property (nonatomic, assign) AWSEC2PermissionGroup group;

/**
 <p>The AWS account ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userId;

@end

/**
 <p>Describes a launch permission modification.</p>
 */
@interface AWSEC2LaunchPermissionModifications : AWSModel


/**
 <p>The AWS account ID to add to the list of launch permissions for the AMI.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchPermission *> * _Nullable add;

/**
 <p>The AWS account ID to remove from the list of launch permissions for the AMI.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchPermission *> * _Nullable remove;

@end

/**
 <p>Describes the launch specification for an instance.</p>
 */
@interface AWSEC2LaunchSpecification : AWSModel


/**
 <p>Deprecated.</p>
 */
@property (nonatomic, strong) NSString * _Nullable addressingType;

/**
 <p>One or more block device mapping entries.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>Indicates whether the instance is optimized for EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS Optimized instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileSpecification * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The ID of the kernel.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>Describes the monitoring of an instance.</p>
 */
@property (nonatomic, strong) AWSEC2RunInstancesMonitoringEnabled * _Nullable monitoring;

/**
 <p>One or more network interfaces. If you specify a network interface, you must specify subnet IDs and security group IDs using the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceNetworkInterfaceSpecification *> * _Nullable networkInterfaces;

/**
 <p>The placement information for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2SpotPlacement * _Nullable placement;

/**
 <p>The ID of the RAM disk.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>One or more security groups. When requesting instances in a VPC, you must specify the IDs of the security groups. When requesting instances in EC2-Classic, you can specify the names or the IDs of the security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable securityGroups;

/**
 <p>The ID of the subnet in which to launch the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The Base64-encoded user data for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 <p>Describes a launch template.</p>
 */
@interface AWSEC2LaunchTemplate : AWSModel


/**
 <p>The time launch template was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>The principal that created the launch template. </p>
 */
@property (nonatomic, strong) NSString * _Nullable createdBy;

/**
 <p>The version number of the default version of the launch template.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable defaultVersionNumber;

/**
 <p>The version number of the latest version of the launch template.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable latestVersionNumber;

/**
 <p>The ID of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The tags for the launch template.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Describes a block device mapping.</p>
 */
@interface AWSEC2LaunchTemplateBlockDeviceMapping : AWSModel


/**
 <p>The device name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>Information about the block device for an EBS volume.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateEbsBlockDevice * _Nullable ebs;

/**
 <p>Suppresses the specified device included in the block device mapping of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable noDevice;

/**
 <p>The virtual device name (ephemeralN).</p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualName;

@end

/**
 <p>Describes a block device mapping.</p>
 */
@interface AWSEC2LaunchTemplateBlockDeviceMappingRequest : AWSModel


/**
 <p>The device name (for example, /dev/sdh or xvdh).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>Parameters used to automatically set up EBS volumes when the instance is launched.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateEbsBlockDeviceRequest * _Nullable ebs;

/**
 <p>Suppresses the specified device included in the block device mapping of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable noDevice;

/**
 <p>The virtual device name (ephemeralN). Instance store volumes are numbered starting from 0. An instance type with 2 available instance store volumes can specify mappings for ephemeral0 and ephemeral1. The number of available instance store volumes depends on the instance type. After you connect to the instance, you must mount the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualName;

@end

/**
 <p>Describes a launch template and overrides.</p>
 */
@interface AWSEC2LaunchTemplateConfig : AWSModel


/**
 <p>The launch template.</p>
 */
@property (nonatomic, strong) AWSEC2FleetLaunchTemplateSpecification * _Nullable launchTemplateSpecification;

/**
 <p>Any parameters that you specify override the same parameters in the launch template.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateOverrides *> * _Nullable overrides;

@end

/**
 <p>Describes a block device for an EBS volume.</p>
 */
@interface AWSEC2LaunchTemplateEbsBlockDevice : AWSModel


/**
 <p>Indicates whether the EBS volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>Indicates whether the EBS volume is encrypted.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) that the volume supports. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for encryption.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>The ID of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The size of the volume, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable volumeSize;

/**
 <p>The volume type.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeType volumeType;

@end

/**
 <p>The parameters for a block device for an EBS volume.</p>
 */
@interface AWSEC2LaunchTemplateEbsBlockDeviceRequest : AWSModel


/**
 <p>Indicates whether the EBS volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>Indicates whether the EBS volume is encrypted. Encrypted volumes can only be attached to instances that support Amazon EBS encryption. If you are creating a volume from a snapshot, you can't specify an encryption value.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) that the volume supports. For io1, this represents the number of IOPS that are provisioned for the volume. For gp2, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information about General Purpose SSD baseline performance, I/O credits, and bursting, see Amazon EBS Volume Types in the Amazon Elastic Compute Cloud User Guide.</p><p>Condition: This parameter is required for requests to create io1 volumes; it is not used in requests to create gp2, st1, sc1, or standard volumes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>The ARN of the AWS Key Management Service (AWS KMS) CMK used for encryption.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>The ID of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The size of the volume, in GiB.</p><p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable volumeSize;

/**
 <p>The volume type.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeType volumeType;

@end

/**
 <p>Describes an IAM instance profile.</p>
 */
@interface AWSEC2LaunchTemplateIamInstanceProfileSpecification : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The name of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>An IAM instance profile.</p>
 */
@interface AWSEC2LaunchTemplateIamInstanceProfileSpecificationRequest : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The name of the instance profile.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>The market (purchasing) option for the instances.</p>
 */
@interface AWSEC2LaunchTemplateInstanceMarketOptions : AWSModel


/**
 <p>The market type.</p>
 */
@property (nonatomic, assign) AWSEC2MarketType marketType;

/**
 <p>The options for Spot Instances.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateSpotMarketOptions * _Nullable spotOptions;

@end

/**
 <p>The market (purchasing) option for the instances.</p>
 */
@interface AWSEC2LaunchTemplateInstanceMarketOptionsRequest : AWSModel


/**
 <p>The market type.</p>
 */
@property (nonatomic, assign) AWSEC2MarketType marketType;

/**
 <p>The options for Spot Instances.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateSpotMarketOptionsRequest * _Nullable spotOptions;

@end

/**
 <p>Describes a network interface.</p>
 */
@interface AWSEC2LaunchTemplateInstanceNetworkInterfaceSpecification : AWSModel


/**
 <p>Indicates whether to associate a public IPv4 address with eth0 for a new network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable associatePublicIpAddress;

/**
 <p>Indicates whether the network interface is deleted when the instance is terminated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>A description for the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The device index for the network interface attachment.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>The IDs of one or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The number of IPv6 addresses for the network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>The IPv6 addresses for the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The primary private IPv4 address of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>One or more private IPv4 addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrivateIpAddressSpecification *> * _Nullable privateIpAddresses;

/**
 <p>The number of secondary private IPv4 addresses for the network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable secondaryPrivateIpAddressCount;

/**
 <p>The ID of the subnet for the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>The parameters for a network interface.</p>
 */
@interface AWSEC2LaunchTemplateInstanceNetworkInterfaceSpecificationRequest : AWSModel


/**
 <p>Associates a public IPv4 address with eth0 for a new network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable associatePublicIpAddress;

/**
 <p>Indicates whether the network interface is deleted when the instance is terminated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>A description for the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The device index for the network interface attachment.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>The IDs of one or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The number of IPv6 addresses to assign to a network interface. Amazon EC2 automatically selects the IPv6 addresses from the subnet range. You can't use this option if specifying specific IPv6 addresses.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>One or more specific IPv6 addresses from the IPv6 CIDR block range of your subnet. You can't use this option if you're specifying a number of IPv6 addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceIpv6AddressRequest *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The primary private IPv4 address of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>One or more private IPv4 addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PrivateIpAddressSpecification *> * _Nullable privateIpAddresses;

/**
 <p>The number of secondary private IPv4 addresses to assign to a network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable secondaryPrivateIpAddressCount;

/**
 <p>The ID of the subnet for the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Describes overrides for a launch template.</p>
 */
@interface AWSEC2LaunchTemplateOverrides : AWSModel


/**
 <p>The Availability Zone in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The maximum price per unit hour that you are willing to pay for a Spot Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The ID of the subnet in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The number of units provided by the specified instance type.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable weightedCapacity;

@end

/**
 <p>Describes the placement of an instance.</p>
 */
@interface AWSEC2LaunchTemplatePlacement : AWSModel


/**
 <p>The affinity setting for the instance on the Dedicated Host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable affinity;

/**
 <p>The Availability Zone of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The name of the placement group for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The ID of the Dedicated Host for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostId;

/**
 <p>Reserved for future use.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spreadDomain;

/**
 <p>The tenancy of the instance (if the instance is running in a VPC). An instance with a tenancy of <code>dedicated</code> runs on single-tenant hardware. </p>
 */
@property (nonatomic, assign) AWSEC2Tenancy tenancy;

@end

/**
 <p>The placement for the instance.</p>
 */
@interface AWSEC2LaunchTemplatePlacementRequest : AWSModel


/**
 <p>The affinity setting for an instance on a Dedicated Host.</p>
 */
@property (nonatomic, strong) NSString * _Nullable affinity;

/**
 <p>The Availability Zone for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The name of the placement group for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The ID of the Dedicated Host for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostId;

/**
 <p>Reserved for future use.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spreadDomain;

/**
 <p>The tenancy of the instance (if the instance is running in a VPC). An instance with a tenancy of dedicated runs on single-tenant hardware.</p>
 */
@property (nonatomic, assign) AWSEC2Tenancy tenancy;

@end

/**
 <p>The launch template to use. You must specify either the launch template ID or launch template name in the request, but not both.</p>
 */
@interface AWSEC2LaunchTemplateSpecification : AWSModel


/**
 <p>The ID of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The version number of the launch template.</p><p>Default: The default version for the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable version;

@end

/**
 <p>The options for Spot Instances.</p>
 */
@interface AWSEC2LaunchTemplateSpotMarketOptions : AWSModel


/**
 <p>The required duration for the Spot Instances (also known as Spot blocks), in minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or 360).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockDurationMinutes;

/**
 <p>The behavior when a Spot Instance is interrupted.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceInterruptionBehavior instanceInterruptionBehavior;

/**
 <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable maxPrice;

/**
 <p>The Spot Instance request type.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceType spotInstanceType;

/**
 <p>The end date of the request. For a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date and time is reached.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>The options for Spot Instances.</p>
 */
@interface AWSEC2LaunchTemplateSpotMarketOptionsRequest : AWSModel


/**
 <p>The required duration for the Spot Instances (also known as Spot blocks), in minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or 360).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockDurationMinutes;

/**
 <p>The behavior when a Spot Instance is interrupted. The default is <code>terminate</code>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceInterruptionBehavior instanceInterruptionBehavior;

/**
 <p>The maximum hourly price you're willing to pay for the Spot Instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable maxPrice;

/**
 <p>The Spot Instance request type.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceType spotInstanceType;

/**
 <p>The end date of the request. For a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date and time is reached. The default end date is 7 days from the current date.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>The tag specification for the launch template.</p>
 */
@interface AWSEC2LaunchTemplateTagSpecification : AWSModel


/**
 <p>The type of resource.</p>
 */
@property (nonatomic, assign) AWSEC2ResourceType resourceType;

/**
 <p>The tags for the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>The tags specification for the launch template.</p>
 */
@interface AWSEC2LaunchTemplateTagSpecificationRequest : AWSModel


/**
 <p>The type of resource to tag. Currently, the resource types that support tagging on creation are <code>instance</code> and <code>volume</code>.</p>
 */
@property (nonatomic, assign) AWSEC2ResourceType resourceType;

/**
 <p>The tags to apply to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Describes a launch template version.</p>
 */
@interface AWSEC2LaunchTemplateVersion : AWSModel


/**
 <p>The time the version was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>The principal that created the version.</p>
 */
@property (nonatomic, strong) NSString * _Nullable createdBy;

/**
 <p>Indicates whether the version is the default version.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable defaultVersion;

/**
 <p>Information about the launch template.</p>
 */
@property (nonatomic, strong) AWSEC2ResponseLaunchTemplateData * _Nullable launchTemplateData;

/**
 <p>The ID of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

/**
 <p>The description for the version.</p>
 */
@property (nonatomic, strong) NSString * _Nullable versionDescription;

/**
 <p>The version number.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable versionNumber;

@end

/**
 <p>Describes the monitoring for the instance.</p>
 */
@interface AWSEC2LaunchTemplatesMonitoring : AWSModel


/**
 <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

@end

/**
 <p>Describes the monitoring for the instance.</p>
 */
@interface AWSEC2LaunchTemplatesMonitoringRequest : AWSModel


/**
 <p>Specify <code>true</code> to enable detailed monitoring. Otherwise, basic monitoring is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

@end

/**
 <p>Describes the Classic Load Balancers and target groups to attach to a Spot Fleet request.</p>
 */
@interface AWSEC2LoadBalancersConfig : AWSModel


/**
 <p>The Classic Load Balancers.</p>
 */
@property (nonatomic, strong) AWSEC2ClassicLoadBalancersConfig * _Nullable classicLoadBalancersConfig;

/**
 <p>The target groups.</p>
 */
@property (nonatomic, strong) AWSEC2TargetGroupsConfig * _Nullable targetGroupsConfig;

@end

/**
 <p>Describes a load permission.</p>
 */
@interface AWSEC2LoadPermission : AWSModel


/**
 <p>The name of the group.</p>
 */
@property (nonatomic, assign) AWSEC2PermissionGroup group;

/**
 <p>The AWS account ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userId;

@end

/**
 <p>Describes modifications to the load permissions of an Amazon FPGA image (AFI).</p>
 */
@interface AWSEC2LoadPermissionModifications : AWSModel


/**
 <p>The load permissions to add.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LoadPermissionRequest *> * _Nullable add;

/**
 <p>The load permissions to remove.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LoadPermissionRequest *> * _Nullable remove;

@end

/**
 <p>Describes a load permission.</p>
 */
@interface AWSEC2LoadPermissionRequest : AWSModel


/**
 <p>The name of the group.</p>
 */
@property (nonatomic, assign) AWSEC2PermissionGroup group;

/**
 <p>The AWS account ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userId;

@end

/**
 
 */
@interface AWSEC2ModifyFleetRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Indicates whether running instances should be terminated if the total target capacity of the EC2 Fleet is decreased below the current size of the EC2 Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2FleetExcessCapacityTerminationPolicy excessCapacityTerminationPolicy;

/**
 <p>The ID of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fleetId;

/**
 <p>The size of the EC2 Fleet.</p>
 */
@property (nonatomic, strong) AWSEC2TargetCapacitySpecificationRequest * _Nullable targetCapacitySpecification;

@end

/**
 
 */
@interface AWSEC2ModifyFleetResult : AWSModel


/**
 <p>Is <code>true</code> if the request succeeds, and an error otherwise. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 
 */
@interface AWSEC2ModifyFpgaImageAttributeRequest : AWSRequest


/**
 <p>The name of the attribute.</p>
 */
@property (nonatomic, assign) AWSEC2FpgaImageAttributeName attribute;

/**
 <p>A description for the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

/**
 <p>The load permission for the AFI.</p>
 */
@property (nonatomic, strong) AWSEC2LoadPermissionModifications * _Nullable loadPermission;

/**
 <p>A name for the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The operation type.</p>
 */
@property (nonatomic, assign) AWSEC2OperationType operationType;

/**
 <p>One or more product codes. After you add a product code to an AFI, it can't be removed. This parameter is valid only when modifying the <code>productCodes</code> attribute.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable productCodes;

/**
 <p>One or more user groups. This parameter is valid only when modifying the <code>loadPermission</code> attribute.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable userGroups;

/**
 <p>One or more AWS account IDs. This parameter is valid only when modifying the <code>loadPermission</code> attribute.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable userIds;

@end

/**
 
 */
@interface AWSEC2ModifyFpgaImageAttributeResult : AWSModel


/**
 <p>Information about the attribute.</p>
 */
@property (nonatomic, strong) AWSEC2FpgaImageAttribute * _Nullable fpgaImageAttribute;

@end

/**
 <p>Contains the parameters for ModifyHosts.</p>
 Required parameters: [AutoPlacement, HostIds]
 */
@interface AWSEC2ModifyHostsRequest : AWSRequest


/**
 <p>Specify whether to enable or disable auto-placement.</p>
 */
@property (nonatomic, assign) AWSEC2AutoPlacement autoPlacement;

/**
 <p>The host IDs of the Dedicated Hosts you want to modify.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIds;

@end

/**
 <p>Contains the output of ModifyHosts.</p>
 */
@interface AWSEC2ModifyHostsResult : AWSModel


/**
 <p>The IDs of the Dedicated Hosts that were successfully modified.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable successful;

/**
 <p>The IDs of the Dedicated Hosts that could not be modified. Check whether the setting you requested can be used.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 <p>Contains the parameters of ModifyIdFormat.</p>
 Required parameters: [Resource, UseLongIds]
 */
@interface AWSEC2ModifyIdFormatRequest : AWSRequest


/**
 <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> | <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> | <code>import-task</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> | <code>prefix-list</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>.</p><p>Alternatively, use the <code>all-current</code> option to include all resource types that are currently within their opt-in period for longer IDs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resource;

/**
 <p>Indicate whether the resource should use longer IDs (17-character IDs).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable useLongIds;

@end

/**
 <p>Contains the parameters of ModifyIdentityIdFormat.</p>
 Required parameters: [PrincipalArn, Resource, UseLongIds]
 */
@interface AWSEC2ModifyIdentityIdFormatRequest : AWSRequest


/**
 <p>The ARN of the principal, which can be an IAM user, IAM role, or the root user. Specify <code>all</code> to modify the ID format for all IAM users, IAM roles, and the root user of the account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable principalArn;

/**
 <p>The type of resource: <code>bundle</code> | <code>conversion-task</code> | <code>customer-gateway</code> | <code>dhcp-options</code> | <code>elastic-ip-allocation</code> | <code>elastic-ip-association</code> | <code>export-task</code> | <code>flow-log</code> | <code>image</code> | <code>import-task</code> | <code>internet-gateway</code> | <code>network-acl</code> | <code>network-acl-association</code> | <code>network-interface</code> | <code>network-interface-attachment</code> | <code>prefix-list</code> | <code>route-table</code> | <code>route-table-association</code> | <code>security-group</code> | <code>subnet</code> | <code>subnet-cidr-block-association</code> | <code>vpc</code> | <code>vpc-cidr-block-association</code> | <code>vpc-endpoint</code> | <code>vpc-peering-connection</code> | <code>vpn-connection</code> | <code>vpn-gateway</code>.</p><p>Alternatively, use the <code>all-current</code> option to include all resource types that are currently within their opt-in period for longer IDs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resource;

/**
 <p>Indicates whether the resource should use longer IDs (17-character IDs)</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable useLongIds;

@end

/**
 <p>Contains the parameters for ModifyImageAttribute.</p>
 Required parameters: [ImageId]
 */
@interface AWSEC2ModifyImageAttributeRequest : AWSRequest


/**
 <p>The name of the attribute to modify. The valid values are <code>description</code>, <code>launchPermission</code>, and <code>productCodes</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attribute;

/**
 <p>A new description for the AMI.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>A new launch permission for the AMI.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchPermissionModifications * _Nullable launchPermission;

/**
 <p>The operation type. This parameter can be used only when the <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
 */
@property (nonatomic, assign) AWSEC2OperationType operationType;

/**
 <p>One or more DevPay product codes. After you add a product code to an AMI, it can't be removed.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable productCodes;

/**
 <p>One or more user groups. This parameter can be used only when the <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable userGroups;

/**
 <p>One or more AWS account IDs. This parameter can be used only when the <code>Attribute</code> parameter is <code>launchPermission</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable userIds;

/**
 <p>The value of the attribute being modified. This parameter can be used only when the <code>Attribute</code> parameter is <code>description</code> or <code>productCodes</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>Contains the parameters for ModifyInstanceAttribute.</p>
 Required parameters: [InstanceId]
 */
@interface AWSEC2ModifyInstanceAttributeRequest : AWSRequest


/**
 <p>The name of the attribute.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceAttributeName attribute;

/**
 <p>Modifies the <code>DeleteOnTermination</code> attribute for volumes that are currently attached. The volume must be owned by the caller. If no value is specified for <code>DeleteOnTermination</code>, the default is <code>true</code> and the volume is deleted when the instance is terminated.</p><p>To add instance store volumes to an Amazon EBS-backed instance, you must add them when you launch the instance. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/block-device-mapping-concepts.html#Using_OverridingAMIBDM">Updating the Block Device Mapping when Launching an Instance</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceBlockDeviceMappingSpecification *> * _Nullable blockDeviceMappings;

/**
 <p>If the value is <code>true</code>, you can't terminate the instance using the Amazon EC2 console, CLI, or API; otherwise, you can. You cannot use this parameter for Spot Instances.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable disableApiTermination;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Specifies whether the instance is optimized for Amazon EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS Optimized instance.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable ebsOptimized;

/**
 <p>Set to <code>true</code> to enable enhanced networking with ENA for the instance.</p><p>This option is supported only for HVM instances. Specifying this option with a PV instance can make it unreachable.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable enaSupport;

/**
 <p>[EC2-VPC] Changes the security groups of the instance. You must specify at least one security group, even if it's just the default security group for the VPC. You must specify the security group ID, not the security group name.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>Specifies whether an instance stops or terminates when you initiate shutdown from the instance (using the operating system command for system shutdown).</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable instanceInitiatedShutdownBehavior;

/**
 <p>Changes the instance type to the specified value. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Types</a>. If the instance type is not valid, the error returned is <code>InvalidInstanceAttributeValue</code>.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable instanceType;

/**
 <p>Changes the instance's kernel to the specified value. We recommend that you use PV-GRUB instead of kernels and RAM disks. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable kernel;

/**
 <p>Changes the instance's RAM disk to the specified value. We recommend that you use PV-GRUB instead of kernels and RAM disks. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedKernels.html">PV-GRUB</a>.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable ramdisk;

/**
 <p>Specifies whether source/destination checking is enabled. A value of <code>true</code> means that checking is enabled, and <code>false</code> means that checking is disabled. This value must be <code>false</code> for a NAT instance to perform NAT.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable sourceDestCheck;

/**
 <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599 Virtual Function interface for the instance.</p><p>There is no way to disable enhanced networking with the Intel 82599 Virtual Function interface at this time.</p><p>This option is supported only for HVM instances. Specifying this option with a PV instance can make it unreachable.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable sriovNetSupport;

/**
 <p>Changes the instance's user data to the specified value. If you are using an AWS SDK or command line tool, base64-encoding is performed for you, and you can load the text from a file. Otherwise, you must provide base64-encoded text.</p>
 */
@property (nonatomic, strong) AWSEC2BlobAttributeValue * _Nullable userData;

/**
 <p>A new value for the attribute. Use only with the <code>kernel</code>, <code>ramdisk</code>, <code>userData</code>, <code>disableApiTermination</code>, or <code>instanceInitiatedShutdownBehavior</code> attribute.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 
 */
@interface AWSEC2ModifyInstanceCreditSpecificationRequest : AWSRequest


/**
 <p>A unique, case-sensitive token that you provide to ensure idempotency of your modification request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Information about the credit option for CPU usage.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceCreditSpecificationRequest *> * _Nullable instanceCreditSpecifications;

@end

/**
 
 */
@interface AWSEC2ModifyInstanceCreditSpecificationResult : AWSModel


/**
 <p>Information about the instances whose credit option for CPU usage was successfully modified.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SuccessfulInstanceCreditSpecificationItem *> * _Nullable successfulInstanceCreditSpecifications;

/**
 <p>Information about the instances whose credit option for CPU usage was not modified.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulInstanceCreditSpecificationItem *> * _Nullable unsuccessfulInstanceCreditSpecifications;

@end

/**
 <p>Contains the parameters for ModifyInstancePlacement.</p>
 Required parameters: [InstanceId]
 */
@interface AWSEC2ModifyInstancePlacementRequest : AWSRequest


/**
 <p>The affinity setting for the instance.</p>
 */
@property (nonatomic, assign) AWSEC2Affinity affinity;

/**
 <p>The name of the placement group in which to place the instance. For spread placement groups, the instance must have a tenancy of <code>default</code>. For cluster placement groups, the instance must have a tenancy of <code>default</code> or <code>dedicated</code>.</p><p>To remove an instance from a placement group, specify an empty string ("").</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The ID of the Dedicated Host with which to associate the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostId;

/**
 <p>The ID of the instance that you are modifying.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The tenancy for the instance.</p>
 */
@property (nonatomic, assign) AWSEC2HostTenancy tenancy;

@end

/**
 <p>Contains the output of ModifyInstancePlacement.</p>
 */
@interface AWSEC2ModifyInstancePlacementResult : AWSModel


/**
 <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 
 */
@interface AWSEC2ModifyLaunchTemplateRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The version number of the launch template to set as the default version.</p>
 */
@property (nonatomic, strong) NSString * _Nullable defaultVersion;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateId;

/**
 <p>The name of the launch template. You must specify either the launch template ID or launch template name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchTemplateName;

@end

/**
 
 */
@interface AWSEC2ModifyLaunchTemplateResult : AWSModel


/**
 <p>Information about the launch template.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplate * _Nullable launchTemplate;

@end

/**
 <p>Contains the parameters for ModifyNetworkInterfaceAttribute.</p>
 Required parameters: [NetworkInterfaceId]
 */
@interface AWSEC2ModifyNetworkInterfaceAttributeRequest : AWSRequest


/**
 <p>Information about the interface attachment. If modifying the 'delete on termination' attribute, you must specify the ID of the interface attachment.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfaceAttachmentChanges * _Nullable attachment;

/**
 <p>A description for the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeValue * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Changes the security groups for the network interface. The new set of groups you specify replaces the current set. You must specify at least one group, even if it's just the default security group in the VPC. You must specify the ID of the security group, not the name.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>Indicates whether source/destination checking is enabled. A value of <code>true</code> means checking is enabled, and <code>false</code> means checking is disabled. This value must be <code>false</code> for a NAT instance to perform NAT. For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_NAT_Instance.html">NAT Instances</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable sourceDestCheck;

@end

/**
 <p>Contains the parameters for ModifyReservedInstances.</p>
 Required parameters: [ReservedInstancesIds, TargetConfigurations]
 */
@interface AWSEC2ModifyReservedInstancesRequest : AWSRequest


/**
 <p>A unique, case-sensitive token you provide to ensure idempotency of your modification request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The IDs of the Reserved Instances to modify.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reservedInstancesIds;

/**
 <p>The configuration settings for the Reserved Instances to modify.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesConfiguration *> * _Nullable targetConfigurations;

@end

/**
 <p>Contains the output of ModifyReservedInstances.</p>
 */
@interface AWSEC2ModifyReservedInstancesResult : AWSModel


/**
 <p>The ID for the modification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesModificationId;

@end

/**
 <p>Contains the parameters for ModifySnapshotAttribute.</p>
 Required parameters: [SnapshotId]
 */
@interface AWSEC2ModifySnapshotAttributeRequest : AWSRequest


/**
 <p>The snapshot attribute to modify.</p><note><p>Only volume creation permissions may be modified at the customer level.</p></note>
 */
@property (nonatomic, assign) AWSEC2SnapshotAttributeName attribute;

/**
 <p>A JSON representation of the snapshot attribute modification.</p>
 */
@property (nonatomic, strong) AWSEC2CreateVolumePermissionModifications * _Nullable createVolumePermission;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The group to modify for the snapshot.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groupNames;

/**
 <p>The type of operation to perform to the attribute.</p>
 */
@property (nonatomic, assign) AWSEC2OperationType operationType;

/**
 <p>The ID of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The account ID to modify for the snapshot.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable userIds;

@end

/**
 <p>Contains the parameters for ModifySpotFleetRequest.</p>
 Required parameters: [SpotFleetRequestId]
 */
@interface AWSEC2ModifySpotFleetRequestRequest : AWSRequest


/**
 <p>Indicates whether running Spot Instances should be terminated if the target capacity of the Spot Fleet request is decreased below the current size of the Spot Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2ExcessCapacityTerminationPolicy excessCapacityTerminationPolicy;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

/**
 <p>The size of the fleet.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable targetCapacity;

@end

/**
 <p>Contains the output of ModifySpotFleetRequest.</p>
 */
@interface AWSEC2ModifySpotFleetRequestResponse : AWSModel


/**
 <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for ModifySubnetAttribute.</p>
 Required parameters: [SubnetId]
 */
@interface AWSEC2ModifySubnetAttributeRequest : AWSRequest


/**
 <p>Specify <code>true</code> to indicate that network interfaces created in the specified subnet should be assigned an IPv6 address. This includes a network interface that's created when launching an instance into the subnet (the instance therefore receives an IPv6 address). </p><p>If you enable the IPv6 addressing feature for your subnet, your network interface or instance only receives an IPv6 address if it's created using version <code>2016-11-15</code> or later of the Amazon EC2 API.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable assignIpv6AddressOnCreation;

/**
 <p>Specify <code>true</code> to indicate that network interfaces created in the specified subnet should be assigned a public IPv4 address. This includes a network interface that's created when launching an instance into the subnet (the instance therefore receives a public IPv4 address).</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable mapPublicIpOnLaunch;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Contains the parameters for ModifyVolumeAttribute.</p>
 Required parameters: [VolumeId]
 */
@interface AWSEC2ModifyVolumeAttributeRequest : AWSRequest


/**
 <p>Indicates whether the volume should be auto-enabled for I/O operations.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable autoEnableIO;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 
 */
@interface AWSEC2ModifyVolumeRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Target IOPS rate of the volume to be modified.</p><p>Only valid for Provisioned IOPS SSD (<code>io1</code>) volumes. For more information about <code>io1</code> IOPS configuration, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html#EBSVolumeTypes_piops</a>.</p><p>Default: If no IOPS value is specified, the existing value is retained. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>Target size in GiB of the volume to be modified. Target volume size must be greater than or equal to than the existing size of the volume. For information about available EBS volume sizes, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html</a>.</p><p>Default: If no size is specified, the existing size is retained. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable size;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

/**
 <p>Target EBS volume type of the volume to be modified</p><p> The API does not support modifications for volume type <code>standard</code>. You also cannot change the type of a volume to <code>standard</code>. </p><p>Default: If no type is specified, the existing type is retained. </p>
 */
@property (nonatomic, assign) AWSEC2VolumeType volumeType;

@end

/**
 
 */
@interface AWSEC2ModifyVolumeResult : AWSModel


/**
 <p>A <a>VolumeModification</a> object.</p>
 */
@property (nonatomic, strong) AWSEC2VolumeModification * _Nullable volumeModification;

@end

/**
 <p>Contains the parameters for ModifyVpcAttribute.</p>
 Required parameters: [VpcId]
 */
@interface AWSEC2ModifyVpcAttributeRequest : AWSRequest


/**
 <p>Indicates whether the instances launched in the VPC get DNS hostnames. If enabled, instances in the VPC get DNS hostnames; otherwise, they do not.</p><p>You cannot modify the DNS resolution and DNS hostnames attributes in the same request. Use separate requests for each attribute. You can only enable DNS hostnames if you've enabled DNS support.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable enableDnsHostnames;

/**
 <p>Indicates whether the DNS resolution is supported for the VPC. If enabled, queries to the Amazon provided DNS server at the 169.254.169.253 IP address, or the reserved IP address at the base of the VPC network range "plus two" will succeed. If disabled, the Amazon provided DNS service in the VPC that resolves public DNS hostnames to IP addresses is not enabled.</p><p>You cannot modify the DNS resolution and DNS hostnames attributes in the same request. Use separate requests for each attribute.</p>
 */
@property (nonatomic, strong) AWSEC2AttributeBooleanValue * _Nullable enableDnsSupport;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointConnectionNotificationRequest : AWSRequest


/**
 <p>One or more events for the endpoint. Valid values are <code>Accept</code>, <code>Connect</code>, <code>Delete</code>, and <code>Reject</code>.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable connectionEvents;

/**
 <p>The ARN for the SNS topic for the notification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable connectionNotificationArn;

/**
 <p>The ID of the notification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable connectionNotificationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointConnectionNotificationResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returnValue;

@end

/**
 <p>Contains the parameters for ModifyVpcEndpoint.</p>
 Required parameters: [VpcEndpointId]
 */
@interface AWSEC2ModifyVpcEndpointRequest : AWSRequest


/**
 <p>(Gateway endpoint) One or more route tables IDs to associate with the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable addRouteTableIds;

/**
 <p>(Interface endpoint) One or more security group IDs to associate with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable addSecurityGroupIds;

/**
 <p>(Interface endpoint) One or more subnet IDs in which to serve the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable addSubnetIds;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>(Gateway endpoint) A policy document to attach to the endpoint. The policy must be in valid JSON format.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyDocument;

/**
 <p>(Interface endpoint) Indicate whether a private hosted zone is associated with the VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable privateDnsEnabled;

/**
 <p>(Gateway endpoint) One or more route table IDs to disassociate from the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable removeRouteTableIds;

/**
 <p>(Interface endpoint) One or more security group IDs to disassociate from the network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable removeSecurityGroupIds;

/**
 <p>(Interface endpoint) One or more subnets IDs in which to remove the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable removeSubnetIds;

/**
 <p>(Gateway endpoint) Specify <code>true</code> to reset the policy document to the default policy. The default policy allows full access to the service.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable resetPolicy;

/**
 <p>The ID of the endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointId;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointServiceConfigurationRequest : AWSRequest


/**
 <p>Indicate whether requests to create an endpoint to your service must be accepted.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable acceptanceRequired;

/**
 <p>The Amazon Resource Names (ARNs) of Network Load Balancers to add to your service configuration.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable addNetworkLoadBalancerArns;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The Amazon Resource Names (ARNs) of Network Load Balancers to remove from your service configuration.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable removeNetworkLoadBalancerArns;

/**
 <p>The ID of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointServiceConfigurationResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointServicePermissionsRequest : AWSRequest


/**
 <p>One or more Amazon Resource Names (ARNs) of principals for which to allow permission. Specify <code>*</code> to allow all principals.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable addAllowedPrincipals;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more Amazon Resource Names (ARNs) of principals for which to remove permission.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable removeAllowedPrincipals;

/**
 <p>The ID of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

@end

/**
 
 */
@interface AWSEC2ModifyVpcEndpointServicePermissionsResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returnValue;

@end

/**
 
 */
@interface AWSEC2ModifyVpcPeeringConnectionOptionsRequest : AWSRequest


/**
 <p>The VPC peering connection options for the accepter VPC.</p>
 */
@property (nonatomic, strong) AWSEC2PeeringConnectionOptionsRequest * _Nullable accepterPeeringConnectionOptions;

/**
 <p>Checks whether you have the required permissions for the operation, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The VPC peering connection options for the requester VPC.</p>
 */
@property (nonatomic, strong) AWSEC2PeeringConnectionOptionsRequest * _Nullable requesterPeeringConnectionOptions;

/**
 <p>The ID of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 
 */
@interface AWSEC2ModifyVpcPeeringConnectionOptionsResult : AWSModel


/**
 <p>Information about the VPC peering connection options for the accepter VPC.</p>
 */
@property (nonatomic, strong) AWSEC2PeeringConnectionOptions * _Nullable accepterPeeringConnectionOptions;

/**
 <p>Information about the VPC peering connection options for the requester VPC.</p>
 */
@property (nonatomic, strong) AWSEC2PeeringConnectionOptions * _Nullable requesterPeeringConnectionOptions;

@end

/**
 <p>Contains the parameters for ModifyVpcTenancy.</p>
 Required parameters: [VpcId, InstanceTenancy]
 */
@interface AWSEC2ModifyVpcTenancyRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the operation, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The instance tenancy attribute for the VPC. </p>
 */
@property (nonatomic, assign) AWSEC2VpcTenancy instanceTenancy;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the output of ModifyVpcTenancy.</p>
 */
@interface AWSEC2ModifyVpcTenancyResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returnValue;

@end

/**
 <p>Contains the parameters for MonitorInstances.</p>
 Required parameters: [InstanceIds]
 */
@interface AWSEC2MonitorInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Contains the output of MonitorInstances.</p>
 */
@interface AWSEC2MonitorInstancesResult : AWSModel


/**
 <p>The monitoring information.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceMonitoring *> * _Nullable instanceMonitorings;

@end

/**
 <p>Describes the monitoring of an instance.</p>
 */
@interface AWSEC2Monitoring : AWSModel


/**
 <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring is enabled.</p>
 */
@property (nonatomic, assign) AWSEC2MonitoringState state;

@end

/**
 <p>Contains the parameters for MoveAddressToVpc.</p>
 Required parameters: [PublicIp]
 */
@interface AWSEC2MoveAddressToVpcRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Contains the output of MoveAddressToVpc.</p>
 */
@interface AWSEC2MoveAddressToVpcResult : AWSModel


/**
 <p>The allocation ID for the Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>The status of the move of the IP address.</p>
 */
@property (nonatomic, assign) AWSEC2Status status;

@end

/**
 <p>Describes the status of a moving Elastic IP address.</p>
 */
@interface AWSEC2MovingAddressStatus : AWSModel


/**
 <p>The status of the Elastic IP address that's being moved to the EC2-VPC platform, or restored to the EC2-Classic platform.</p>
 */
@property (nonatomic, assign) AWSEC2MoveStatus moveStatus;

/**
 <p>The Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Describes a NAT gateway.</p>
 */
@interface AWSEC2NatGateway : AWSModel


/**
 <p>The date and time the NAT gateway was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>The date and time the NAT gateway was deleted, if applicable.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable deleteTime;

/**
 <p>If the NAT gateway could not be created, specifies the error code for the failure. (<code>InsufficientFreeAddressesInSubnet</code> | <code>Gateway.NotAttached</code> | <code>InvalidAllocationID.NotFound</code> | <code>Resource.AlreadyAssociated</code> | <code>InternalError</code> | <code>InvalidSubnetID.NotFound</code>)</p>
 */
@property (nonatomic, strong) NSString * _Nullable failureCode;

/**
 <p>If the NAT gateway could not be created, specifies the error message for the failure, that corresponds to the error code.</p><ul><li><p>For InsufficientFreeAddressesInSubnet: "Subnet has insufficient free addresses to create this NAT gateway"</p></li><li><p>For Gateway.NotAttached: "Network vpc-xxxxxxxx has no Internet gateway attached"</p></li><li><p>For InvalidAllocationID.NotFound: "Elastic IP address eipalloc-xxxxxxxx could not be associated with this NAT gateway"</p></li><li><p>For Resource.AlreadyAssociated: "Elastic IP address eipalloc-xxxxxxxx is already associated"</p></li><li><p>For InternalError: "Network interface eni-xxxxxxxx, created and used internally by this NAT gateway is in an invalid state. Please try again."</p></li><li><p>For InvalidSubnetID.NotFound: "The specified subnet subnet-xxxxxxxx does not exist or could not be found."</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable failureMessage;

/**
 <p>Information about the IP addresses and network interface associated with the NAT gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NatGatewayAddress *> * _Nullable natGatewayAddresses;

/**
 <p>The ID of the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable natGatewayId;

/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@property (nonatomic, strong) AWSEC2ProvisionedBandwidth * _Nullable provisionedBandwidth;

/**
 <p>The state of the NAT gateway.</p><ul><li><p><code>pending</code>: The NAT gateway is being created and is not ready to process traffic.</p></li><li><p><code>failed</code>: The NAT gateway could not be created. Check the <code>failureCode</code> and <code>failureMessage</code> fields for the reason.</p></li><li><p><code>available</code>: The NAT gateway is able to process traffic. This status remains until you delete the NAT gateway, and does not indicate the health of the NAT gateway.</p></li><li><p><code>deleting</code>: The NAT gateway is in the process of being terminated and may still be processing traffic.</p></li><li><p><code>deleted</code>: The NAT gateway has been terminated and is no longer processing traffic.</p></li></ul>
 */
@property (nonatomic, assign) AWSEC2NatGatewayState state;

/**
 <p>The ID of the subnet in which the NAT gateway is located.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The tags for the NAT gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC in which the NAT gateway is located.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes the IP addresses and network interface associated with a NAT gateway.</p>
 */
@interface AWSEC2NatGatewayAddress : AWSModel


/**
 <p>The allocation ID of the Elastic IP address that's associated with the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>The ID of the network interface associated with the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The private IP address associated with the Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIp;

/**
 <p>The Elastic IP address associated with the NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Describes a network ACL.</p>
 */
@interface AWSEC2NetworkAcl : AWSModel


/**
 <p>Any associations between the network ACL and one or more subnets</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkAclAssociation *> * _Nullable associations;

/**
 <p>One or more entries (rules) in the network ACL.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkAclEntry *> * _Nullable entries;

/**
 <p>Indicates whether this is the default network ACL for the VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable isDefault;

/**
 <p>The ID of the network ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

/**
 <p>Any tags assigned to the network ACL.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC for the network ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes an association between a network ACL and a subnet.</p>
 */
@interface AWSEC2NetworkAclAssociation : AWSModel


/**
 <p>The ID of the association between a network ACL and a subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclAssociationId;

/**
 <p>The ID of the network ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Describes an entry in a network ACL.</p>
 */
@interface AWSEC2NetworkAclEntry : AWSModel


/**
 <p>The IPv4 network range to allow or deny, in CIDR notation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Indicates whether the rule is an egress rule (applied to traffic leaving the subnet).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable egress;

/**
 <p>ICMP protocol: The ICMP type and code.</p>
 */
@property (nonatomic, strong) AWSEC2IcmpTypeCode * _Nullable icmpTypeCode;

/**
 <p>The IPv6 network range to allow or deny, in CIDR notation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>TCP or UDP protocols: The range of ports the rule applies to.</p>
 */
@property (nonatomic, strong) AWSEC2PortRange * _Nullable portRange;

/**
 <p>The protocol. A value of <code>-1</code> means all protocols.</p>
 */
@property (nonatomic, strong) NSString * _Nullable protocols;

/**
 <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
 */
@property (nonatomic, assign) AWSEC2RuleAction ruleAction;

/**
 <p>The rule number for the entry. ACL entries are processed in ascending order by rule number.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ruleNumber;

@end

/**
 <p>Describes a network interface.</p>
 */
@interface AWSEC2NetworkInterface : AWSModel


/**
 <p>The association information for an Elastic IP address (IPv4) associated with the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfaceAssociation * _Nullable association;

/**
 <p>The network interface attachment.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfaceAttachment * _Nullable attachment;

/**
 <p>The Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>A description.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Any security groups for the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable groups;

/**
 <p>The type of interface.</p>
 */
@property (nonatomic, assign) AWSEC2NetworkInterfaceType interfaceType;

/**
 <p>The IPv6 addresses associated with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkInterfaceIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The MAC address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable macAddress;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The AWS account ID of the owner of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The private DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The IPv4 address of the network interface within the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>The private IPv4 addresses associated with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2NetworkInterfacePrivateIpAddress *> * _Nullable privateIpAddresses;

/**
 <p>The ID of the entity that launched the instance on your behalf (for example, AWS Management Console or Auto Scaling).</p>
 */
@property (nonatomic, strong) NSString * _Nullable requesterId;

/**
 <p>Indicates whether the network interface is being managed by AWS.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable requesterManaged;

/**
 <p>Indicates whether traffic to or from the instance is validated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable sourceDestCheck;

/**
 <p>The status of the network interface.</p>
 */
@property (nonatomic, assign) AWSEC2NetworkInterfaceStatus status;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>Any tags assigned to the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tagSet;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes association information for an Elastic IP address (IPv4 only).</p>
 */
@interface AWSEC2NetworkInterfaceAssociation : AWSModel


/**
 <p>The allocation ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>The association ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>The ID of the Elastic IP address owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipOwnerId;

/**
 <p>The public DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicDnsName;

/**
 <p>The address of the Elastic IP address bound to the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Describes a network interface attachment.</p>
 */
@interface AWSEC2NetworkInterfaceAttachment : AWSModel


/**
 <p>The timestamp indicating when the attachment initiated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable attachTime;

/**
 <p>The ID of the network interface attachment.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attachmentId;

/**
 <p>Indicates whether the network interface is deleted when the instance is terminated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The device index of the network interface attachment on the instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The AWS account ID of the owner of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceOwnerId;

/**
 <p>The attachment state.</p>
 */
@property (nonatomic, assign) AWSEC2AttachmentStatus status;

@end

/**
 <p>Describes an attachment change.</p>
 */
@interface AWSEC2NetworkInterfaceAttachmentChanges : AWSModel


/**
 <p>The ID of the network interface attachment.</p>
 */
@property (nonatomic, strong) NSString * _Nullable attachmentId;

/**
 <p>Indicates whether the network interface is deleted when the instance is terminated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

@end

/**
 <p>Describes an IPv6 address associated with a network interface.</p>
 */
@interface AWSEC2NetworkInterfaceIpv6Address : AWSModel


/**
 <p>The IPv6 address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6Address;

@end

/**
 <p>Describes a permission for a network interface.</p>
 */
@interface AWSEC2NetworkInterfacePermission : AWSModel


/**
 <p>The AWS account ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable awsAccountId;

/**
 <p>The AWS service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable awsService;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The ID of the network interface permission.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfacePermissionId;

/**
 <p>The type of permission.</p>
 */
@property (nonatomic, assign) AWSEC2InterfacePermissionType permission;

/**
 <p>Information about the state of the permission.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfacePermissionState * _Nullable permissionState;

@end

/**
 <p>Describes the state of a network interface permission.</p>
 */
@interface AWSEC2NetworkInterfacePermissionState : AWSModel


/**
 <p>The state of the permission.</p>
 */
@property (nonatomic, assign) AWSEC2NetworkInterfacePermissionStateCode state;

/**
 <p>A status message, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes the private IPv4 address of a network interface.</p>
 */
@interface AWSEC2NetworkInterfacePrivateIpAddress : AWSModel


/**
 <p>The association information for an Elastic IP address (IPv4) associated with the network interface.</p>
 */
@property (nonatomic, strong) AWSEC2NetworkInterfaceAssociation * _Nullable association;

/**
 <p>Indicates whether this IPv4 address is the primary private IPv4 address of the network interface.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable primary;

/**
 <p>The private DNS name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The private IPv4 address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

@end

/**
 
 */
@interface AWSEC2LatestDhcpConfiguration : AWSModel


/**
 
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable values;

@end

/**
 <p>Describes the data that identifies an Amazon FPGA image (AFI) on the PCI bus.</p>
 */
@interface AWSEC2PciId : AWSModel


/**
 <p>The ID of the device.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceId;

/**
 <p>The ID of the subsystem.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subsystemId;

/**
 <p>The ID of the vendor for the subsystem.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subsystemVendorId;

/**
 <p>The ID of the vendor.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vendorId;

@end

/**
 <p>Describes the VPC peering connection options.</p>
 */
@interface AWSEC2PeeringConnectionOptions : AWSModel


/**
 <p>If true, the public DNS hostnames of instances in the specified VPC resolve to private IP addresses when queried from instances in the peer VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowDnsResolutionFromRemoteVpc;

/**
 <p>If true, enables outbound communication from an EC2-Classic instance that's linked to a local VPC via ClassicLink to instances in a peer VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowEgressFromLocalClassicLinkToRemoteVpc;

/**
 <p>If true, enables outbound communication from instances in a local VPC to an EC2-Classic instance that's linked to a peer VPC via ClassicLink.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowEgressFromLocalVpcToRemoteClassicLink;

@end

/**
 <p>The VPC peering connection options.</p>
 */
@interface AWSEC2PeeringConnectionOptionsRequest : AWSModel


/**
 <p>If true, enables a local VPC to resolve public DNS hostnames to private IP addresses when queried from instances in the peer VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowDnsResolutionFromRemoteVpc;

/**
 <p>If true, enables outbound communication from an EC2-Classic instance that's linked to a local VPC via ClassicLink to instances in a peer VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowEgressFromLocalClassicLinkToRemoteVpc;

/**
 <p>If true, enables outbound communication from instances in a local VPC to an EC2-Classic instance that's linked to a peer VPC via ClassicLink.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowEgressFromLocalVpcToRemoteClassicLink;

@end

/**
 <p>Describes the placement of an instance.</p>
 */
@interface AWSEC2Placement : AWSModel


/**
 <p>The affinity setting for the instance on the Dedicated Host. This parameter is not supported for the <a>ImportInstance</a> command.</p>
 */
@property (nonatomic, strong) NSString * _Nullable affinity;

/**
 <p>The Availability Zone of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The name of the placement group the instance is in (for cluster compute instances).</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The ID of the Dedicated Host on which the instance resides. This parameter is not supported for the <a>ImportInstance</a> command.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostId;

/**
 <p>Reserved for future use.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spreadDomain;

/**
 <p>The tenancy of the instance (if the instance is running in a VPC). An instance with a tenancy of <code>dedicated</code> runs on single-tenant hardware. The <code>host</code> tenancy is not supported for the <a>ImportInstance</a> command.</p>
 */
@property (nonatomic, assign) AWSEC2Tenancy tenancy;

@end

/**
 <p>Describes a placement group.</p>
 */
@interface AWSEC2PlacementGroup : AWSModel


/**
 <p>The name of the placement group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The state of the placement group.</p>
 */
@property (nonatomic, assign) AWSEC2PlacementGroupState state;

/**
 <p>The placement strategy.</p>
 */
@property (nonatomic, assign) AWSEC2PlacementStrategy strategy;

@end

/**
 <p>Describes a range of ports.</p>
 */
@interface AWSEC2PortRange : AWSModel


/**
 <p>The first port in the range.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable from;

/**
 <p>The last port in the range.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable to;

@end

/**
 <p>Describes prefixes for AWS services.</p>
 */
@interface AWSEC2PrefixList : AWSModel


/**
 <p>The IP address range of the AWS service.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable cidrs;

/**
 <p>The ID of the prefix.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefixListId;

/**
 <p>The name of the prefix.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefixListName;

@end

/**
 <p>[EC2-VPC only] The ID of the prefix.</p>
 */
@interface AWSEC2PrefixListId : AWSModel


/**
 <p>A description for the security group rule that references this prefix list ID.</p><p>Constraints: Up to 255 characters in length. Allowed characters are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the prefix.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefixListId;

@end

/**
 <p>Describes the price for a Reserved Instance.</p>
 */
@interface AWSEC2PriceSchedule : AWSModel


/**
 <p>The current price schedule, as determined by the term remaining for the Reserved Instance in the listing.</p><p>A specific price schedule is always in effect, but only one price schedule can be active at any time. Take, for example, a Reserved Instance listing that has five months remaining in its term. When you specify price schedules for five months and two months, this means that schedule 1, covering the first three months of the remaining term, will be active during months 5, 4, and 3. Then schedule 2, covering the last two months of the term, will be active for months 2 and 1.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable active;

/**
 <p>The currency for transacting the Reserved Instance resale. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The fixed price for the term.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable price;

/**
 <p>The number of months remaining in the reservation. For example, 2 is the second to the last month before the capacity reservation expires.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable term;

@end

/**
 <p>Describes the price for a Reserved Instance.</p>
 */
@interface AWSEC2PriceScheduleSpecification : AWSModel


/**
 <p>The currency for transacting the Reserved Instance resale. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The fixed price for the term.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable price;

/**
 <p>The number of months remaining in the reservation. For example, 2 is the second to the last month before the capacity reservation expires.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable term;

@end

/**
 <p>Describes a Reserved Instance offering.</p>
 */
@interface AWSEC2PricingDetail : AWSModel


/**
 <p>The number of reservations available for the price.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable count;

/**
 <p>The price per instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable price;

@end

/**
 <p>PrincipalIdFormat description</p>
 */
@interface AWSEC2PrincipalIdFormat : AWSModel


/**
 <p>PrincipalIdFormatARN description</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>PrincipalIdFormatStatuses description</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IdFormat *> * _Nullable statuses;

@end

/**
 <p>Describes a secondary private IPv4 address for a network interface.</p>
 Required parameters: [PrivateIpAddress]
 */
@interface AWSEC2PrivateIpAddressSpecification : AWSModel


/**
 <p>Indicates whether the private IPv4 address is the primary private IPv4 address. Only one IPv4 address can be designated as primary.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable primary;

/**
 <p>The private IPv4 addresses.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

@end

/**
 <p>Describes a product code.</p>
 */
@interface AWSEC2ProductCode : AWSModel


/**
 <p>The product code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable productCodeId;

/**
 <p>The type of product code.</p>
 */
@property (nonatomic, assign) AWSEC2ProductCodeValues productCodeType;

@end

/**
 <p>Describes a virtual private gateway propagating route.</p>
 */
@interface AWSEC2PropagatingVgw : AWSModel


/**
 <p>The ID of the virtual private gateway (VGW).</p>
 */
@property (nonatomic, strong) NSString * _Nullable gatewayId;

@end

/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@interface AWSEC2ProvisionedBandwidth : AWSModel


/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable provisionTime;

/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable provisioned;

/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable requestTime;

/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable requested;

/**
 <p>Reserved. If you need to sustain traffic greater than the <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented limits</a>, contact us through the <a href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

@end

/**
 <p>Describes the result of the purchase.</p>
 */
@interface AWSEC2Purchase : AWSModel


/**
 <p>The currency in which the <code>UpfrontPrice</code> and <code>HourlyPrice</code> amounts are specified. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The duration of the reservation's term in seconds.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable duration;

/**
 <p>The IDs of the Dedicated Hosts associated with the reservation.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIdSet;

/**
 <p>The ID of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hostReservationId;

/**
 <p>The hourly price of the reservation per hour.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hourlyPrice;

/**
 <p>The instance family on the Dedicated Host that the reservation can be associated with.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceFamily;

/**
 <p>The payment option for the reservation.</p>
 */
@property (nonatomic, assign) AWSEC2PaymentOption paymentOption;

/**
 <p>The upfront price of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable upfrontPrice;

@end

/**
 
 */
@interface AWSEC2PurchaseHostReservationRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier you provide to ensure idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The currency in which the <code>totalUpfrontPrice</code>, <code>LimitPrice</code>, and <code>totalHourlyPrice</code> amounts are specified. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The ID/s of the Dedicated Host/s that the reservation will be associated with.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIdSet;

/**
 <p>The specified limit is checked against the total upfront cost of the reservation (calculated as the offering's upfront cost multiplied by the host count). If the total upfront cost is greater than the specified price limit, the request will fail. This is used to ensure that the purchase does not exceed the expected upfront cost of the purchase. At this time, the only supported currency is <code>USD</code>. For example, to indicate a limit price of USD 100, specify 100.00.</p>
 */
@property (nonatomic, strong) NSString * _Nullable limitPrice;

/**
 <p>The ID of the offering.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

@end

/**
 
 */
@interface AWSEC2PurchaseHostReservationResult : AWSModel


/**
 <p>Unique, case-sensitive identifier you provide to ensure idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon Elastic Compute Cloud User Guide</i></p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The currency in which the <code>totalUpfrontPrice</code> and <code>totalHourlyPrice</code> amounts are specified. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>Describes the details of the purchase.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Purchase *> * _Nullable purchase;

/**
 <p>The total hourly price of the reservation calculated per hour.</p>
 */
@property (nonatomic, strong) NSString * _Nullable totalHourlyPrice;

/**
 <p>The total amount that will be charged to your account when you purchase the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable totalUpfrontPrice;

@end

/**
 <p>Describes a request to purchase Scheduled Instances.</p>
 Required parameters: [InstanceCount, PurchaseToken]
 */
@interface AWSEC2PurchaseRequest : AWSModel


/**
 <p>The number of instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The purchase token.</p>
 */
@property (nonatomic, strong) NSString * _Nullable purchaseToken;

@end

/**
 <p>Contains the parameters for PurchaseReservedInstancesOffering.</p>
 Required parameters: [InstanceCount, ReservedInstancesOfferingId]
 */
@interface AWSEC2PurchaseReservedInstancesOfferingRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The number of Reserved Instances to purchase.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>Specified for Reserved Instance Marketplace offerings to limit the total order and ensure that the Reserved Instances are not purchased at unexpected prices.</p>
 */
@property (nonatomic, strong) AWSEC2ReservedInstanceLimitPrice * _Nullable limitPrice;

/**
 <p>The ID of the Reserved Instance offering to purchase.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesOfferingId;

@end

/**
 <p>Contains the output of PurchaseReservedInstancesOffering.</p>
 */
@interface AWSEC2PurchaseReservedInstancesOfferingResult : AWSModel


/**
 <p>The IDs of the purchased Reserved Instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

@end

/**
 <p>Contains the parameters for PurchaseScheduledInstances.</p>
 Required parameters: [PurchaseRequests]
 */
@interface AWSEC2PurchaseScheduledInstancesRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier that ensures the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more purchase requests.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PurchaseRequest *> * _Nullable purchaseRequests;

@end

/**
 <p>Contains the output of PurchaseScheduledInstances.</p>
 */
@interface AWSEC2PurchaseScheduledInstancesResult : AWSModel


/**
 <p>Information about the Scheduled Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstance *> * _Nullable scheduledInstanceSet;

@end

/**
 <p>Contains the parameters for RebootInstances.</p>
 Required parameters: [InstanceIds]
 */
@interface AWSEC2RebootInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Describes a recurring charge.</p>
 */
@interface AWSEC2RecurringCharge : AWSModel


/**
 <p>The amount of the recurring charge.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amount;

/**
 <p>The frequency of the recurring charge.</p>
 */
@property (nonatomic, assign) AWSEC2RecurringChargeFrequency frequency;

@end

/**
 <p>Describes a region.</p>
 */
@interface AWSEC2Region : AWSModel


/**
 <p>The region service endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable endpoint;

/**
 <p>The name of the region.</p>
 */
@property (nonatomic, strong) NSString * _Nullable regionName;

@end

/**
 <p>Contains the parameters for RegisterImage.</p>
 Required parameters: [Name]
 */
@interface AWSEC2RegisterImageRequest : AWSRequest


/**
 <p>The architecture of the AMI.</p><p>Default: For Amazon EBS-backed AMIs, <code>i386</code>. For instance store-backed AMIs, the architecture specified in the manifest file.</p>
 */
@property (nonatomic, assign) AWSEC2ArchitectureValues architecture;

/**
 <p>The billing product codes. Your account must be authorized to specify billing product codes. Otherwise, you can use the AWS Marketplace to bill for the use of an AMI.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable billingProducts;

/**
 <p>One or more block device mapping entries.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>A description for your AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Set to <code>true</code> to enable enhanced networking with ENA for the AMI and any instances that you launch from the AMI.</p><p>This option is supported only for HVM AMIs. Specifying this option with a PV AMI can make instances launched from the AMI unreachable.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enaSupport;

/**
 <p>The full path to your AMI manifest in Amazon S3 storage.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageLocation;

/**
 <p>The ID of the kernel.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>A name for your AMI.</p><p>Constraints: 3-128 alphanumeric characters, parentheses (()), square brackets ([]), spaces ( ), periods (.), slashes (/), dashes (-), single quotes ('), at-signs (@), or underscores(_)</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

/**
 <p>The ID of the RAM disk.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>The device name of the root device volume (for example, <code>/dev/sda1</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable rootDeviceName;

/**
 <p>Set to <code>simple</code> to enable enhanced networking with the Intel 82599 Virtual Function interface for the AMI and any instances that you launch from the AMI.</p><p>There is no way to disable <code>sriovNetSupport</code> at this time.</p><p>This option is supported only for HVM AMIs. Specifying this option with a PV AMI can make instances launched from the AMI unreachable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sriovNetSupport;

/**
 <p>The type of virtualization (<code>hvm</code> | <code>paravirtual</code>).</p><p>Default: <code>paravirtual</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualizationType;

@end

/**
 <p>Contains the output of RegisterImage.</p>
 */
@interface AWSEC2RegisterImageResult : AWSModel


/**
 <p>The ID of the newly registered AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

@end

/**
 
 */
@interface AWSEC2RejectVpcEndpointConnectionsRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

/**
 <p>The IDs of one or more VPC endpoints.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable vpcEndpointIds;

@end

/**
 
 */
@interface AWSEC2RejectVpcEndpointConnectionsResult : AWSModel


/**
 <p>Information about the endpoints that were not rejected, if applicable.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 <p>Contains the parameters for RejectVpcPeeringConnection.</p>
 Required parameters: [VpcPeeringConnectionId]
 */
@interface AWSEC2RejectVpcPeeringConnectionRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Contains the output of RejectVpcPeeringConnection.</p>
 */
@interface AWSEC2RejectVpcPeeringConnectionResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for ReleaseAddress.</p>
 */
@interface AWSEC2ReleaseAddressRequest : AWSRequest


/**
 <p>[EC2-VPC] The allocation ID. Required for EC2-VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable allocationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>[EC2-Classic] The Elastic IP address. Required for EC2-Classic.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Contains the parameters for ReleaseHosts.</p>
 Required parameters: [HostIds]
 */
@interface AWSEC2ReleaseHostsRequest : AWSRequest


/**
 <p>The IDs of the Dedicated Hosts you want to release.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable hostIds;

@end

/**
 <p>Contains the output of ReleaseHosts.</p>
 */
@interface AWSEC2ReleaseHostsResult : AWSModel


/**
 <p>The IDs of the Dedicated Hosts that were successfully released.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable successful;

/**
 <p>The IDs of the Dedicated Hosts that could not be released, including an error message.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UnsuccessfulItem *> * _Nullable unsuccessful;

@end

/**
 
 */
@interface AWSEC2ReplaceIamInstanceProfileAssociationRequest : AWSRequest


/**
 <p>The ID of the existing IAM instance profile association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileSpecification * _Nullable iamInstanceProfile;

@end

/**
 
 */
@interface AWSEC2ReplaceIamInstanceProfileAssociationResult : AWSModel


/**
 <p>Information about the IAM instance profile association.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileAssociation * _Nullable iamInstanceProfileAssociation;

@end

/**
 <p>Contains the parameters for ReplaceNetworkAclAssociation.</p>
 Required parameters: [AssociationId, NetworkAclId]
 */
@interface AWSEC2ReplaceNetworkAclAssociationRequest : AWSRequest


/**
 <p>The ID of the current association between the original network ACL and the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the new network ACL to associate with the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

@end

/**
 <p>Contains the output of ReplaceNetworkAclAssociation.</p>
 */
@interface AWSEC2ReplaceNetworkAclAssociationResult : AWSModel


/**
 <p>The ID of the new association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable latestAssociationId;

@end

/**
 <p>Contains the parameters for ReplaceNetworkAclEntry.</p>
 Required parameters: [Egress, NetworkAclId, Protocol, RuleAction, RuleNumber]
 */
@interface AWSEC2ReplaceNetworkAclEntryRequest : AWSRequest


/**
 <p>The IPv4 network range to allow or deny, in CIDR notation (for example <code>172.16.0.0/24</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Indicates whether to replace the egress rule.</p><p>Default: If no value is specified, we replace the ingress rule.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable egress;

/**
 <p>ICMP protocol: The ICMP or ICMPv6 type and code. Required if specifying the ICMP (1) protocol, or protocol 58 (ICMPv6) with an IPv6 CIDR block.</p>
 */
@property (nonatomic, strong) AWSEC2IcmpTypeCode * _Nullable icmpTypeCode;

/**
 <p>The IPv6 network range to allow or deny, in CIDR notation (for example <code>2001:bd8:1234:1a00::/64</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>The ID of the ACL.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkAclId;

/**
 <p>TCP or UDP protocols: The range of ports the rule applies to. Required if specifying TCP (6) or UDP (17) for the protocol.</p>
 */
@property (nonatomic, strong) AWSEC2PortRange * _Nullable portRange;

/**
 <p>The IP protocol. You can specify <code>all</code> or <code>-1</code> to mean all protocols. If you specify <code>all</code>, <code>-1</code>, or a protocol number other than <code>tcp</code>, <code>udp</code>, or <code>icmp</code>, traffic on all ports is allowed, regardless of any ports or ICMP types or codes you specify. If you specify protocol <code>58</code> (ICMPv6) and specify an IPv4 CIDR block, traffic for all ICMP types and codes allowed, regardless of any that you specify. If you specify protocol <code>58</code> (ICMPv6) and specify an IPv6 CIDR block, you must specify an ICMP type and code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable protocols;

/**
 <p>Indicates whether to allow or deny the traffic that matches the rule.</p>
 */
@property (nonatomic, assign) AWSEC2RuleAction ruleAction;

/**
 <p>The rule number of the entry to replace.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ruleNumber;

@end

/**
 <p>Contains the parameters for ReplaceRoute.</p>
 Required parameters: [RouteTableId]
 */
@interface AWSEC2ReplaceRouteRequest : AWSRequest


/**
 <p>The IPv4 CIDR address block used for the destination match. The value you provide must match the CIDR of an existing route in the table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>The IPv6 CIDR address block used for the destination match. The value you provide must match the CIDR of an existing route in the table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationIpv6CidrBlock;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>[IPv6 traffic only] The ID of an egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable egressOnlyInternetGatewayId;

/**
 <p>The ID of an Internet gateway or virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable gatewayId;

/**
 <p>The ID of a NAT instance in your VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>[IPv4 traffic only] The ID of a NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable natGatewayId;

/**
 <p>The ID of a network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

/**
 <p>The ID of a VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Contains the parameters for ReplaceRouteTableAssociation.</p>
 Required parameters: [AssociationId, RouteTableId]
 */
@interface AWSEC2ReplaceRouteTableAssociationRequest : AWSRequest


/**
 <p>The association ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the new route table to associate with the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

@end

/**
 <p>Contains the output of ReplaceRouteTableAssociation.</p>
 */
@interface AWSEC2ReplaceRouteTableAssociationResult : AWSModel


/**
 <p>The ID of the new association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable latestAssociationId;

@end

/**
 <p>Contains the parameters for ReportInstanceStatus.</p>
 Required parameters: [Instances, ReasonCodes, Status]
 */
@interface AWSEC2ReportInstanceStatusRequest : AWSRequest


/**
 <p>Descriptive text about the health state of your instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The time at which the reported instance health state ended.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>One or more instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instances;

/**
 <p>One or more reason codes that describe the health state of your instance.</p><ul><li><p><code>instance-stuck-in-state</code>: My instance is stuck in a state.</p></li><li><p><code>unresponsive</code>: My instance is unresponsive.</p></li><li><p><code>not-accepting-credentials</code>: My instance is not accepting my credentials.</p></li><li><p><code>password-not-available</code>: A password is not available for my instance.</p></li><li><p><code>performance-network</code>: My instance is experiencing performance problems that I believe are network related.</p></li><li><p><code>performance-instance-store</code>: My instance is experiencing performance problems that I believe are related to the instance stores.</p></li><li><p><code>performance-ebs-volume</code>: My instance is experiencing performance problems that I believe are related to an EBS volume.</p></li><li><p><code>performance-other</code>: My instance is experiencing performance problems.</p></li><li><p><code>other</code>: [explain using the description parameter]</p></li></ul>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable reasonCodes;

/**
 <p>The time at which the reported instance health state began.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>The status of all instances listed.</p>
 */
@property (nonatomic, assign) AWSEC2ReportStatusType status;

@end

/**
 <p>The information to include in the launch template.</p>
 */
@interface AWSEC2RequestLaunchTemplateData : AWSModel


/**
 <p>The block device mapping.</p><important><p>Supplying both a snapshot ID and an encryption value as arguments for block-device mapping results in an error. This is because only blank volumes can be encrypted on start, and these are not created from a snapshot. If a snapshot is the basis for the volume, it contains data by definition and its encryption status cannot be changed using this action.</p></important>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateBlockDeviceMappingRequest *> * _Nullable blockDeviceMappings;

/**
 <p>The credit option for CPU usage of the instance. Valid for T2 instances only.</p>
 */
@property (nonatomic, strong) AWSEC2CreditSpecificationRequest * _Nullable creditSpecification;

/**
 <p>If set to <code>true</code>, you can't terminate the instance using the Amazon EC2 console, CLI, or API. To change this attribute to <code>false</code> after launch, use <a>ModifyInstanceAttribute</a>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable disableApiTermination;

/**
 <p>Indicates whether the instance is optimized for Amazon EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal Amazon EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS-optimized instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>An elastic GPU to associate with the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ElasticGpuSpecification *> * _Nullable elasticGpuSpecifications;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateIamInstanceProfileSpecificationRequest * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI, which you can get by using <a>DescribeImages</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>Indicates whether an instance stops or terminates when you initiate shutdown from the instance (using the operating system command for system shutdown).</p><p>Default: <code>stop</code></p>
 */
@property (nonatomic, assign) AWSEC2ShutdownBehavior instanceInitiatedShutdownBehavior;

/**
 <p>The market (purchasing) option for the instances.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateInstanceMarketOptionsRequest * _Nullable instanceMarketOptions;

/**
 <p>The instance type. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The ID of the kernel.</p><important><p>We recommend that you use PV-GRUB instead of kernels and RAM disks. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair. You can create a key pair using <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p><important><p>If you do not specify a key pair, you can't connect to the instance unless you choose an AMI that is configured to allow users another way to log in.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The monitoring for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplatesMonitoringRequest * _Nullable monitoring;

/**
 <p>One or more network interfaces.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateInstanceNetworkInterfaceSpecificationRequest *> * _Nullable networkInterfaces;

/**
 <p>The placement for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplatePlacementRequest * _Nullable placement;

/**
 <p>The ID of the RAM disk.</p><important><p>We recommend that you use PV-GRUB instead of kernels and RAM disks. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html">User Provided Kernels</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable ramDiskId;

/**
 <p>One or more security group IDs. You can create a security group using <a>CreateSecurityGroup</a>. You cannot specify both a security group ID and security name in the same request.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault VPC, you must use security group IDs instead. You cannot specify both a security group ID and security name in the same request.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroups;

/**
 <p>The tags to apply to the resources during launch. You can tag instances and volumes. The specified tags are applied to all instances or volumes that are created during launch.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateTagSpecificationRequest *> * _Nullable tagSpecifications;

/**
 <p>The Base64-encoded user data to make available to the instance. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running Commands on Your Linux Instance at Launch</a> (Linux) and <a href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding User Data</a> (Windows).</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 <p>Contains the parameters for RequestSpotFleet.</p>
 Required parameters: [SpotFleetRequestConfig]
 */
@interface AWSEC2RequestSpotFleetRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The configuration for the Spot Fleet request.</p>
 */
@property (nonatomic, strong) AWSEC2SpotFleetRequestConfigData * _Nullable spotFleetRequestConfig;

@end

/**
 <p>Contains the output of RequestSpotFleet.</p>
 Required parameters: [SpotFleetRequestId]
 */
@interface AWSEC2RequestSpotFleetResponse : AWSModel


/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

@end

/**
 <p>Contains the parameters for RequestSpotInstances.</p>
 */
@interface AWSEC2RequestSpotInstancesRequest : AWSRequest


/**
 <p>The user-specified name for a logical grouping of requests.</p><p>When you specify an Availability Zone group in a Spot Instance request, all Spot Instances in the request are launched in the same Availability Zone. Instance proximity is maintained with this parameter, but the choice of Availability Zone is not. The group applies only to requests for Spot Instances of the same instance type. Any additional Spot Instance requests that are specified with the same Availability Zone group name are launched in that same Availability Zone, as long as at least one instance from the group is still active.</p><p>If there is no active instance running in the Availability Zone group that you specify for a new Spot Instance request (all instances are terminated, the request is expired, or the maximum price you specified falls below current Spot price), then Amazon EC2 launches the instance in any Availability Zone where the constraint can be met. Consequently, the subsequent set of Spot Instances could be placed in a different zone from the original request, even if you specified the same Availability Zone group.</p><p>Default: Instances are launched in any available Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZoneGroup;

/**
 <p>The required duration for the Spot Instances (also known as Spot blocks), in minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or 360).</p><p>The duration period starts as soon as your Spot Instance receives its instance ID. At the end of the duration period, Amazon EC2 marks the Spot Instance for termination and provides a Spot Instance termination notice, which gives the instance a two-minute warning before it terminates.</p><p>You can't specify an Availability Zone group or a launch group if you specify a duration.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockDurationMinutes;

/**
 <p>Unique, case-sensitive identifier that you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/Run_Instance_Idempotency.html">How to Ensure Idempotency</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The maximum number of Spot Instances to launch.</p><p>Default: 1</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The behavior when a Spot Instance is interrupted. The default is <code>terminate</code>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceInterruptionBehavior instanceInterruptionBehavior;

/**
 <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p><p>Default: Instances are launched and terminated individually</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchGroup;

/**
 <p>The launch specification.</p>
 */
@property (nonatomic, strong) AWSEC2RequestSpotLaunchSpecification * _Nullable launchSpecification;

/**
 <p>The maximum price per hour that you are willing to pay for a Spot Instance. The default is the On-Demand price.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The Spot Instance request type.</p><p>Default: <code>one-time</code></p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceType types;

/**
 <p>The start date of the request. If this is a one-time request, the request becomes active at this date and time and remains active until all instances launch, the request expires, or the request is canceled. If the request is persistent, the request becomes active at this date and time and remains active until it expires or is canceled.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validFrom;

/**
 <p>The end date of the request. If this is a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date is reached. The default end date is 7 days from the current date.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>Contains the output of RequestSpotInstances.</p>
 */
@interface AWSEC2RequestSpotInstancesResult : AWSModel


/**
 <p>One or more Spot Instance requests.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SpotInstanceRequest *> * _Nullable spotInstanceRequests;

@end

/**
 <p>Describes the launch specification for an instance.</p>
 */
@interface AWSEC2RequestSpotLaunchSpecification : AWSModel


/**
 <p>Deprecated.</p>
 */
@property (nonatomic, strong) NSString * _Nullable addressingType;

/**
 <p>One or more block device mapping entries. You can't specify both a snapshot ID and an encryption value. This is because only blank volumes can be encrypted on creation. If a snapshot is the basis for a volume, it is not blank and its encryption status is used for the volume encryption status.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>Indicates whether the instance is optimized for EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS Optimized instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileSpecification * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The ID of the kernel.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>Indicates whether basic or detailed monitoring is enabled for the instance.</p><p>Default: Disabled</p>
 */
@property (nonatomic, strong) AWSEC2RunInstancesMonitoringEnabled * _Nullable monitoring;

/**
 <p>One or more network interfaces. If you specify a network interface, you must specify subnet IDs and security group IDs using the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceNetworkInterfaceSpecification *> * _Nullable networkInterfaces;

/**
 <p>The placement information for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2SpotPlacement * _Nullable placement;

/**
 <p>The ID of the RAM disk.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>One or more security group IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>One or more security groups. When requesting instances in a VPC, you must specify the IDs of the security groups. When requesting instances in EC2-Classic, you can specify the names or the IDs of the security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroups;

/**
 <p>The ID of the subnet in which to launch the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The Base64-encoded user data for the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 <p>Describes a reservation.</p>
 */
@interface AWSEC2Reservation : AWSModel


/**
 <p>[EC2-Classic only] One or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable groups;

/**
 <p>One or more instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Instance *> * _Nullable instances;

/**
 <p>The ID of the AWS account that owns the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The ID of the requester that launched the instances on your behalf (for example, AWS Management Console or Auto Scaling).</p>
 */
@property (nonatomic, strong) NSString * _Nullable requesterId;

/**
 <p>The ID of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservationId;

@end

/**
 <p>The cost associated with the Reserved Instance.</p>
 */
@interface AWSEC2ReservationValue : AWSModel


/**
 <p>The hourly rate of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hourlyPrice;

/**
 <p>The balance of the total value (the sum of remainingUpfrontValue + hourlyPrice * number of hours remaining).</p>
 */
@property (nonatomic, strong) NSString * _Nullable remainingTotalValue;

/**
 <p>The remaining upfront cost of the reservation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable remainingUpfrontValue;

@end

/**
 <p>Describes the limit price of a Reserved Instance offering.</p>
 */
@interface AWSEC2ReservedInstanceLimitPrice : AWSModel


/**
 <p>Used for Reserved Instance Marketplace offerings. Specifies the limit price on the total order (instanceCount * price).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amount;

/**
 <p>The currency in which the <code>limitPrice</code> amount is specified. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

@end

/**
 <p>The total value of the Convertible Reserved Instance.</p>
 */
@interface AWSEC2ReservedInstanceReservationValue : AWSModel


/**
 <p>The total value of the Convertible Reserved Instance that you are exchanging.</p>
 */
@property (nonatomic, strong) AWSEC2ReservationValue * _Nullable reservationValue;

/**
 <p>The ID of the Convertible Reserved Instance that you are exchanging.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstanceId;

@end

/**
 <p>Describes a Reserved Instance.</p>
 */
@interface AWSEC2ReservedInstances : AWSModel


/**
 <p>The Availability Zone in which the Reserved Instance can be used.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The currency of the Reserved Instance. It's specified using ISO 4217 standard currency codes. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The duration of the Reserved Instance, in seconds.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable duration;

/**
 <p>The time when the Reserved Instance expires.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable end;

/**
 <p>The purchase price of the Reserved Instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fixedPrice;

/**
 <p>The number of reservations purchased.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The tenancy of the instance.</p>
 */
@property (nonatomic, assign) AWSEC2Tenancy instanceTenancy;

/**
 <p>The instance type on which the Reserved Instance can be used.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The offering class of the Reserved Instance.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingClassType offeringClass;

/**
 <p>The Reserved Instance offering type.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingTypeValues offeringType;

/**
 <p>The Reserved Instance product platform description.</p>
 */
@property (nonatomic, assign) AWSEC2RIProductDescription productDescription;

/**
 <p>The recurring charge tag assigned to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2RecurringCharge *> * _Nullable recurringCharges;

/**
 <p>The ID of the Reserved Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

/**
 <p>The scope of the Reserved Instance.</p>
 */
@property (nonatomic, assign) AWSEC2scope scope;

/**
 <p>The date and time the Reserved Instance started.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable start;

/**
 <p>The state of the Reserved Instance purchase.</p>
 */
@property (nonatomic, assign) AWSEC2ReservedInstanceState state;

/**
 <p>Any tags assigned to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The usage price of the Reserved Instance, per hour.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable usagePrice;

@end

/**
 <p>Describes the configuration settings for the modified Reserved Instances.</p>
 */
@interface AWSEC2ReservedInstancesConfiguration : AWSModel


/**
 <p>The Availability Zone for the modified Reserved Instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The number of modified Reserved Instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The instance type for the modified Reserved Instances.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The network platform of the modified Reserved Instances, which is either EC2-Classic or EC2-VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable platform;

/**
 <p>Whether the Reserved Instance is applied to instances in a region or instances in a specific Availability Zone.</p>
 */
@property (nonatomic, assign) AWSEC2scope scope;

@end

/**
 <p>Describes the ID of a Reserved Instance.</p>
 */
@interface AWSEC2ReservedInstancesId : AWSModel


/**
 <p>The ID of the Reserved Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

@end

/**
 <p>Describes a Reserved Instance listing.</p>
 */
@interface AWSEC2ReservedInstancesListing : AWSModel


/**
 <p>A unique, case-sensitive key supplied by the client to ensure that the request is idempotent. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The time the listing was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createDate;

/**
 <p>The number of instances in this state.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceCount *> * _Nullable instanceCounts;

/**
 <p>The price of the Reserved Instance listing.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PriceSchedule *> * _Nullable priceSchedules;

/**
 <p>The ID of the Reserved Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

/**
 <p>The ID of the Reserved Instance listing.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesListingId;

/**
 <p>The status of the Reserved Instance listing.</p>
 */
@property (nonatomic, assign) AWSEC2ListingStatus status;

/**
 <p>The reason for the current status of the Reserved Instance listing. The response can be blank.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>Any tags assigned to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The last modified timestamp of the listing.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable updateDate;

@end

/**
 <p>Describes a Reserved Instance modification.</p>
 */
@interface AWSEC2ReservedInstancesModification : AWSModel


/**
 <p>A unique, case-sensitive key supplied by the client to ensure that the request is idempotent. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The time when the modification request was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createDate;

/**
 <p>The time for the modification to become effective.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable effectiveDate;

/**
 <p>Contains target configurations along with their corresponding new Reserved Instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesModificationResult *> * _Nullable modificationResults;

/**
 <p>The IDs of one or more Reserved Instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ReservedInstancesId *> * _Nullable reservedInstancesIds;

/**
 <p>A unique ID for the Reserved Instance modification.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesModificationId;

/**
 <p>The status of the Reserved Instances modification request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>The reason for the status.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>The time when the modification request was last updated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable updateDate;

@end

/**
 <p>Describes the modification request/s.</p>
 */
@interface AWSEC2ReservedInstancesModificationResult : AWSModel


/**
 <p>The ID for the Reserved Instances that were created as part of the modification request. This field is only available when the modification is fulfilled.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesId;

/**
 <p>The target Reserved Instances configurations supplied as part of the modification request.</p>
 */
@property (nonatomic, strong) AWSEC2ReservedInstancesConfiguration * _Nullable targetConfiguration;

@end

/**
 <p>Describes a Reserved Instance offering.</p>
 */
@interface AWSEC2ReservedInstancesOffering : AWSModel


/**
 <p>The Availability Zone in which the Reserved Instance can be used.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The currency of the Reserved Instance offering you are purchasing. It's specified using ISO 4217 standard currency codes. At this time, the only supported currency is <code>USD</code>.</p>
 */
@property (nonatomic, assign) AWSEC2CurrencyCodeValues currencyCode;

/**
 <p>The duration of the Reserved Instance, in seconds.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable duration;

/**
 <p>The purchase price of the Reserved Instance.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fixedPrice;

/**
 <p>The tenancy of the instance.</p>
 */
@property (nonatomic, assign) AWSEC2Tenancy instanceTenancy;

/**
 <p>The instance type on which the Reserved Instance can be used.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>Indicates whether the offering is available through the Reserved Instance Marketplace (resale) or AWS. If it's a Reserved Instance Marketplace offering, this is <code>true</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable marketplace;

/**
 <p>If <code>convertible</code> it can be exchanged for Reserved Instances of the same or higher monetary value, with different configurations. If <code>standard</code>, it is not possible to perform an exchange.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingClassType offeringClass;

/**
 <p>The Reserved Instance offering type.</p>
 */
@property (nonatomic, assign) AWSEC2OfferingTypeValues offeringType;

/**
 <p>The pricing details of the Reserved Instance offering.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PricingDetail *> * _Nullable pricingDetails;

/**
 <p>The Reserved Instance product platform description.</p>
 */
@property (nonatomic, assign) AWSEC2RIProductDescription productDescription;

/**
 <p>The recurring charge tag assigned to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2RecurringCharge *> * _Nullable recurringCharges;

/**
 <p>The ID of the Reserved Instance offering. This is the offering ID used in <a>GetReservedInstancesExchangeQuote</a> to confirm that an exchange can be made.</p>
 */
@property (nonatomic, strong) NSString * _Nullable reservedInstancesOfferingId;

/**
 <p>Whether the Reserved Instance is applied to instances in a region or an Availability Zone.</p>
 */
@property (nonatomic, assign) AWSEC2scope scope;

/**
 <p>The usage price of the Reserved Instance, per hour.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable usagePrice;

@end

/**
 
 */
@interface AWSEC2ResetFpgaImageAttributeRequest : AWSRequest


/**
 <p>The attribute.</p>
 */
@property (nonatomic, assign) AWSEC2ResetFpgaImageAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AFI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable fpgaImageId;

@end

/**
 
 */
@interface AWSEC2ResetFpgaImageAttributeResult : AWSModel


/**
 <p>Is <code>true</code> if the request succeeds, and an error otherwise.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for ResetImageAttribute.</p>
 Required parameters: [Attribute, ImageId]
 */
@interface AWSEC2ResetImageAttributeRequest : AWSRequest


/**
 <p>The attribute to reset (currently you can only reset the launch permission attribute).</p>
 */
@property (nonatomic, assign) AWSEC2ResetImageAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

@end

/**
 <p>Contains the parameters for ResetInstanceAttribute.</p>
 Required parameters: [Attribute, InstanceId]
 */
@interface AWSEC2ResetInstanceAttributeRequest : AWSRequest


/**
 <p>The attribute to reset.</p><important><p>You can only reset the following attributes: <code>kernel</code> | <code>ramdisk</code> | <code>sourceDestCheck</code>. To change an instance attribute, use <a>ModifyInstanceAttribute</a>.</p></important>
 */
@property (nonatomic, assign) AWSEC2InstanceAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Contains the parameters for ResetNetworkInterfaceAttribute.</p>
 Required parameters: [NetworkInterfaceId]
 */
@interface AWSEC2ResetNetworkInterfaceAttributeRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The source/destination checking attribute. Resets the value to <code>true</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceDestCheck;

@end

/**
 <p>Contains the parameters for ResetSnapshotAttribute.</p>
 Required parameters: [Attribute, SnapshotId]
 */
@interface AWSEC2ResetSnapshotAttributeRequest : AWSRequest


/**
 <p>The attribute to reset. Currently, only the attribute for permission to create volumes can be reset.</p>
 */
@property (nonatomic, assign) AWSEC2SnapshotAttributeName attribute;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

@end

/**
 <p>Describes the error that's returned when you cannot delete a launch template version.</p>
 */
@interface AWSEC2ResponseError : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, assign) AWSEC2LaunchTemplateErrorCode code;

/**
 <p>The error message, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>The information for a launch template. </p>
 */
@interface AWSEC2ResponseLaunchTemplateData : AWSModel


/**
 <p>The block device mappings.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateBlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>The credit option for CPU usage of the instance.</p>
 */
@property (nonatomic, strong) AWSEC2CreditSpecification * _Nullable creditSpecification;

/**
 <p>If set to <code>true</code>, indicates that the instance cannot be terminated using the Amazon EC2 console, command line tool, or API.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable disableApiTermination;

/**
 <p>Indicates whether the instance is optimized for Amazon EBS I/O. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The elastic GPU specification.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ElasticGpuSpecificationResponse *> * _Nullable elasticGpuSpecifications;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateIamInstanceProfileSpecification * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI that was used to launch the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>Indicates whether an instance stops or terminates when you initiate shutdown from the instance (using the operating system command for system shutdown).</p>
 */
@property (nonatomic, assign) AWSEC2ShutdownBehavior instanceInitiatedShutdownBehavior;

/**
 <p>The market (purchasing) option for the instances.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateInstanceMarketOptions * _Nullable instanceMarketOptions;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The ID of the kernel, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The monitoring for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplatesMonitoring * _Nullable monitoring;

/**
 <p>The network interfaces.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateInstanceNetworkInterfaceSpecification *> * _Nullable networkInterfaces;

/**
 <p>The placement of the instance.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplatePlacement * _Nullable placement;

/**
 <p>The ID of the RAM disk, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramDiskId;

/**
 <p>The security group IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>The security group names.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroups;

/**
 <p>The tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateTagSpecification *> * _Nullable tagSpecifications;

/**
 <p>The user data for the instance. </p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 <p>Contains the parameters for RestoreAddressToClassic.</p>
 Required parameters: [PublicIp]
 */
@interface AWSEC2RestoreAddressToClassicRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

@end

/**
 <p>Contains the output of RestoreAddressToClassic.</p>
 */
@interface AWSEC2RestoreAddressToClassicResult : AWSModel


/**
 <p>The Elastic IP address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable publicIp;

/**
 <p>The move status for the IP address.</p>
 */
@property (nonatomic, assign) AWSEC2Status status;

@end

/**
 <p>Contains the parameters for RevokeSecurityGroupEgress.</p>
 Required parameters: [GroupId]
 */
@interface AWSEC2RevokeSecurityGroupEgressRequest : AWSRequest


/**
 <p>Not supported. Use a set of IP permissions to specify the CIDR.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrIp;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Not supported. Use a set of IP permissions to specify the port.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fromPort;

/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>One or more sets of IP permissions. You can't specify a destination security group and a CIDR IP address range in the same set of permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

/**
 <p>Not supported. Use a set of IP permissions to specify the protocol name or number.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipProtocol;

/**
 <p>Not supported. Use a set of IP permissions to specify a destination security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupName;

/**
 <p>Not supported. Use a set of IP permissions to specify a destination security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupOwnerId;

/**
 <p>Not supported. Use a set of IP permissions to specify the port.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable toPort;

@end

/**
 <p>Contains the parameters for RevokeSecurityGroupIngress.</p>
 */
@interface AWSEC2RevokeSecurityGroupIngressRequest : AWSRequest


/**
 <p>The CIDR IP address range. You can't specify this parameter when specifying a source security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrIp;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The start of port range for the TCP and UDP protocols, or an ICMP type number. For the ICMP type number, use <code>-1</code> to specify all ICMP types.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fromPort;

/**
 <p>The ID of the security group. You must specify either the security group ID or the security group name in the request. For security groups in a nondefault VPC, you must specify the security group ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>[EC2-Classic, default VPC] The name of the security group. You must specify either the security group ID or the security group name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>One or more sets of IP permissions. You can't specify a source security group and a CIDR IP address range in the same set of permissions.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

/**
 <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>) or number (see <a href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol Numbers</a>). Use <code>-1</code> to specify all.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipProtocol;

/**
 <p>[EC2-Classic, default VPC] The name of the source security group. You can't specify this parameter in combination with the following parameters: the CIDR IP address range, the start of the port range, the IP protocol, and the end of the port range. For EC2-VPC, the source security group must be in the same VPC. To revoke a specific rule for an IP protocol and port range, use a set of IP permissions instead.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupName;

/**
 <p>[EC2-Classic] The AWS account ID of the source security group, if the source security group is in a different account. You can't specify this parameter in combination with the following parameters: the CIDR IP address range, the IP protocol, the start of the port range, and the end of the port range. To revoke a specific rule for an IP protocol and port range, use a set of IP permissions instead.</p>
 */
@property (nonatomic, strong) NSString * _Nullable sourceSecurityGroupOwnerId;

/**
 <p>The end of port range for the TCP and UDP protocols, or an ICMP code number. For the ICMP code number, use <code>-1</code> to specify all ICMP codes for the ICMP type.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable toPort;

@end

/**
 <p>Describes a route in a route table.</p>
 */
@interface AWSEC2Route : AWSModel


/**
 <p>The IPv4 CIDR block used for the destination match.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>The IPv6 CIDR block used for the destination match.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationIpv6CidrBlock;

/**
 <p>The prefix of the AWS service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationPrefixListId;

/**
 <p>The ID of the egress-only Internet gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable egressOnlyInternetGatewayId;

/**
 <p>The ID of a gateway attached to your VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable gatewayId;

/**
 <p>The ID of a NAT instance in your VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The AWS account ID of the owner of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceOwnerId;

/**
 <p>The ID of a NAT gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable natGatewayId;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>Describes how the route was created.</p><ul><li><p><code>CreateRouteTable</code> - The route was automatically created when the route table was created.</p></li><li><p><code>CreateRoute</code> - The route was manually added to the route table.</p></li><li><p><code>EnableVgwRoutePropagation</code> - The route was propagated by route propagation.</p></li></ul>
 */
@property (nonatomic, assign) AWSEC2RouteOrigin origin;

/**
 <p>The state of the route. The <code>blackhole</code> state indicates that the route's target isn't available (for example, the specified gateway isn't attached to the VPC, or the specified NAT instance has been terminated).</p>
 */
@property (nonatomic, assign) AWSEC2RouteState state;

/**
 <p>The ID of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Describes a route table.</p>
 */
@interface AWSEC2RouteTable : AWSModel


/**
 <p>The associations between the route table and one or more subnets.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2RouteTableAssociation *> * _Nullable associations;

/**
 <p>Any virtual private gateway (VGW) propagating routes.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2PropagatingVgw *> * _Nullable propagatingVgws;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

/**
 <p>The routes in the route table.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Route *> * _Nullable routes;

/**
 <p>Any tags assigned to the route table.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes an association between a route table and a subnet.</p>
 */
@interface AWSEC2RouteTableAssociation : AWSModel


/**
 <p>Indicates whether this is the main route table.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable main;

/**
 <p>The ID of the association between a route table and a subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableAssociationId;

/**
 <p>The ID of the route table.</p>
 */
@property (nonatomic, strong) NSString * _Nullable routeTableId;

/**
 <p>The ID of the subnet. A subnet ID is not returned for an implicit association.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Describes the monitoring of an instance.</p>
 Required parameters: [Enabled]
 */
@interface AWSEC2RunInstancesMonitoringEnabled : AWSModel


/**
 <p>Indicates whether detailed monitoring is enabled. Otherwise, basic monitoring is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

@end

/**
 <p>Contains the parameters for RunInstances.</p>
 Required parameters: [MaxCount, MinCount]
 */
@interface AWSEC2RunInstancesRequest : AWSRequest


/**
 <p>Reserved.</p>
 */
@property (nonatomic, strong) NSString * _Nullable additionalInfo;

/**
 <p>One or more block device mapping entries. You can't specify both a snapshot ID and an encryption value. This is because only blank volumes can be encrypted on creation. If a snapshot is the basis for a volume, it is not blank and its encryption status is used for the volume encryption status.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>Unique, case-sensitive identifier you provide to ensure the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p><p>Constraints: Maximum 64 ASCII characters</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>The CPU options for the instance. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-optimize-cpu.html">Optimizing CPU Options</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) AWSEC2CpuOptionsRequest * _Nullable cpuOptions;

/**
 <p>The credit option for CPU usage of the instance. Valid values are <code>standard</code> and <code>unlimited</code>. To change this attribute after launch, use <a>ModifyInstanceCreditSpecification</a>. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/t2-instances.html">T2 Instances</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p>Default: <code>standard</code></p>
 */
@property (nonatomic, strong) AWSEC2CreditSpecificationRequest * _Nullable creditSpecification;

/**
 <p>If you set this parameter to <code>true</code>, you can't terminate the instance using the Amazon EC2 console, CLI, or API; otherwise, you can. To change this attribute to <code>false</code> after launch, use <a>ModifyInstanceAttribute</a>. Alternatively, if you set <code>InstanceInitiatedShutdownBehavior</code> to <code>terminate</code>, you can terminate the instance by running the shutdown command from the instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable disableApiTermination;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Indicates whether the instance is optimized for Amazon EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal Amazon EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS-optimized instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>An elastic GPU to associate with the instance.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ElasticGpuSpecification *> * _Nullable elasticGpuSpecification;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileSpecification * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI, which you can get by calling <a>DescribeImages</a>. An AMI is required to launch an instance and must be specified here or in a launch template.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>Indicates whether an instance stops or terminates when you initiate shutdown from the instance (using the operating system command for system shutdown).</p><p>Default: <code>stop</code></p>
 */
@property (nonatomic, assign) AWSEC2ShutdownBehavior instanceInitiatedShutdownBehavior;

/**
 <p>The market (purchasing) option for the instances.</p>
 */
@property (nonatomic, strong) AWSEC2InstanceMarketOptionsRequest * _Nullable instanceMarketOptions;

/**
 <p>The instance type. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p>Default: <code>m1.small</code></p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>[EC2-VPC] A number of IPv6 addresses to associate with the primary network interface. Amazon EC2 chooses the IPv6 addresses from the range of your subnet. You cannot specify this option and the option to assign specific IPv6 addresses in the same request. You can specify this option if you've specified a minimum number of instances to launch.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>[EC2-VPC] Specify one or more IPv6 addresses from the range of the subnet to associate with the primary network interface. You cannot specify this option and the option to assign a number of IPv6 addresses in the same request. You cannot specify this option if you've specified a minimum number of instances to launch.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the kernel.</p><important><p>We recommend that you use PV-GRUB instead of kernels and RAM disks. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html"> PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair. You can create a key pair using <a>CreateKeyPair</a> or <a>ImportKeyPair</a>.</p><important><p>If you do not specify a key pair, you can't connect to the instance unless you choose an AMI that is configured to allow users another way to log in.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>The launch template to use to launch the instances. Any parameters that you specify in <a>RunInstances</a> override the same parameters in the launch template. You can specify either the name or ID of a launch template, but not both.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchTemplateSpecification * _Nullable launchTemplate;

/**
 <p>The maximum number of instances to launch. If you specify more instances than Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches the largest possible number of instances above <code>MinCount</code>.</p><p>Constraints: Between 1 and the maximum number you're allowed for the specified instance type. For more information about the default limits, and how to request an increase, see <a href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How many instances can I run in Amazon EC2</a> in the Amazon EC2 FAQ.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxCount;

/**
 <p>The minimum number of instances to launch. If you specify a minimum that is more instances than Amazon EC2 can launch in the target Availability Zone, Amazon EC2 launches no instances.</p><p>Constraints: Between 1 and the maximum number you're allowed for the specified instance type. For more information about the default limits, and how to request an increase, see <a href="http://aws.amazon.com/ec2/faqs/#How_many_instances_can_I_run_in_Amazon_EC2">How many instances can I run in Amazon EC2</a> in the Amazon EC2 General FAQ.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minCount;

/**
 <p>The monitoring for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2RunInstancesMonitoringEnabled * _Nullable monitoring;

/**
 <p>One or more network interfaces.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceNetworkInterfaceSpecification *> * _Nullable networkInterfaces;

/**
 <p>The placement for the instance.</p>
 */
@property (nonatomic, strong) AWSEC2Placement * _Nullable placement;

/**
 <p>[EC2-VPC] The primary IPv4 address. You must specify a value from the IPv4 address range of the subnet.</p><p>Only one private IP address can be designated as primary. You can't specify this option if you've specified the option to designate a private IP address as the primary IP address in a network interface specification. You cannot specify this option if you're launching more than one instance in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>The ID of the RAM disk.</p><important><p>We recommend that you use PV-GRUB instead of kernels and RAM disks. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/UserProvidedkernels.html"> PV-GRUB</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p></important>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>One or more security group IDs. You can create a security group using <a>CreateSecurityGroup</a>.</p><p>Default: Amazon EC2 uses the default security group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>[EC2-Classic, default VPC] One or more security group names. For a nondefault VPC, you must use security group IDs instead.</p><p>Default: Amazon EC2 uses the default security group.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroups;

/**
 <p>[EC2-VPC] The ID of the subnet to launch the instance into.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The tags to apply to the resources during launch. You can tag instances and volumes. The specified tags are applied to all instances or volumes that are created during launch.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TagSpecification *> * _Nullable tagSpecifications;

/**
 <p>The user data to make available to the instance. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/user-data.html">Running Commands on Your Linux Instance at Launch</a> (Linux) and <a href="http://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/ec2-instance-metadata.html#instancedata-add-user-data">Adding User Data</a> (Windows). If you are using a command line tool, base64-encoding is performed for you, and you can load the text from a file. Otherwise, you must provide base64-encoded text.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 <p>Contains the parameters for RunScheduledInstances.</p>
 Required parameters: [LaunchSpecification, ScheduledInstanceId]
 */
@interface AWSEC2RunScheduledInstancesRequest : AWSRequest


/**
 <p>Unique, case-sensitive identifier that ensures the idempotency of the request. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The number of instances.</p><p>Default: 1</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The launch specification. You must match the instance type, Availability Zone, network, and platform of the schedule that you purchased.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstancesLaunchSpecification * _Nullable launchSpecification;

/**
 <p>The Scheduled Instance ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledInstanceId;

@end

/**
 <p>Contains the output of RunScheduledInstances.</p>
 */
@interface AWSEC2RunScheduledInstancesResult : AWSModel


/**
 <p>The IDs of the newly launched instances.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIdSet;

@end

/**
 <p>Describes the storage parameters for S3 and S3 buckets for an instance store-backed AMI.</p>
 */
@interface AWSEC2S3Storage : AWSModel


/**
 <p>The access key ID of the owner of the bucket. Before you specify a value for your access key ID, review and follow the guidance in <a href="http://docs.aws.amazon.com/general/latest/gr/aws-access-keys-best-practices.html">Best Practices for Managing AWS Access Keys</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable AWSAccessKeyId;

/**
 <p>The bucket in which to store the AMI. You can specify a bucket that you already own or a new bucket that Amazon EC2 creates on your behalf. If you specify a bucket that belongs to someone else, Amazon EC2 returns an error.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucket;

/**
 <p>The beginning of the file name of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>An Amazon S3 upload policy that gives Amazon EC2 permission to upload items into Amazon S3 on your behalf.</p>
 */
@property (nonatomic, strong) NSData * _Nullable uploadPolicy;

/**
 <p>The signature of the JSON document.</p>
 */
@property (nonatomic, strong) NSString * _Nullable uploadPolicySignature;

@end

/**
 <p>Describes a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstance : AWSModel


/**
 <p>The Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The date when the Scheduled Instance was purchased.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createDate;

/**
 <p>The hourly price for a single instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hourlyPrice;

/**
 <p>The number of instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkPlatform;

/**
 <p>The time for the next schedule to start.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable nextSlotStartTime;

/**
 <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable platform;

/**
 <p>The time that the previous schedule ended or will end.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable previousSlotEndTime;

/**
 <p>The schedule recurrence.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstanceRecurrence * _Nullable recurrence;

/**
 <p>The Scheduled Instance ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable scheduledInstanceId;

/**
 <p>The number of hours in the schedule.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable slotDurationInHours;

/**
 <p>The end date for the Scheduled Instance.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable termEndDate;

/**
 <p>The start date for the Scheduled Instance.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable termStartDate;

/**
 <p>The total number of hours for a single instance for the entire term.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable totalScheduledInstanceHours;

@end

/**
 <p>Describes a schedule that is available for your Scheduled Instances.</p>
 */
@interface AWSEC2ScheduledInstanceAvailability : AWSModel


/**
 <p>The Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The number of available instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable availableInstanceCount;

/**
 <p>The time period for the first schedule to start.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable firstSlotStartTime;

/**
 <p>The hourly price for a single instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable hourlyPrice;

/**
 <p>The instance type. You can specify one of the C3, C4, M4, or R3 instance types.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The maximum term. The only possible value is 365 days.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable maxTermDurationInDays;

/**
 <p>The minimum term. The only possible value is 365 days.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable minTermDurationInDays;

/**
 <p>The network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkPlatform;

/**
 <p>The platform (<code>Linux/UNIX</code> or <code>Windows</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable platform;

/**
 <p>The purchase token. This token expires in two hours.</p>
 */
@property (nonatomic, strong) NSString * _Nullable purchaseToken;

/**
 <p>The schedule recurrence.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstanceRecurrence * _Nullable recurrence;

/**
 <p>The number of hours in the schedule.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable slotDurationInHours;

/**
 <p>The total number of hours for a single instance for the entire term.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable totalScheduledInstanceHours;

@end

/**
 <p>Describes the recurring schedule for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstanceRecurrence : AWSModel


/**
 <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or <code>Monthly</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable frequency;

/**
 <p>The interval quantity. The interval unit depends on the value of <code>frequency</code>. For example, every 2 weeks or every 2 months.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable interval;

/**
 <p>The days. For a monthly schedule, this is one or more days of the month (1-31). For a weekly schedule, this is one or more days of the week (1-7, where 1 is Sunday).</p>
 */
@property (nonatomic, strong) NSArray<NSNumber *> * _Nullable occurrenceDaySet;

/**
 <p>Indicates whether the occurrence is relative to the end of the specified week or month.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable occurrenceRelativeToEnd;

/**
 <p>The unit for <code>occurrenceDaySet</code> (<code>DayOfWeek</code> or <code>DayOfMonth</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable occurrenceUnit;

@end

/**
 <p>Describes the recurring schedule for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstanceRecurrenceRequest : AWSModel


/**
 <p>The frequency (<code>Daily</code>, <code>Weekly</code>, or <code>Monthly</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable frequency;

/**
 <p>The interval quantity. The interval unit depends on the value of <code>Frequency</code>. For example, every 2 weeks or every 2 months.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable interval;

/**
 <p>The days. For a monthly schedule, this is one or more days of the month (1-31). For a weekly schedule, this is one or more days of the week (1-7, where 1 is Sunday). You can't specify this value with a daily schedule. If the occurrence is relative to the end of the month, you can specify only a single day.</p>
 */
@property (nonatomic, strong) NSArray<NSNumber *> * _Nullable occurrenceDays;

/**
 <p>Indicates whether the occurrence is relative to the end of the specified week or month. You can't specify this value with a daily schedule.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable occurrenceRelativeToEnd;

/**
 <p>The unit for <code>OccurrenceDays</code> (<code>DayOfWeek</code> or <code>DayOfMonth</code>). This value is required for a monthly schedule. You can't specify <code>DayOfWeek</code> with a weekly schedule. You can't specify this value with a daily schedule.</p>
 */
@property (nonatomic, strong) NSString * _Nullable occurrenceUnit;

@end

/**
 <p>Describes a block device mapping for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesBlockDeviceMapping : AWSModel


/**
 <p>The device name (for example, <code>/dev/sdh</code> or <code>xvdh</code>).</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>Parameters used to set up EBS volumes automatically when the instance is launched.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstancesEbs * _Nullable ebs;

/**
 <p>Suppresses the specified device included in the block device mapping of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable noDevice;

/**
 <p>The virtual device name (<code>ephemeral</code>N). Instance store volumes are numbered starting from 0. An instance type with two available instance store volumes can specify mappings for <code>ephemeral0</code> and <code>ephemeral1</code>. The number of available instance store volumes depends on the instance type. After you connect to the instance, you must mount the volume.</p><p>Constraints: For M3 instances, you must specify instance store volumes in the block device mapping for the instance. When you launch an M3 instance, we ignore any instance store volumes specified in the block device mapping for the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable virtualName;

@end

/**
 <p>Describes an EBS volume for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesEbs : AWSModel


/**
 <p>Indicates whether the volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>Indicates whether the volume is encrypted. You can attached encrypted volumes only to instances that support them.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) that the volume supports. For io1 volumes, this represents the number of IOPS that are provisioned for the volume. For <code>gp2</code> volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information about <code>gp2</code> baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p>Constraint: Range is 100-20000 IOPS for <code>io1</code> volumes and 100-10000 IOPS for <code>gp2</code> volumes.</p><p>Condition: This parameter is required for requests to create <code>io1</code>volumes; it is not used in requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or <code>standard</code> volumes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>The ID of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The size of the volume, in GiB.</p><p>Default: If you're creating the volume from a snapshot and don't specify a volume size, the default is the snapshot size.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable volumeSize;

/**
 <p>The volume type. <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS SSD, Throughput Optimized HDD for <code>st1</code>, Cold HDD for <code>sc1</code>, or <code>standard</code> for Magnetic.</p><p>Default: <code>standard</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeType;

@end

/**
 <p>Describes an IAM instance profile for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesIamInstanceProfile : AWSModel


/**
 <p>The Amazon Resource Name (ARN).</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

/**
 <p>The name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable name;

@end

/**
 <p>Describes an IPv6 address.</p>
 */
@interface AWSEC2ScheduledInstancesIpv6Address : AWSModel


/**
 <p>The IPv6 address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6Address;

@end

/**
 <p>Describes the launch specification for a Scheduled Instance.</p><p>If you are launching the Scheduled Instance in EC2-VPC, you must specify the ID of the subnet. You can specify the subnet using either <code>SubnetId</code> or <code>NetworkInterface</code>.</p>
 Required parameters: [ImageId]
 */
@interface AWSEC2ScheduledInstancesLaunchSpecification : AWSModel


/**
 <p>One or more block device mapping entries.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstancesBlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>Indicates whether the instances are optimized for EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS-optimized instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstancesIamInstanceProfile * _Nullable iamInstanceProfile;

/**
 <p>The ID of the Amazon Machine Image (AMI).</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceType;

/**
 <p>The ID of the kernel.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>Enable or disable monitoring for the instances.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstancesMonitoring * _Nullable monitoring;

/**
 <p>One or more network interfaces.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstancesNetworkInterface *> * _Nullable networkInterfaces;

/**
 <p>The placement information.</p>
 */
@property (nonatomic, strong) AWSEC2ScheduledInstancesPlacement * _Nullable placement;

/**
 <p>The ID of the RAM disk.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>The IDs of one or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable securityGroupIds;

/**
 <p>The ID of the subnet in which to launch the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The base64-encoded MIME user data.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

@end

/**
 <p>Describes whether monitoring is enabled for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesMonitoring : AWSModel


/**
 <p>Indicates whether monitoring is enabled.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

@end

/**
 <p>Describes a network interface for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesNetworkInterface : AWSModel


/**
 <p>Indicates whether to assign a public IPv4 address to instances launched in a VPC. The public IPv4 address can only be assigned to a network interface for eth0, and can only be assigned to a new network interface, not an existing one. You cannot specify more than one network interface in the request. If launching into a default subnet, the default value is <code>true</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable associatePublicIpAddress;

/**
 <p>Indicates whether to delete the interface when the instance is terminated.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The description.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The index of the device for the network interface attachment.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deviceIndex;

/**
 <p>The IDs of one or more security groups.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable groups;

/**
 <p>The number of IPv6 addresses to assign to the network interface. The IPv6 addresses are automatically selected from the subnet range.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ipv6AddressCount;

/**
 <p>One or more specific IPv6 addresses from the subnet range.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstancesIpv6Address *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The IPv4 address of the network interface within the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

/**
 <p>The private IPv4 addresses.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ScheduledInstancesPrivateIpAddressConfig *> * _Nullable privateIpAddressConfigs;

/**
 <p>The number of secondary private IPv4 addresses.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable secondaryPrivateIpAddressCount;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

@end

/**
 <p>Describes the placement for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesPlacement : AWSModel


/**
 <p>The Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The name of the placement group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

@end

/**
 <p>Describes a private IPv4 address for a Scheduled Instance.</p>
 */
@interface AWSEC2ScheduledInstancesPrivateIpAddressConfig : AWSModel


/**
 <p>Indicates whether this is a primary IPv4 address. Otherwise, this is a secondary IPv4 address.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable primary;

/**
 <p>The IPv4 address.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateIpAddress;

@end

/**
 <p>Describes a security group</p>
 */
@interface AWSEC2SecurityGroup : AWSModel


/**
 <p>A description of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>The name of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>One or more inbound rules associated with the security group.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

/**
 <p>[EC2-VPC] One or more outbound rules associated with the security group.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissionsEgress;

/**
 <p>The AWS account ID of the owner of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>Any tags assigned to the security group.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>[EC2-VPC] The ID of the VPC for the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a security group.</p>
 */
@interface AWSEC2SecurityGroupIdentifier : AWSModel


/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>The name of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

@end

/**
 <p>Describes a VPC with a security group that references your security group.</p>
 Required parameters: [GroupId, ReferencingVpcId]
 */
@interface AWSEC2SecurityGroupReference : AWSModel


/**
 <p>The ID of your security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>The ID of the VPC with the referencing security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable referencingVpcId;

/**
 <p>The ID of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Describes a service configuration for a VPC endpoint service.</p>
 */
@interface AWSEC2ServiceConfiguration : AWSModel


/**
 <p>Indicates whether requests from other AWS accounts to create an endpoint to the service must first be accepted.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable acceptanceRequired;

/**
 <p>In the Availability Zones in which the service is available.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable availabilityZones;

/**
 <p>The DNS names for the service.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable baseEndpointDnsNames;

/**
 <p>The Amazon Resource Names (ARNs) of the Network Load Balancers for the service.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable networkLoadBalancerArns;

/**
 <p>The private DNS name for the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The ID of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

/**
 <p>The name of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceName;

/**
 <p>The service state.</p>
 */
@property (nonatomic, assign) AWSEC2ServiceState serviceState;

/**
 <p>The type of service.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ServiceTypeDetail *> * _Nullable serviceType;

@end

/**
 <p>Describes a VPC endpoint service.</p>
 */
@interface AWSEC2ServiceDetail : AWSModel


/**
 <p>Indicates whether VPC endpoint connection requests to the service must be accepted by the service owner.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable acceptanceRequired;

/**
 <p>The Availability Zones in which the service is available.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable availabilityZones;

/**
 <p>The DNS names for the service.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable baseEndpointDnsNames;

/**
 <p>The AWS account ID of the service owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable owner;

/**
 <p>The private DNS name for the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable privateDnsName;

/**
 <p>The Amazon Resource Name (ARN) of the service.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceName;

/**
 <p>The type of service.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2ServiceTypeDetail *> * _Nullable serviceType;

/**
 <p>Indicates whether the service supports endpoint policies.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable vpcEndpointPolicySupported;

@end

/**
 <p>Describes the type of service for a VPC endpoint.</p>
 */
@interface AWSEC2ServiceTypeDetail : AWSModel


/**
 <p>The type of service.</p>
 */
@property (nonatomic, assign) AWSEC2ServiceType serviceType;

@end

/**
 <p>Describes the time period for a Scheduled Instance to start its first schedule. The time period must span less than one day.</p>
 Required parameters: [EarliestTime, LatestTime]
 */
@interface AWSEC2SlotDateTimeRangeRequest : AWSModel


/**
 <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable earliestTime;

/**
 <p>The latest date and time, in UTC, for the Scheduled Instance to start. This value must be later than or equal to the earliest date and at most three months in the future.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable latestTime;

@end

/**
 <p>Describes the time period for a Scheduled Instance to start its first schedule.</p>
 */
@interface AWSEC2SlotStartTimeRangeRequest : AWSModel


/**
 <p>The earliest date and time, in UTC, for the Scheduled Instance to start.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable earliestTime;

/**
 <p>The latest date and time, in UTC, for the Scheduled Instance to start.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable latestTime;

@end

/**
 <p>Describes a snapshot.</p>
 */
@interface AWSEC2Snapshot : AWSModel


/**
 <p>The data encryption key identifier for the snapshot. This value is a unique identifier that corresponds to the data encryption key that was used to encrypt the original volume or snapshot copy. Because data encryption keys are inherited by volumes created from snapshots, and vice versa, if snapshots share the same data encryption key identifier, then they belong to the same volume/snapshot lineage. This parameter is only returned by the <a>DescribeSnapshots</a> API operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable dataEncryptionKeyId;

/**
 <p>The description for the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>Indicates whether the snapshot is encrypted.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the parent volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p> Value from an Amazon-maintained list (<code>amazon</code> | <code>aws-marketplace</code> | <code>microsoft</code>) of snapshot owners. Not to be confused with the user-configured AWS account alias, which is set from the IAM console. </p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerAlias;

/**
 <p>The AWS account ID of the EBS snapshot owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The progress of the snapshot, as a percentage.</p>
 */
@property (nonatomic, strong) NSString * _Nullable progress;

/**
 <p>The ID of the snapshot. Each snapshot receives a unique identifier when it is created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The time stamp when the snapshot was initiated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>The snapshot state.</p>
 */
@property (nonatomic, assign) AWSEC2SnapshotState state;

/**
 <p>Encrypted Amazon EBS snapshots are copied asynchronously. If a snapshot copy operation fails (for example, if the proper AWS Key Management Service (AWS KMS) permissions are not obtained) this field displays error state details to help you diagnose why the error occurred. This parameter is only returned by the <a>DescribeSnapshots</a> API operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable stateMessage;

/**
 <p>Any tags assigned to the snapshot.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the volume that was used to create the snapshot. Snapshots created by the <a>CopySnapshot</a> action have an arbitrary volume ID that should not be used for any purpose.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

/**
 <p>The size of the volume, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable volumeSize;

@end

/**
 <p>Describes the snapshot created from the imported disk.</p>
 */
@interface AWSEC2SnapshotDetail : AWSModel


/**
 <p>A description for the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The block device mapping for the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable deviceName;

/**
 <p>The size of the disk in the snapshot, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable diskImageSize;

/**
 <p>The format of the disk image from which the snapshot is created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable format;

/**
 <p>The percentage of progress for the task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable progress;

/**
 <p>The snapshot ID of the disk being imported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>A brief status of the snapshot creation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>A detailed status message for the snapshot creation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>The URL used to access the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable url;

/**
 <p>The S3 bucket for the disk image.</p>
 */
@property (nonatomic, strong) AWSEC2UserBucketDetails * _Nullable userBucket;

@end

/**
 <p>The disk container object for the import snapshot request.</p>
 */
@interface AWSEC2SnapshotDiskContainer : AWSModel


/**
 <p>The description of the disk image being imported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The format of the disk image being imported.</p><p>Valid values: <code>VHD</code> | <code>VMDK</code> | <code>OVA</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable format;

/**
 <p>The URL to the Amazon S3-based disk image being imported. It can either be a https URL (https://..) or an Amazon S3 URL (s3://..).</p>
 */
@property (nonatomic, strong) NSString * _Nullable url;

/**
 <p>The S3 bucket for the disk image.</p>
 */
@property (nonatomic, strong) AWSEC2UserBucket * _Nullable userBucket;

@end

/**
 <p>Details about the import snapshot task.</p>
 */
@interface AWSEC2SnapshotTaskDetail : AWSModel


/**
 <p>The description of the snapshot.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The size of the disk in the snapshot, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable diskImageSize;

/**
 <p>The format of the disk image from which the snapshot is created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable format;

/**
 <p>The percentage of completion for the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable progress;

/**
 <p>The snapshot ID of the disk being imported.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>A brief status for the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

/**
 <p>A detailed status message for the import snapshot task.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>The URL of the disk image from which the snapshot is created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable url;

/**
 <p>The S3 bucket for the disk image.</p>
 */
@property (nonatomic, strong) AWSEC2UserBucketDetails * _Nullable userBucket;

@end

/**
 <p>Describes the data feed for a Spot Instance.</p>
 */
@interface AWSEC2SpotDatafeedSubscription : AWSModel


/**
 <p>The Amazon S3 bucket where the Spot Instance data feed is located.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucket;

/**
 <p>The fault codes for the Spot Instance request, if any.</p>
 */
@property (nonatomic, strong) AWSEC2SpotInstanceStateFault * _Nullable fault;

/**
 <p>The AWS account ID of the account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>The prefix that is prepended to data feed files.</p>
 */
@property (nonatomic, strong) NSString * _Nullable prefix;

/**
 <p>The state of the Spot Instance data feed subscription.</p>
 */
@property (nonatomic, assign) AWSEC2DatafeedSubscriptionState state;

@end

/**
 <p>Describes the launch specification for one or more Spot Instances.</p>
 */
@interface AWSEC2SpotFleetLaunchSpecification : AWSModel


/**
 <p>Deprecated.</p>
 */
@property (nonatomic, strong) NSString * _Nullable addressingType;

/**
 <p>One or more block device mapping entries. You can't specify both a snapshot ID and an encryption value. This is because only blank volumes can be encrypted on creation. If a snapshot is the basis for a volume, it is not blank and its encryption status is used for the volume encryption status.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2BlockDeviceMapping *> * _Nullable blockDeviceMappings;

/**
 <p>Indicates whether the instances are optimized for EBS I/O. This optimization provides dedicated throughput to Amazon EBS and an optimized configuration stack to provide optimal EBS I/O performance. This optimization isn't available with all instance types. Additional usage charges apply when using an EBS Optimized instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable ebsOptimized;

/**
 <p>The IAM instance profile.</p>
 */
@property (nonatomic, strong) AWSEC2IamInstanceProfileSpecification * _Nullable iamInstanceProfile;

/**
 <p>The ID of the AMI.</p>
 */
@property (nonatomic, strong) NSString * _Nullable imageId;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>The ID of the kernel.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kernelId;

/**
 <p>The name of the key pair.</p>
 */
@property (nonatomic, strong) NSString * _Nullable keyName;

/**
 <p>Enable or disable monitoring for the instances.</p>
 */
@property (nonatomic, strong) AWSEC2SpotFleetMonitoring * _Nullable monitoring;

/**
 <p>One or more network interfaces. If you specify a network interface, you must specify subnet IDs and security group IDs using the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceNetworkInterfaceSpecification *> * _Nullable networkInterfaces;

/**
 <p>The placement information.</p>
 */
@property (nonatomic, strong) AWSEC2SpotPlacement * _Nullable placement;

/**
 <p>The ID of the RAM disk.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ramdiskId;

/**
 <p>One or more security groups. When requesting instances in a VPC, you must specify the IDs of the security groups. When requesting instances in EC2-Classic, you can specify the names or the IDs of the security groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2GroupIdentifier *> * _Nullable securityGroups;

/**
 <p>The maximum price per unit hour that you are willing to pay for a Spot Instance. If this value is not specified, the default is the Spot price specified for the fleet. To determine the Spot price per unit hour, divide the Spot price by the value of <code>WeightedCapacity</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The ID of the subnet in which to launch the instances. To specify multiple subnets, separate them using commas; for example, "subnet-a61dafcf, subnet-65ea5f08".</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>The tags to apply during creation.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SpotFleetTagSpecification *> * _Nullable tagSpecifications;

/**
 <p>The Base64-encoded user data to make available to the instances.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userData;

/**
 <p>The number of units provided by the specified instance type. These are the same units that you chose to set the target capacity in terms (instances or a performance characteristic such as vCPUs, memory, or I/O).</p><p>If the target capacity divided by this value is not a whole number, we round the number of instances to the next whole number. If this value is not specified, the default is 1.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable weightedCapacity;

@end

/**
 <p>Describes whether monitoring is enabled.</p>
 */
@interface AWSEC2SpotFleetMonitoring : AWSModel


/**
 <p>Enables monitoring for the instance.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable enabled;

@end

/**
 <p>Describes a Spot Fleet request.</p>
 Required parameters: [CreateTime, SpotFleetRequestConfig, SpotFleetRequestId, SpotFleetRequestState]
 */
@interface AWSEC2SpotFleetRequestConfig : AWSModel


/**
 <p>The progress of the Spot Fleet request. If there is an error, the status is <code>error</code>. After all requests are placed, the status is <code>pending_fulfillment</code>. If the size of the fleet is equal to or greater than its target capacity, the status is <code>fulfilled</code>. If the size of the fleet is decreased, the status is <code>pending_termination</code> while Spot Instances are terminating.</p>
 */
@property (nonatomic, assign) AWSEC2ActivityStatus activityStatus;

/**
 <p>The creation date and time of the request.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>The configuration of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) AWSEC2SpotFleetRequestConfigData * _Nullable spotFleetRequestConfig;

/**
 <p>The ID of the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotFleetRequestId;

/**
 <p>The state of the Spot Fleet request.</p>
 */
@property (nonatomic, assign) AWSEC2BatchState spotFleetRequestState;

@end

/**
 <p>Describes the configuration of a Spot Fleet request.</p>
 Required parameters: [IamFleetRole, TargetCapacity]
 */
@interface AWSEC2SpotFleetRequestConfigData : AWSModel


/**
 <p>Indicates how to allocate the target capacity across the Spot pools specified by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
 */
@property (nonatomic, assign) AWSEC2AllocationStrategy allocationStrategy;

/**
 <p>A unique, case-sensitive identifier that you provide to ensure the idempotency of your listings. This helps to avoid duplicate listings. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring Idempotency</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable clientToken;

/**
 <p>Indicates whether running Spot Instances should be terminated if the target capacity of the Spot Fleet request is decreased below the current size of the Spot Fleet.</p>
 */
@property (nonatomic, assign) AWSEC2ExcessCapacityTerminationPolicy excessCapacityTerminationPolicy;

/**
 <p>The number of units fulfilled by this request compared to the set target capacity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fulfilledCapacity;

/**
 <p>Grants the Spot Fleet permission to terminate Spot Instances on your behalf when you cancel its Spot Fleet request using <a>CancelSpotFleetRequests</a> or when the Spot Fleet request expires, if you set <code>terminateInstancesWithExpiration</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable iamFleetRole;

/**
 <p>The behavior when a Spot Instance is interrupted. The default is <code>terminate</code>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceInterruptionBehavior instanceInterruptionBehavior;

/**
 <p>The launch specifications for the Spot Fleet request.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SpotFleetLaunchSpecification *> * _Nullable launchSpecifications;

/**
 <p>The launch template and overrides.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2LaunchTemplateConfig *> * _Nullable launchTemplateConfigs;

/**
 <p>One or more Classic Load Balancers and target groups to attach to the Spot Fleet request. Spot Fleet registers the running Spot Instances with the specified Classic Load Balancers and target groups.</p><p>With Network Load Balancers, Spot Fleet cannot register instances that have the following instance types: C1, CC1, CC2, CG1, CG2, CR1, CS1, G1, G2, HI1, HS1, M1, M2, M3, and T1.</p>
 */
@property (nonatomic, strong) AWSEC2LoadBalancersConfig * _Nullable loadBalancersConfig;

/**
 <p>The number of On-Demand units fulfilled by this request compared to the set target On-Demand capacity.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable onDemandFulfilledCapacity;

/**
 <p>The number of On-Demand units to request. You can choose to set the target capacity in terms of instances or a performance characteristic that is important to your application workload, such as vCPUs, memory, or I/O. If the request type is <code>maintain</code>, you can specify a target capacity of 0 and add capacity later.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable onDemandTargetCapacity;

/**
 <p>Indicates whether Spot Fleet should replace unhealthy instances.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable replaceUnhealthyInstances;

/**
 <p>The maximum price per unit hour that you are willing to pay for a Spot Instance. The default is the On-Demand price.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The number of units to request. You can choose to set the target capacity in terms of instances or a performance characteristic that is important to your application workload, such as vCPUs, memory, or I/O. If the request type is <code>maintain</code>, you can specify a target capacity of 0 and add capacity later.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable targetCapacity;

/**
 <p>Indicates whether running Spot Instances should be terminated when the Spot Fleet request expires.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable terminateInstancesWithExpiration;

/**
 <p>The type of request. Indicates whether the Spot Fleet only requests the target capacity or also attempts to maintain it. When this value is <code>request</code>, the Spot Fleet only places the required requests. It does not attempt to replenish Spot Instances if capacity is diminished, nor does it submit requests in alternative Spot pools if capacity is not available. To maintain a certain target capacity, the Spot Fleet places the required requests to meet capacity and automatically replenishes any interrupted instances. Default: <code>maintain</code>.</p>
 */
@property (nonatomic, assign) AWSEC2FleetType types;

/**
 <p>The start date and time of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The default is to start fulfilling the request immediately.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validFrom;

/**
 <p>The end date and time of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). At this point, no new Spot Instance requests are placed or able to fulfill the request. The default end date is 7 days from the current date.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>The tags for a Spot Fleet resource.</p>
 */
@interface AWSEC2SpotFleetTagSpecification : AWSModel


/**
 <p>The type of resource. Currently, the only resource type that is supported is <code>instance</code>.</p>
 */
@property (nonatomic, assign) AWSEC2ResourceType resourceType;

/**
 <p>The tags.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>Describes a Spot Instance request.</p>
 */
@interface AWSEC2SpotInstanceRequest : AWSModel


/**
 <p>If you specified a duration and your Spot Instance request was fulfilled, this is the fixed hourly price in effect for the Spot Instance while it runs.</p>
 */
@property (nonatomic, strong) NSString * _Nullable actualBlockHourlyPrice;

/**
 <p>The Availability Zone group. If you specify the same Availability Zone group for all Spot Instance requests, all Spot Instances are launched in the same Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZoneGroup;

/**
 <p>The duration for the Spot Instance, in minutes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockDurationMinutes;

/**
 <p>The date and time when the Spot Instance request was created, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>The fault codes for the Spot Instance request, if any.</p>
 */
@property (nonatomic, strong) AWSEC2SpotInstanceStateFault * _Nullable fault;

/**
 <p>The instance ID, if an instance has been launched to fulfill the Spot Instance request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The behavior when a Spot Instance is interrupted.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceInterruptionBehavior instanceInterruptionBehavior;

/**
 <p>The instance launch group. Launch groups are Spot Instances that launch together and terminate together.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchGroup;

/**
 <p>Additional information for launching instances.</p>
 */
@property (nonatomic, strong) AWSEC2LaunchSpecification * _Nullable launchSpecification;

/**
 <p>The Availability Zone in which the request is launched.</p>
 */
@property (nonatomic, strong) NSString * _Nullable launchedAvailabilityZone;

/**
 <p>The product description associated with the Spot Instance.</p>
 */
@property (nonatomic, assign) AWSEC2RIProductDescription productDescription;

/**
 <p>The ID of the Spot Instance request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotInstanceRequestId;

/**
 <p>The maximum price per hour that you are willing to pay for a Spot Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The state of the Spot Instance request. Spot status information helps track your Spot Instance requests. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html">Spot Status</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceState state;

/**
 <p>The status code and status message describing the Spot Instance request.</p>
 */
@property (nonatomic, strong) AWSEC2SpotInstanceStatus * _Nullable status;

/**
 <p>Any tags assigned to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The Spot Instance request type.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceType types;

/**
 <p>The start date of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). The request becomes active at this date and time.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validFrom;

/**
 <p>The end date of the request, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z). If this is a one-time request, it remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date is reached. The default end date is 7 days from the current date.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>Describes a Spot Instance state change.</p>
 */
@interface AWSEC2SpotInstanceStateFault : AWSModel


/**
 <p>The reason code for the Spot Instance state change.</p>
 */
@property (nonatomic, strong) NSString * _Nullable code;

/**
 <p>The message for the Spot Instance state change.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Describes the status of a Spot Instance request.</p>
 */
@interface AWSEC2SpotInstanceStatus : AWSModel


/**
 <p>The status code. For a list of status codes, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-bid-status.html#spot-instance-bid-status-understand">Spot Status Codes</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable code;

/**
 <p>The description for the status code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

/**
 <p>The date and time of the most recent status update, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable updateTime;

@end

/**
 <p>The options for Spot Instances.</p>
 */
@interface AWSEC2SpotMarketOptions : AWSModel


/**
 <p>The required duration for the Spot Instances (also known as Spot blocks), in minutes. This value must be a multiple of 60 (60, 120, 180, 240, 300, or 360).</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable blockDurationMinutes;

/**
 <p>The behavior when a Spot Instance is interrupted. The default is <code>terminate</code>.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceInterruptionBehavior instanceInterruptionBehavior;

/**
 <p>The maximum hourly price you're willing to pay for the Spot Instances. The default is the On-Demand price.</p>
 */
@property (nonatomic, strong) NSString * _Nullable maxPrice;

/**
 <p>The Spot Instance request type.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceType spotInstanceType;

/**
 <p>The end date of the request. For a one-time request, the request remains active until all instances launch, the request is canceled, or this date is reached. If the request is persistent, it remains active until it is canceled or this date and time is reached. The default end date is 7 days from the current date.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable validUntil;

@end

/**
 <p>Describes the configuration of Spot Instances in an EC2 Fleet.</p>
 */
@interface AWSEC2SpotOptions : AWSModel


/**
 <p>Indicates how to allocate the target capacity across the Spot pools specified by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
 */
@property (nonatomic, assign) AWSEC2SpotAllocationStrategy allocationStrategy;

/**
 <p>The behavior when a Spot Instance is interrupted. The default is <code>terminate</code>.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceInterruptionBehavior instanceInterruptionBehavior;

@end

/**
 <p>Describes the configuration of Spot Instances in an EC2 Fleet request.</p>
 */
@interface AWSEC2SpotOptionsRequest : AWSModel


/**
 <p>Indicates how to allocate the target capacity across the Spot pools specified by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
 */
@property (nonatomic, assign) AWSEC2SpotAllocationStrategy allocationStrategy;

/**
 <p>The behavior when a Spot Instance is interrupted. The default is <code>terminate</code>.</p>
 */
@property (nonatomic, assign) AWSEC2SpotInstanceInterruptionBehavior instanceInterruptionBehavior;

@end

/**
 <p>Describes Spot Instance placement.</p>
 */
@interface AWSEC2SpotPlacement : AWSModel


/**
 <p>The Availability Zone.</p><p>[Spot Fleet only] To specify multiple Availability Zones, separate them using commas; for example, "us-west-2a, us-west-2b".</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The name of the placement group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The tenancy of the instance (if the instance is running in a VPC). An instance with a tenancy of <code>dedicated</code> runs on single-tenant hardware. The <code>host</code> tenancy is not supported for Spot Instances.</p>
 */
@property (nonatomic, assign) AWSEC2Tenancy tenancy;

@end

/**
 <p>Describes the maximum price per hour that you are willing to pay for a Spot Instance.</p>
 */
@interface AWSEC2SpotPrice : AWSModel


/**
 <p>The Availability Zone.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The instance type.</p>
 */
@property (nonatomic, assign) AWSEC2InstanceType instanceType;

/**
 <p>A general description of the AMI.</p>
 */
@property (nonatomic, assign) AWSEC2RIProductDescription productDescription;

/**
 <p>The maximum price per hour that you are willing to pay for a Spot Instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable spotPrice;

/**
 <p>The date and time the request was created, in UTC format (for example, <i>YYYY</i>-<i>MM</i>-<i>DD</i>T<i>HH</i>:<i>MM</i>:<i>SS</i>Z).</p>
 */
@property (nonatomic, strong) NSDate * _Nullable timestamp;

@end

/**
 <p>Describes a stale rule in a security group.</p>
 */
@interface AWSEC2StaleIpPermission : AWSModel


/**
 <p>The start of the port range for the TCP and UDP protocols, or an ICMP type number. A value of <code>-1</code> indicates all ICMP types. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable fromPort;

/**
 <p>The IP protocol name (for <code>tcp</code>, <code>udp</code>, and <code>icmp</code>) or number (see <a href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol Numbers)</a>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipProtocol;

/**
 <p>One or more IP ranges. Not applicable for stale security group rules.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable ipRanges;

/**
 <p>One or more prefix list IDs for an AWS service. Not applicable for stale security group rules.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable prefixListIds;

/**
 <p>The end of the port range for the TCP and UDP protocols, or an ICMP type number. A value of <code>-1</code> indicates all ICMP types. </p>
 */
@property (nonatomic, strong) NSNumber * _Nullable toPort;

/**
 <p>One or more security group pairs. Returns the ID of the referenced security group and VPC, and the ID and status of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2UserIdGroupPair *> * _Nullable userIdGroupPairs;

@end

/**
 <p>Describes a stale security group (a security group that contains stale rules).</p>
 Required parameters: [GroupId]
 */
@interface AWSEC2StaleSecurityGroup : AWSModel


/**
 <p>The description of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>The name of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>Information about the stale inbound rules in the security group.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2StaleIpPermission *> * _Nullable staleIpPermissions;

/**
 <p>Information about the stale outbound rules in the security group.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2StaleIpPermission *> * _Nullable staleIpPermissionsEgress;

/**
 <p>The ID of the VPC for the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Contains the parameters for StartInstances.</p>
 Required parameters: [InstanceIds]
 */
@interface AWSEC2StartInstancesRequest : AWSRequest


/**
 <p>Reserved.</p>
 */
@property (nonatomic, strong) NSString * _Nullable additionalInfo;

/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Contains the output of StartInstances.</p>
 */
@interface AWSEC2StartInstancesResult : AWSModel


/**
 <p>Information about one or more started instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceStateChange *> * _Nullable startingInstances;

@end

/**
 <p>Describes a state change.</p>
 */
@interface AWSEC2StateReason : AWSModel


/**
 <p>The reason code for the state change.</p>
 */
@property (nonatomic, strong) NSString * _Nullable code;

/**
 <p>The message for the state change.</p><ul><li><p><code>Server.InsufficientInstanceCapacity</code>: There was insufficient instance capacity to satisfy the launch request.</p></li><li><p><code>Server.InternalError</code>: An internal error occurred during instance launch, resulting in termination.</p></li><li><p><code>Server.ScheduledStop</code>: The instance was stopped due to a scheduled retirement.</p></li><li><p><code>Server.SpotInstanceTermination</code>: A Spot Instance was terminated due to an increase in the Spot price.</p></li><li><p><code>Client.InternalError</code>: A client error caused the instance to terminate on launch.</p></li><li><p><code>Client.InstanceInitiatedShutdown</code>: The instance was shut down using the <code>shutdown -h</code> command from the instance.</p></li><li><p><code>Client.InstanceTerminated</code>: The instance was terminated or rebooted during AMI creation.</p></li><li><p><code>Client.UserInitiatedShutdown</code>: The instance was shut down using the Amazon EC2 API.</p></li><li><p><code>Client.VolumeLimitExceeded</code>: The limit on the number of EBS volumes or total storage was exceeded. Decrease usage or request an increase in your limits.</p></li><li><p><code>Client.InvalidSnapshot.NotFound</code>: The specified snapshot was not found.</p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Contains the parameters for StopInstances.</p>
 Required parameters: [InstanceIds]
 */
@interface AWSEC2StopInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>Forces the instances to stop. The instances do not have an opportunity to flush file system caches or file system metadata. If you use this option, you must perform file system check and repair procedures. This option is not recommended for Windows instances.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable force;

/**
 <p>One or more instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Contains the output of StopInstances.</p>
 */
@interface AWSEC2StopInstancesResult : AWSModel


/**
 <p>Information about one or more stopped instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceStateChange *> * _Nullable stoppingInstances;

@end

/**
 <p>Describes the storage location for an instance store-backed AMI.</p>
 */
@interface AWSEC2Storage : AWSModel


/**
 <p>An Amazon S3 storage location.</p>
 */
@property (nonatomic, strong) AWSEC2S3Storage * _Nullable s3;

@end

/**
 <p>Describes a storage location in Amazon S3.</p>
 */
@interface AWSEC2StorageLocation : AWSModel


/**
 <p>The name of the S3 bucket.</p>
 */
@property (nonatomic, strong) NSString * _Nullable bucket;

/**
 <p>The key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

@end

/**
 <p>Describes a subnet.</p>
 */
@interface AWSEC2Subnet : AWSModel


/**
 <p>Indicates whether a network interface created in this subnet (including a network interface created by <a>RunInstances</a>) receives an IPv6 address.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable assignIpv6AddressOnCreation;

/**
 <p>The Availability Zone of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The number of unused private IPv4 addresses in the subnet. Note that the IPv4 addresses for any stopped instances are considered unavailable.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable availableIpAddressCount;

/**
 <p>The IPv4 CIDR block assigned to the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Indicates whether this is the default subnet for the Availability Zone.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable defaultForAz;

/**
 <p>Information about the IPv6 CIDR blocks associated with the subnet.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SubnetIpv6CidrBlockAssociation *> * _Nullable ipv6CidrBlockAssociationSet;

/**
 <p>Indicates whether instances launched in this subnet receive a public IPv4 address.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable mapPublicIpOnLaunch;

/**
 <p>The current state of the subnet.</p>
 */
@property (nonatomic, assign) AWSEC2SubnetState state;

/**
 <p>The ID of the subnet.</p>
 */
@property (nonatomic, strong) NSString * _Nullable subnetId;

/**
 <p>Any tags assigned to the subnet.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC the subnet is in.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes the state of a CIDR block.</p>
 */
@interface AWSEC2SubnetCidrBlockState : AWSModel


/**
 <p>The state of a CIDR block.</p>
 */
@property (nonatomic, assign) AWSEC2SubnetCidrBlockStateCode state;

/**
 <p>A message about the status of the CIDR block, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes an IPv6 CIDR block associated with a subnet.</p>
 */
@interface AWSEC2SubnetIpv6CidrBlockAssociation : AWSModel


/**
 <p>The association ID for the CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>The IPv6 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>Information about the state of the CIDR block.</p>
 */
@property (nonatomic, strong) AWSEC2SubnetCidrBlockState * _Nullable ipv6CidrBlockState;

@end

/**
 <p>Describes the T2 instance whose credit option for CPU usage was successfully modified.</p>
 */
@interface AWSEC2SuccessfulInstanceCreditSpecificationItem : AWSModel


/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Describes a tag.</p>
 */
@interface AWSEC2Tag : AWSModel


/**
 <p>The key of the tag.</p><p>Constraints: Tag keys are case-sensitive and accept a maximum of 127 Unicode characters. May not begin with <code>aws:</code></p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 <p>The value of the tag.</p><p>Constraints: Tag values are case-sensitive and accept a maximum of 255 Unicode characters.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>Describes a tag.</p>
 */
@interface AWSEC2TagDescription : AWSModel


/**
 <p>The tag key.</p>
 */
@property (nonatomic, strong) NSString * _Nullable key;

/**
 <p>The ID of the resource. For example, <code>ami-1a2b3c4d</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceId;

/**
 <p>The resource type.</p>
 */
@property (nonatomic, assign) AWSEC2ResourceType resourceType;

/**
 <p>The tag value.</p>
 */
@property (nonatomic, strong) NSString * _Nullable value;

@end

/**
 <p>The tags to apply to a resource when the resource is being created.</p>
 */
@interface AWSEC2TagSpecification : AWSModel


/**
 <p>The type of resource to tag. Currently, the resource types that support tagging on creation are <code>instance</code>, <code>snapshot</code>, and <code>volume</code>. </p>
 */
@property (nonatomic, assign) AWSEC2ResourceType resourceType;

/**
 <p>The tags to apply to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

@end

/**
 <p>The number of units to request. You can choose to set the target capacity in terms of instances or a performance characteristic that is important to your application workload, such as vCPUs, memory, or I/O. If the request type is <code>maintain</code>, you can specify a target capacity of 0 and add capacity later.</p>
 */
@interface AWSEC2TargetCapacitySpecification : AWSModel


/**
 <p>The default <code>TotalTargetCapacity</code>, which is either <code>Spot</code> or <code>On-Demand</code>.</p>
 */
@property (nonatomic, assign) AWSEC2DefaultTargetCapacityType defaultTargetCapacityType;

/**
 <p>The number of On-Demand units to request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable onDemandTargetCapacity;

/**
 <p>The maximum number of Spot units to launch.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable spotTargetCapacity;

/**
 <p>The number of units to request, filled using <code>DefaultTargetCapacityType</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable totalTargetCapacity;

@end

/**
 <p>The number of units to request. You can choose to set the target capacity in terms of instances or a performance characteristic that is important to your application workload, such as vCPUs, memory, or I/O. If the request type is <code>maintain</code>, you can specify a target capacity of 0 and add capacity later.</p>
 Required parameters: [TotalTargetCapacity]
 */
@interface AWSEC2TargetCapacitySpecificationRequest : AWSModel


/**
 <p>The default <code>TotalTargetCapacity</code>, which is either <code>Spot</code> or <code>On-Demand</code>.</p>
 */
@property (nonatomic, assign) AWSEC2DefaultTargetCapacityType defaultTargetCapacityType;

/**
 <p>The number of On-Demand units to request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable onDemandTargetCapacity;

/**
 <p>The number of Spot units to request.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable spotTargetCapacity;

/**
 <p>The number of units to request, filled using <code>DefaultTargetCapacityType</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable totalTargetCapacity;

@end

/**
 <p>Information about the Convertible Reserved Instance offering.</p>
 */
@interface AWSEC2TargetConfiguration : AWSModel


/**
 <p>The number of instances the Convertible Reserved Instance offering can be applied to. This parameter is reserved and cannot be specified in a request</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The ID of the Convertible Reserved Instance offering.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

@end

/**
 <p>Details about the target configuration.</p>
 Required parameters: [OfferingId]
 */
@interface AWSEC2TargetConfigurationRequest : AWSModel


/**
 <p>The number of instances the Covertible Reserved Instance offering can be applied to. This parameter is reserved and cannot be specified in a request</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable instanceCount;

/**
 <p>The Convertible Reserved Instance offering ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable offeringId;

@end

/**
 <p>Describes a load balancer target group.</p>
 Required parameters: [Arn]
 */
@interface AWSEC2TargetGroup : AWSModel


/**
 <p>The Amazon Resource Name (ARN) of the target group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable arn;

@end

/**
 <p>Describes the target groups to attach to a Spot Fleet. Spot Fleet registers the running Spot Instances with these target groups.</p>
 Required parameters: [TargetGroups]
 */
@interface AWSEC2TargetGroupsConfig : AWSModel


/**
 <p>One or more target groups.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2TargetGroup *> * _Nullable targetGroups;

@end

/**
 <p>The total value of the new Convertible Reserved Instances.</p>
 */
@interface AWSEC2TargetReservationValue : AWSModel


/**
 <p>The total value of the Convertible Reserved Instances that make up the exchange. This is the sum of the list value, remaining upfront price, and additional upfront cost of the exchange.</p>
 */
@property (nonatomic, strong) AWSEC2ReservationValue * _Nullable reservationValue;

/**
 <p>The configuration of the Convertible Reserved Instances that make up the exchange.</p>
 */
@property (nonatomic, strong) AWSEC2TargetConfiguration * _Nullable targetConfiguration;

@end

/**
 <p>Contains the parameters for TerminateInstances.</p>
 Required parameters: [InstanceIds]
 */
@interface AWSEC2TerminateInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more instance IDs.</p><p>Constraints: Up to 1000 instance IDs. We recommend breaking up this request into smaller batches.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Contains the output of TerminateInstances.</p>
 */
@interface AWSEC2TerminateInstancesResult : AWSModel


/**
 <p>Information about one or more terminated instances.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceStateChange *> * _Nullable terminatingInstances;

@end

/**
 
 */
@interface AWSEC2UnassignIpv6AddressesRequest : AWSRequest


/**
 <p>The IPv6 addresses to unassign from the network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable ipv6Addresses;

/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

@end

/**
 
 */
@interface AWSEC2UnassignIpv6AddressesResult : AWSModel


/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The IPv6 addresses that have been unassigned from the network interface.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable unassignedIpv6Addresses;

@end

/**
 <p>Contains the parameters for UnassignPrivateIpAddresses.</p>
 Required parameters: [NetworkInterfaceId, PrivateIpAddresses]
 */
@interface AWSEC2UnassignPrivateIpAddressesRequest : AWSRequest


/**
 <p>The ID of the network interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable networkInterfaceId;

/**
 <p>The secondary private IP addresses to unassign from the network interface. You can specify this option multiple times to unassign more than one IP address.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable privateIpAddresses;

@end

/**
 <p>Contains the parameters for UnmonitorInstances.</p>
 Required parameters: [InstanceIds]
 */
@interface AWSEC2UnmonitorInstancesRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>One or more instance IDs.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable instanceIds;

@end

/**
 <p>Contains the output of UnmonitorInstances.</p>
 */
@interface AWSEC2UnmonitorInstancesResult : AWSModel


/**
 <p>The monitoring information.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2InstanceMonitoring *> * _Nullable instanceMonitorings;

@end

/**
 <p>Describes the T2 instance whose credit option for CPU usage was not modified.</p>
 */
@interface AWSEC2UnsuccessfulInstanceCreditSpecificationItem : AWSModel


/**
 <p>The applicable error for the T2 instance whose credit option for CPU usage was not modified.</p>
 */
@property (nonatomic, strong) AWSEC2UnsuccessfulInstanceCreditSpecificationItemError * _Nullable error;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

@end

/**
 <p>Information about the error for the T2 instance whose credit option for CPU usage was not modified.</p>
 */
@interface AWSEC2UnsuccessfulInstanceCreditSpecificationItemError : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, assign) AWSEC2UnsuccessfulInstanceCreditSpecificationErrorCode code;

/**
 <p>The applicable error message.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Information about items that were not successfully processed in a batch call.</p>
 Required parameters: [Error]
 */
@interface AWSEC2UnsuccessfulItem : AWSModel


/**
 <p>Information about the error.</p>
 */
@property (nonatomic, strong) AWSEC2UnsuccessfulItemError * _Nullable error;

/**
 <p>The ID of the resource.</p>
 */
@property (nonatomic, strong) NSString * _Nullable resourceId;

@end

/**
 <p>Information about the error that occurred. For more information about errors, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/errors-overview.html">Error Codes</a>.</p>
 Required parameters: [Code, Message]
 */
@interface AWSEC2UnsuccessfulItemError : AWSModel


/**
 <p>The error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable code;

/**
 <p>The error message accompanying the error code.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Contains the parameters for UpdateSecurityGroupRuleDescriptionsEgress.</p>
 Required parameters: [IpPermissions]
 */
@interface AWSEC2UpdateSecurityGroupRuleDescriptionsEgressRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the security group. You must specify either the security group ID or the security group name in the request. For security groups in a nondefault VPC, you must specify the security group ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>[Default VPC] The name of the security group. You must specify either the security group ID or the security group name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The IP permissions for the security group rule.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

@end

/**
 <p>Contains the output of UpdateSecurityGroupRuleDescriptionsEgress.</p>
 */
@interface AWSEC2UpdateSecurityGroupRuleDescriptionsEgressResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Contains the parameters for UpdateSecurityGroupRuleDescriptionsIngress.</p>
 Required parameters: [IpPermissions]
 */
@interface AWSEC2UpdateSecurityGroupRuleDescriptionsIngressRequest : AWSRequest


/**
 <p>Checks whether you have the required permissions for the action, without actually making the request, and provides an error response. If you have the required permissions, the error response is <code>DryRunOperation</code>. Otherwise, it is <code>UnauthorizedOperation</code>.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable dryRun;

/**
 <p>The ID of the security group. You must specify either the security group ID or the security group name in the request. For security groups in a nondefault VPC, you must specify the security group ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>[EC2-Classic, default VPC] The name of the security group. You must specify either the security group ID or the security group name in the request.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The IP permissions for the security group rule. </p>
 */
@property (nonatomic, strong) NSArray<AWSEC2IpPermission *> * _Nullable ipPermissions;

@end

/**
 <p>Contains the output of UpdateSecurityGroupRuleDescriptionsIngress.</p>
 */
@interface AWSEC2UpdateSecurityGroupRuleDescriptionsIngressResult : AWSModel


/**
 <p>Returns <code>true</code> if the request succeeds; otherwise, returns an error.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable returned;

@end

/**
 <p>Describes the S3 bucket for the disk image.</p>
 */
@interface AWSEC2UserBucket : AWSModel


/**
 <p>The name of the S3 bucket where the disk image is located.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Bucket;

/**
 <p>The file name of the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Key;

@end

/**
 <p>Describes the S3 bucket for the disk image.</p>
 */
@interface AWSEC2UserBucketDetails : AWSModel


/**
 <p>The S3 bucket from which the disk image was created.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Bucket;

/**
 <p>The file name of the disk image.</p>
 */
@property (nonatomic, strong) NSString * _Nullable s3Key;

@end

/**
 <p>Describes the user data for an instance.</p>
 */
@interface AWSEC2UserData : AWSModel


/**
 <p>The user data. If you are using an AWS SDK or command line tool, Base64-encoding is performed for you, and you can load the text from a file. Otherwise, you must provide Base64-encoded text.</p>
 */
@property (nonatomic, strong) NSString * _Nullable data;

@end

/**
 <p>Describes a security group and AWS account ID pair.</p>
 */
@interface AWSEC2UserIdGroupPair : AWSModel


/**
 <p>A description for the security group rule that references this user ID group pair.</p><p>Constraints: Up to 255 characters in length. Allowed characters are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the security group.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupId;

/**
 <p>The name of the security group. In a request, use this parameter for a security group in EC2-Classic or a default VPC only. For a security group in a nondefault VPC, use the security group ID. </p><p>For a referenced security group in another VPC, this value is not returned if the referenced security group is deleted.</p>
 */
@property (nonatomic, strong) NSString * _Nullable groupName;

/**
 <p>The status of a VPC peering connection, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable peeringStatus;

/**
 <p>The ID of an AWS account.</p><p>For a referenced security group in another VPC, the account ID of the referenced security group is returned in the response. If the referenced security group is deleted, this value is not returned.</p><p>[EC2-Classic] Required when adding or removing rules that reference a security group in another AWS account.</p>
 */
@property (nonatomic, strong) NSString * _Nullable userId;

/**
 <p>The ID of the VPC for the referenced security group, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

/**
 <p>The ID of the VPC peering connection, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Describes telemetry for a VPN tunnel.</p>
 */
@interface AWSEC2VgwTelemetry : AWSModel


/**
 <p>The number of accepted routes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable acceptedRouteCount;

/**
 <p>The date and time of the last change in status.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable lastStatusChange;

/**
 <p>The Internet-routable IP address of the virtual private gateway's outside interface.</p>
 */
@property (nonatomic, strong) NSString * _Nullable outsideIpAddress;

/**
 <p>The status of the VPN tunnel.</p>
 */
@property (nonatomic, assign) AWSEC2TelemetryStatus status;

/**
 <p>If an error occurs, a description of the error.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes a volume.</p>
 */
@interface AWSEC2Volume : AWSModel


/**
 <p>Information about the volume attachments.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VolumeAttachment *> * _Nullable attachments;

/**
 <p>The Availability Zone for the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The time stamp when volume creation was initiated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable createTime;

/**
 <p>Indicates whether the volume will be encrypted.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable encrypted;

/**
 <p>The number of I/O operations per second (IOPS) that the volume supports. For Provisioned IOPS SSD volumes, this represents the number of IOPS that are provisioned for the volume. For General Purpose SSD volumes, this represents the baseline performance of the volume and the rate at which the volume accumulates I/O credits for bursting. For more information on General Purpose SSD baseline performance, I/O credits, and bursting, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/EBSVolumeTypes.html">Amazon EBS Volume Types</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p><p>Constraint: Range is 100-32000 IOPS for io1 volumes and 100-10000 IOPS for <code>gp2</code> volumes.</p><p>Condition: This parameter is required for requests to create <code>io1</code> volumes; it is not used in requests to create <code>gp2</code>, <code>st1</code>, <code>sc1</code>, or <code>standard</code> volumes.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable iops;

/**
 <p>The full ARN of the AWS Key Management Service (AWS KMS) customer master key (CMK) that was used to protect the volume encryption key for the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable kmsKeyId;

/**
 <p>The size of the volume, in GiBs.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable size;

/**
 <p>The snapshot from which the volume was created, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable snapshotId;

/**
 <p>The volume state.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeState state;

/**
 <p>Any tags assigned to the volume.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

/**
 <p>The volume type. This can be <code>gp2</code> for General Purpose SSD, <code>io1</code> for Provisioned IOPS SSD, <code>st1</code> for Throughput Optimized HDD, <code>sc1</code> for Cold HDD, or <code>standard</code> for Magnetic volumes.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeType volumeType;

@end

/**
 <p>Describes volume attachment details.</p>
 */
@interface AWSEC2VolumeAttachment : AWSModel


/**
 <p>The time stamp when the attachment initiated.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable attachTime;

/**
 <p>Indicates whether the EBS volume is deleted on instance termination.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable deleteOnTermination;

/**
 <p>The device name.</p>
 */
@property (nonatomic, strong) NSString * _Nullable device;

/**
 <p>The ID of the instance.</p>
 */
@property (nonatomic, strong) NSString * _Nullable instanceId;

/**
 <p>The attachment state of the volume.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeAttachmentState state;

/**
 <p>The ID of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Describes an EBS volume.</p>
 Required parameters: [Size]
 */
@interface AWSEC2VolumeDetail : AWSModel


/**
 <p>The size of the volume, in GiB.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable size;

@end

/**
 <p>Describes the modification status of an EBS volume.</p><p>If the volume has never been modified, some element values will be null.</p>
 */
@interface AWSEC2VolumeModification : AWSModel


/**
 <p>Modification completion or failure time.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable endTime;

/**
 <p>Current state of modification. Modification state is null for unmodified volumes. </p>
 */
@property (nonatomic, assign) AWSEC2VolumeModificationState modificationState;

/**
 <p>Original IOPS rate of the volume being modified.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable originalIops;

/**
 <p>Original size of the volume being modified.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable originalSize;

/**
 <p>Original EBS volume type of the volume being modified.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeType originalVolumeType;

/**
 <p>Modification progress from 0 to 100%.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable progress;

/**
 <p>Modification start time </p>
 */
@property (nonatomic, strong) NSDate * _Nullable startTime;

/**
 <p>Generic status message on modification progress or failure.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

/**
 <p>Target IOPS rate of the volume being modified.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable targetIops;

/**
 <p>Target size of the volume being modified.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable targetSize;

/**
 <p>Target EBS volume type of the volume being modified.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeType targetVolumeType;

/**
 <p>ID of the volume being modified.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

@end

/**
 <p>Describes a volume status operation code.</p>
 */
@interface AWSEC2VolumeStatusAction : AWSModel


/**
 <p>The code identifying the operation, for example, <code>enable-volume-io</code>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable code;

/**
 <p>A description of the operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of the event associated with this operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable eventId;

/**
 <p>The event type associated with this operation.</p>
 */
@property (nonatomic, strong) NSString * _Nullable eventType;

@end

/**
 <p>Describes a volume status.</p>
 */
@interface AWSEC2VolumeStatusDetails : AWSModel


/**
 <p>The name of the volume status.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeStatusName name;

/**
 <p>The intended status of the volume status.</p>
 */
@property (nonatomic, strong) NSString * _Nullable status;

@end

/**
 <p>Describes a volume status event.</p>
 */
@interface AWSEC2VolumeStatusEvent : AWSModel


/**
 <p>A description of the event.</p>
 */
@property (nonatomic, strong) NSString * _Nullable detail;

/**
 <p>The ID of this event.</p>
 */
@property (nonatomic, strong) NSString * _Nullable eventId;

/**
 <p>The type of this event.</p>
 */
@property (nonatomic, strong) NSString * _Nullable eventType;

/**
 <p>The latest end time of the event.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable notAfter;

/**
 <p>The earliest start time of the event.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable notBefore;

@end

/**
 <p>Describes the status of a volume.</p>
 */
@interface AWSEC2VolumeStatusInfo : AWSModel


/**
 <p>The details of the volume status.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VolumeStatusDetails *> * _Nullable details;

/**
 <p>The status of the volume.</p>
 */
@property (nonatomic, assign) AWSEC2VolumeStatusInfoStatus status;

@end

/**
 <p>Describes the volume status.</p>
 */
@interface AWSEC2VolumeStatusItem : AWSModel


/**
 <p>The details of the operation.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VolumeStatusAction *> * _Nullable actions;

/**
 <p>The Availability Zone of the volume.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>A list of events associated with the volume.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VolumeStatusEvent *> * _Nullable events;

/**
 <p>The volume ID.</p>
 */
@property (nonatomic, strong) NSString * _Nullable volumeId;

/**
 <p>The volume status.</p>
 */
@property (nonatomic, strong) AWSEC2VolumeStatusInfo * _Nullable volumeStatus;

@end

/**
 <p>Describes a VPC.</p>
 */
@interface AWSEC2Vpc : AWSModel


/**
 <p>The primary IPv4 CIDR block for the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Information about the IPv4 CIDR blocks associated with the VPC.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcCidrBlockAssociation *> * _Nullable cidrBlockAssociationSet;

/**
 <p>The ID of the set of DHCP options you've associated with the VPC (or <code>default</code> if the default options are associated with the VPC).</p>
 */
@property (nonatomic, strong) NSString * _Nullable dhcpOptionsId;

/**
 <p>The allowed tenancy of instances launched into the VPC.</p>
 */
@property (nonatomic, assign) AWSEC2Tenancy instanceTenancy;

/**
 <p>Information about the IPv6 CIDR blocks associated with the VPC.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcIpv6CidrBlockAssociation *> * _Nullable ipv6CidrBlockAssociationSet;

/**
 <p>Indicates whether the VPC is the default VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable isDefault;

/**
 <p>The current state of the VPC.</p>
 */
@property (nonatomic, assign) AWSEC2VpcState state;

/**
 <p>Any tags assigned to the VPC.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes an attachment between a virtual private gateway and a VPC.</p>
 */
@interface AWSEC2VpcAttachment : AWSModel


/**
 <p>The current state of the attachment.</p>
 */
@property (nonatomic, assign) AWSEC2AttachmentStatus state;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes an IPv4 CIDR block associated with a VPC.</p>
 */
@interface AWSEC2VpcCidrBlockAssociation : AWSModel


/**
 <p>The association ID for the IPv4 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>The IPv4 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Information about the state of the CIDR block.</p>
 */
@property (nonatomic, strong) AWSEC2VpcCidrBlockState * _Nullable cidrBlockState;

@end

/**
 <p>Describes the state of a CIDR block.</p>
 */
@interface AWSEC2VpcCidrBlockState : AWSModel


/**
 <p>The state of the CIDR block.</p>
 */
@property (nonatomic, assign) AWSEC2VpcCidrBlockStateCode state;

/**
 <p>A message about the status of the CIDR block, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable statusMessage;

@end

/**
 <p>Describes whether a VPC is enabled for ClassicLink.</p>
 */
@interface AWSEC2VpcClassicLink : AWSModel


/**
 <p>Indicates whether the VPC is enabled for ClassicLink.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable classicLinkEnabled;

/**
 <p>Any tags assigned to the VPC.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a VPC endpoint.</p>
 */
@interface AWSEC2VpcEndpoint : AWSModel


/**
 <p>The date and time the VPC endpoint was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationTimestamp;

/**
 <p>(Interface endpoint) The DNS entries for the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2DnsEntry *> * _Nullable dnsEntries;

/**
 <p>(Interface endpoint) Information about the security groups associated with the network interface.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2SecurityGroupIdentifier *> * _Nullable groups;

/**
 <p>(Interface endpoint) One or more network interfaces for the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable networkInterfaceIds;

/**
 <p>The policy document associated with the endpoint, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable policyDocument;

/**
 <p>(Interface endpoint) Indicates whether the VPC is associated with a private hosted zone.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable privateDnsEnabled;

/**
 <p>(Gateway endpoint) One or more route tables associated with the endpoint.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable routeTableIds;

/**
 <p>The name of the service to which the endpoint is associated.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceName;

/**
 <p>The state of the VPC endpoint.</p>
 */
@property (nonatomic, assign) AWSEC2State state;

/**
 <p>(Interface endpoint) One or more subnets in which the endpoint is located.</p>
 */
@property (nonatomic, strong) NSArray<NSString *> * _Nullable subnetIds;

/**
 <p>The ID of the VPC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointId;

/**
 <p>The type of endpoint.</p>
 */
@property (nonatomic, assign) AWSEC2VpcEndpointType vpcEndpointType;

/**
 <p>The ID of the VPC to which the endpoint is associated.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a VPC endpoint connection to a service.</p>
 */
@interface AWSEC2VpcEndpointConnection : AWSModel


/**
 <p>The date and time the VPC endpoint was created.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable creationTimestamp;

/**
 <p>The ID of the service to which the endpoint is connected.</p>
 */
@property (nonatomic, strong) NSString * _Nullable serviceId;

/**
 <p>The ID of the VPC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointId;

/**
 <p>The AWS account ID of the owner of the VPC endpoint.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcEndpointOwner;

/**
 <p>The state of the VPC endpoint.</p>
 */
@property (nonatomic, assign) AWSEC2State vpcEndpointState;

@end

/**
 <p>Describes an IPv6 CIDR block associated with a VPC.</p>
 */
@interface AWSEC2VpcIpv6CidrBlockAssociation : AWSModel


/**
 <p>The association ID for the IPv6 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable associationId;

/**
 <p>The IPv6 CIDR block.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ipv6CidrBlock;

/**
 <p>Information about the state of the CIDR block.</p>
 */
@property (nonatomic, strong) AWSEC2VpcCidrBlockState * _Nullable ipv6CidrBlockState;

@end

/**
 <p>Describes a VPC peering connection.</p>
 */
@interface AWSEC2VpcPeeringConnection : AWSModel


/**
 <p>Information about the accepter VPC. CIDR block information is only returned when describing an active VPC peering connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpcPeeringConnectionVpcInfo * _Nullable accepterVpcInfo;

/**
 <p>The time that an unaccepted VPC peering connection will expire.</p>
 */
@property (nonatomic, strong) NSDate * _Nullable expirationTime;

/**
 <p>Information about the requester VPC. CIDR block information is only returned when describing an active VPC peering connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpcPeeringConnectionVpcInfo * _Nullable requesterVpcInfo;

/**
 <p>The status of the VPC peering connection.</p>
 */
@property (nonatomic, strong) AWSEC2VpcPeeringConnectionStateReason * _Nullable status;

/**
 <p>Any tags assigned to the resource.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The ID of the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcPeeringConnectionId;

@end

/**
 <p>Describes the VPC peering connection options.</p>
 */
@interface AWSEC2VpcPeeringConnectionOptionsDescription : AWSModel


/**
 <p>Indicates whether a local VPC can resolve public DNS hostnames to private IP addresses when queried from instances in a peer VPC.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowDnsResolutionFromRemoteVpc;

/**
 <p>Indicates whether a local ClassicLink connection can communicate with the peer VPC over the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowEgressFromLocalClassicLinkToRemoteVpc;

/**
 <p>Indicates whether a local VPC can communicate with a ClassicLink connection in the peer VPC over the VPC peering connection.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable allowEgressFromLocalVpcToRemoteClassicLink;

@end

/**
 <p>Describes the status of a VPC peering connection.</p>
 */
@interface AWSEC2VpcPeeringConnectionStateReason : AWSModel


/**
 <p>The status of the VPC peering connection.</p>
 */
@property (nonatomic, assign) AWSEC2VpcPeeringConnectionStateReasonCode code;

/**
 <p>A message that provides more information about the status, if applicable.</p>
 */
@property (nonatomic, strong) NSString * _Nullable message;

@end

/**
 <p>Describes a VPC in a VPC peering connection.</p>
 */
@interface AWSEC2VpcPeeringConnectionVpcInfo : AWSModel


/**
 <p>The IPv4 CIDR block for the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable cidrBlock;

/**
 <p>Information about the IPv4 CIDR blocks for the VPC.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2CidrBlock *> * _Nullable cidrBlockSet;

/**
 <p>The IPv6 CIDR block for the VPC.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Ipv6CidrBlock *> * _Nullable ipv6CidrBlockSet;

/**
 <p>The AWS account ID of the VPC owner.</p>
 */
@property (nonatomic, strong) NSString * _Nullable ownerId;

/**
 <p>Information about the VPC peering connection options for the accepter or requester VPC.</p>
 */
@property (nonatomic, strong) AWSEC2VpcPeeringConnectionOptionsDescription * _Nullable peeringOptions;

/**
 <p>The region in which the VPC is located.</p>
 */
@property (nonatomic, strong) NSString * _Nullable region;

/**
 <p>The ID of the VPC.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpcId;

@end

/**
 <p>Describes a VPN connection.</p>
 */
@interface AWSEC2VpnConnection : AWSModel


/**
 <p>The category of the VPN connection. A value of <code>VPN</code> indicates an AWS VPN connection. A value of <code>VPN-Classic</code> indicates an AWS Classic VPN connection. For more information, see <a href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/VPC_VPN.html#vpn-categories">AWS Managed VPN Categories</a> in the <i>Amazon Virtual Private Cloud User Guide</i>.</p>
 */
@property (nonatomic, strong) NSString * _Nullable category;

/**
 <p>The configuration information for the VPN connection's customer gateway (in the native XML format). This element is always present in the <a>CreateVpnConnection</a> response; however, it's present in the <a>DescribeVpnConnections</a> response only if the VPN connection is in the <code>pending</code> or <code>available</code> state.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customerGatewayConfiguration;

/**
 <p>The ID of the customer gateway at your end of the VPN connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable customerGatewayId;

/**
 <p>The VPN connection options.</p>
 */
@property (nonatomic, strong) AWSEC2VpnConnectionOptions * _Nullable options;

/**
 <p>The static routes associated with the VPN connection.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpnStaticRoute *> * _Nullable routes;

/**
 <p>The current state of the VPN connection.</p>
 */
@property (nonatomic, assign) AWSEC2VpnState state;

/**
 <p>Any tags assigned to the VPN connection.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The type of VPN connection.</p>
 */
@property (nonatomic, assign) AWSEC2GatewayType types;

/**
 <p>Information about the VPN tunnel.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VgwTelemetry *> * _Nullable vgwTelemetry;

/**
 <p>The ID of the VPN connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnConnectionId;

/**
 <p>The ID of the virtual private gateway at the AWS side of the VPN connection.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnGatewayId;

@end

/**
 <p>Describes VPN connection options.</p>
 */
@interface AWSEC2VpnConnectionOptions : AWSModel


/**
 <p>Indicates whether the VPN connection uses static routes only. Static routes must be used for devices that don't support BGP.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable staticRoutesOnly;

@end

/**
 <p>Describes VPN connection options.</p>
 */
@interface AWSEC2VpnConnectionOptionsSpecification : AWSModel


/**
 <p>Indicate whether the VPN connection uses static routes only. If you are creating a VPN connection for a device that does not support BGP, you must specify <code>true</code>. Use <a>CreateVpnConnectionRoute</a> to create a static route.</p><p>Default: <code>false</code></p>
 */
@property (nonatomic, strong) NSNumber * _Nullable staticRoutesOnly;

/**
 <p>The tunnel options for the VPN connection.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpnTunnelOptionsSpecification *> * _Nullable tunnelOptions;

@end

/**
 <p>Describes a virtual private gateway.</p>
 */
@interface AWSEC2VpnGateway : AWSModel


/**
 <p>The private Autonomous System Number (ASN) for the Amazon side of a BGP session.</p>
 */
@property (nonatomic, strong) NSNumber * _Nullable amazonSideAsn;

/**
 <p>The Availability Zone where the virtual private gateway was created, if applicable. This field may be empty or not returned.</p>
 */
@property (nonatomic, strong) NSString * _Nullable availabilityZone;

/**
 <p>The current state of the virtual private gateway.</p>
 */
@property (nonatomic, assign) AWSEC2VpnState state;

/**
 <p>Any tags assigned to the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2Tag *> * _Nullable tags;

/**
 <p>The type of VPN connection the virtual private gateway supports.</p>
 */
@property (nonatomic, assign) AWSEC2GatewayType types;

/**
 <p>Any VPCs attached to the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSArray<AWSEC2VpcAttachment *> * _Nullable vpcAttachments;

/**
 <p>The ID of the virtual private gateway.</p>
 */
@property (nonatomic, strong) NSString * _Nullable vpnGatewayId;

@end

/**
 <p>Describes a static route for a VPN connection.</p>
 */
@interface AWSEC2VpnStaticRoute : AWSModel


/**
 <p>The CIDR block associated with the local subnet of the customer data center.</p>
 */
@property (nonatomic, strong) NSString * _Nullable destinationCidrBlock;

/**
 <p>Indicates how the routes were provided.</p>
 */
@property (nonatomic, assign) AWSEC2VpnStaticRouteSource source;

/**
 <p>The current state of the static route.</p>
 */
@property (nonatomic, assign) AWSEC2VpnState state;

@end

/**
 <p>The tunnel options for a VPN connection.</p>
 */
@interface AWSEC2VpnTunnelOptionsSpecification : AWSModel


/**
 <p>The pre-shared key (PSK) to establish initial authentication between the virtual private gateway and customer gateway.</p><p>Constraints: Allowed characters are alphanumeric characters and ._. Must be between 8 and 64 characters in length and cannot start with zero (0).</p>
 */
@property (nonatomic, strong) NSString * _Nullable preSharedKey;

/**
 <p>The range of inside IP addresses for the tunnel. Any specified CIDR blocks must be unique across all VPN connections that use the same virtual private gateway. </p><p>Constraints: A size /30 CIDR block from the <code>169.254.0.0/16</code> range. The following CIDR blocks are reserved and cannot be used:</p><ul><li><p><code>169.254.0.0/30</code></p></li><li><p><code>169.254.1.0/30</code></p></li><li><p><code>169.254.2.0/30</code></p></li><li><p><code>169.254.3.0/30</code></p></li><li><p><code>169.254.4.0/30</code></p></li><li><p><code>169.254.5.0/30</code></p></li><li><p><code>169.254.169.252/30</code></p></li></ul>
 */
@property (nonatomic, strong) NSString * _Nullable tunnelInsideCidr;

@end

NS_ASSUME_NONNULL_END
