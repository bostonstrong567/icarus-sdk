// /Script/Engine.WorldContext
// size 0x288, declared in Engine/Source/Runtime/Engine/Classes/Engine/Engine.h

USTRUCT()
struct FWorldContext
{
    UPROPERTY() FURL LastURL;  // 0x00D0, size 0x68
    UPROPERTY() FURL LastRemoteURL;  // 0x0138, size 0x68
    UPROPERTY() UPendingNetGame* PendingNetGame;  // 0x01A0, size 0x8
    UPROPERTY() TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad;  // 0x01A8, size 0x10
    UPROPERTY() TArray<ULevel*> LoadedLevelsForPendingMapChange;  // 0x01C8, size 0x10
    UPROPERTY() TArray<UObjectReferencer*> ObjectReferencers;  // 0x01F0, size 0x10
    UPROPERTY() TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates;  // 0x0200, size 0x10
    UPROPERTY() UGameViewportClient* GameViewport;  // 0x0210, size 0x8
    UPROPERTY() UGameInstance* OwningGameInstance;  // 0x0218, size 0x8
    UPROPERTY(Transient) TArray<FNamedNetDriver> ActiveNetDrivers;  // 0x0220, size 0x10

    // Not reflected:
    TEnumAsByte<enum EWorldType::Type> WorldType;  // 0x0000
    FSeamlessTravelHandler SeamlessTravelHandler;  // 0x0008
    FName ContextHandle;  // 0x00B0
    FString TravelURL;  // 0x00B8
    uint8 TravelType;  // 0x00C8
    TArray<FName,TSizedDefaultAllocator<32> > LevelsToLoadForPendingMapChange;  // 0x01B8
    FString PendingMapChangeFailureDescription;  // 0x01D8
    uint32 : 1 bShouldCommitPendingMapChange;  // 0x01E8
    int32 PIEInstance;  // 0x0230
    FString PIEPrefix;  // 0x0238
    ERHIFeatureLevel::Type PIEWorldFeatureLevel;  // 0x0248
    bool RunAsDedicated;  // 0x024C
    bool bWaitingOnOnlineSubsystem;  // 0x024D
    uint32 AudioDeviceID;  // 0x0250
    FString CustomDescription;  // 0x0258
    float PIEFixedTickSeconds;  // 0x0268
    float PIEAccumulatedTickSeconds;  // 0x026C
    TArray<UWorld * *,TSizedDefaultAllocator<32> > ExternalReferences;  // 0x0270
    UWorld * ThisCurrentWorld;  // 0x0280
};
