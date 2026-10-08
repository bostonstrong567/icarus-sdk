// /Script/SmoothSyncPlugin.SmoothSync
// Derives from: UActorComponent > UObject
// size 0x370, declared in Icarus/Plugins/SmoothSync/Source/SmoothSyncPlugin/Public/SmoothSync.h

UCLASS(Config=Engine)
class USmoothSync : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float interpolationBackTime;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ExtrapolationMode extrapolationMode;  // 0x010C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool useExtrapolationTimeLimit;  // 0x010D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float extrapolationTimeLimit;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool useExtrapolationDistanceLimit;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float extrapolationDistanceLimit;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sendPositionThreshold;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sendRotationThreshold;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sendScaleThreshold;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sendVelocityThreshold;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sendAngularVelocityThreshold;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float receivedPositionThreshold;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float receivedRotationThreshold;  // 0x0134, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float positionSnapThreshold;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float rotationSnapThreshold;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float scaleSnapThreshold;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float timeSmoothing;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float positionLerpSpeed;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float rotationLerpSpeed;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float scaleLerpSpeed;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) SyncMode syncPosition;  // 0x0154, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) SyncMode syncRotation;  // 0x0155, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) SyncMode syncScale;  // 0x0156, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) SyncMode syncVelocity;  // 0x0157, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) SyncMode syncAngularVelocity;  // 0x0158, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool syncMovementMode;  // 0x0159, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isPositionCompressed;  // 0x015A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isRotationCompressed;  // 0x015B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isScaleCompressed;  // 0x015C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isVelocityCompressed;  // 0x015D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isAngularVelocityCompressed;  // 0x015E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float sendRate;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool isUsingOriginRebasing;  // 0x0164, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool alwaysSendOrigin;  // 0x0165, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool syncOwnershipChange;  // 0x0166, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* realComponentToSync;  // 0x01F8, size 0x8
    UPROPERTY(BlueprintReadOnly) float interpolationTime;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float atRestPositionThreshold;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float atRestRotationThreshold;  // 0x0354, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    TArray<unsigned char,TSizedDefaultAllocator<32> > sendingCharArray;  // 0x00B0, private
    int32 sendingCharArraySize;  // 0x00C0, private
    TArray<unsigned char,TSizedDefaultAllocator<32> > readingCharArray;  // 0x00C8, private
    int32 readingCharArraySize;  // 0x00D8, private
    TArray<float,TSizedDefaultAllocator<32> > ownerTimeOffsets;  // 0x00E0, private
    float averageOwnerTimeOffset;  // 0x00F0, private
    int32 samePositionSentCount;  // 0x00F4, private
    int32 sameRotationSentCount;  // 0x00F8, private
    bool wasAttachedLastTick;  // 0x00FC, private
    uint8 previousReceivedOwnerInt;  // 0x00FD, private
    AController * owningControllerLastFrame;  // 0x0100, private
    SmoothState * * stateBuffer;  // 0x0168
    int32 calculatedStateBufferSize;  // 0x0170
    int32 stateCount;  // 0x0174
    bool dontEasePosition;  // 0x0178
    bool dontEaseScale;  // 0x0179
    bool dontEaseRotation;  // 0x017A
    float lastTeleportOwnerTime;  // 0x017C
    float lastTimeStateWasSent;  // 0x0180
    FVector lastPositionWhenStateWasSent;  // 0x0184
    FQuat lastRotationWhenStateWasSent;  // 0x0190
    FVector lastScaleWhenStateWasSent;  // 0x01A0
    FVector lastVelocityWhenStateWasSent;  // 0x01AC
    FVector lastAngularVelocityWhenStateWasSent;  // 0x01B8
    AActor * realObjectToSync;  // 0x01C8
    UMovementComponent * movementComponent;  // 0x01D0
    UCharacterMovementComponent * characterMovementComponent;  // 0x01D8
    FIntVector lastOriginWhenStateWasSent;  // 0x01E0
    FIntVector lastOriginWhenStateWasReceived;  // 0x01EC
    SmoothState * extrapolationEndState;  // 0x0200
    float extrapolationStopTime;  // 0x0208
    bool forceStateSend;  // 0x020C
    bool sendPosition;  // 0x020D
    bool sendRotation;  // 0x020E
    bool sendScale;  // 0x020F
    bool sendVelocity;  // 0x0210
    bool sendAngularVelocity;  // 0x0211
    bool sendMovementMode;  // 0x0212
    bool alwaysSendMovementMode;  // 0x0213
    bool isBeingUsed;  // 0x0214
    float ownerTime;  // 0x021C
    float lastTimeOwnerTimeWasSet;  // 0x0220
    SmoothState * sendingTempState;  // 0x0228
    SmoothState * targetTempState;  // 0x0230
    SmoothState * latestEndStateUsed;  // 0x0238
    FVector latestTeleportedFromPosition;  // 0x0240
    FQuat latestTeleportedFromRotation;  // 0x0250
    UPrimitiveComponent * primitiveComponent;  // 0x0260
    uint8 latestSentMovementMode;  // 0x0268
    TMap<USmoothSync *,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USmoothSync *,bool,0> > wasRelevant;  // 0x0270
    float approximateNetworkTimeOnOwner;  // 0x02C0
    int32 receivedStatesCounter;  // 0x02C4
    float updatedDeltaTime;  // 0x02C8
    bool isSimulatingPhysics;  // 0x02CC
    RestState restStatePosition;  // 0x02CD
    RestState restStateRotation;  // 0x02CE
    float samePositionCount;  // 0x02D0
    float sameRotationCount;  // 0x02D4
    bool changedPositionLastFrame;  // 0x02D8
    bool changedRotationLastFrame;  // 0x02D9
    float atRestThresholdCount;  // 0x02DC
    bool triedToExtrapolateTooFar;  // 0x02E0
    bool extrapolatedLastFrame;  // 0x02E1
    float timeSpentExtrapolating;  // 0x02E4
    bool sendAtPositionalRestMessage;  // 0x02E8
    bool sendAtRotationalRestMessage;  // 0x02E9
    FVector positionLastFrame;  // 0x02EC
    FIntVector originLastFrame;  // 0x02F8
    FQuat rotationLastFrame;  // 0x0310
    FVector linearVelocityLastFrame;  // 0x0320
    FVector angularVelocityLastFrame;  // 0x032C
    FVector latestReceivedVelocity;  // 0x0338
    FVector latestReceivedAngularVelocity;  // 0x0344
    uint8 ownerChangeIndicator;  // 0x0358
    const uint8 positionMask;  // 0x0359
    const uint8 rotationMask;  // 0x035A
    const uint8 scaleMask;  // 0x035B
    const uint8 velocityMask;  // 0x035C
    const uint8 angularVelocityMask;  // 0x035D
    const uint8 movementModeMask;  // 0x035E
    const uint8 atPositionalRestMask;  // 0x035F
    const uint8 atRotationalRestMask;  // 0x0360
    const uint8 originRebaseMask;  // 0x0361
    bool ShouldCleanUp;  // 0x0362
    bool IsTicking;  // 0x0363

    UFUNCTION(Server, BlueprintNativeEvent) void ClientSendsTransformToServer(TArray<uint8> value);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSmoothSyncEnabled() const;  // parameters 0x1
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void ServerSendsTransformToEveryone(TArray<uint8> value);  // parameters 0x10
    UFUNCTION(Server, BlueprintNativeEvent) void SmoothSyncEnableClientToServer(bool enable);  // parameters 0x1
    UFUNCTION(NetMulticast, BlueprintNativeEvent) void SmoothSyncEnableServerToClients(bool enable);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void SmoothSyncTeleportClientToServer(FVector position, FVector rotation, FVector scale, float tempOwnerTime);  // parameters 0x28
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void SmoothSyncTeleportServerToClients(FVector position, FVector rotation, FVector scale, float tempOwnerTime);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void clearBuffer();
    UFUNCTION(BlueprintCallable) void enableSmoothSync(bool enable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void forceStateSendNextFrame();
    UFUNCTION(BlueprintCallable) void setSceneComponentToSync(USceneComponent* theComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void teleport();

    // Virtual functions that start here:
    //   ClientSendsTransformToServer_Implementation, ClientSendsTransformToServer_Validate
    //   ServerSendsTransformToEveryone_Implementation, ServerSendsTransformToEveryone_Validate
    //   SmoothSyncEnableClientToServer_Implementation, SmoothSyncEnableClientToServer_Validate
    //   SmoothSyncEnableServerToClients_Implementation, SmoothSyncEnableServerToClients_Validate
    //   SmoothSyncTeleportClientToServer_Implementation, SmoothSyncTeleportClientToServer_Validate
    //   SmoothSyncTeleportServerToClients_Implementation, SmoothSyncTeleportServerToClients_Validate
};
