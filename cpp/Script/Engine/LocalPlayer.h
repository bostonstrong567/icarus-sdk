// /Script/Engine.LocalPlayer
// Derives from: UPlayer > UObject
// size 0x258, declared in Engine/Source/Runtime/Engine/Classes/Engine/LocalPlayer.h

UCLASS(Transient, Config=Engine)
class ULocalPlayer : public UPlayer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    FUniqueNetIdRepl CachedUniqueNetId;  // 0x0048, not reflected
    UPROPERTY() UGameViewportClient* ViewportClient;  // 0x0070, size 0x8
    FVector2D Origin;  // 0x0078, not reflected
    FVector2D Size;  // 0x0080, not reflected
    FVector LastViewLocation;  // 0x0088, not reflected
    UPROPERTY(Config) TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;  // 0x0094, size 0x1
    UPROPERTY() TSubclassOf<APlayerController> PendingLevelPlayerControllerClass;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, Transient) uint8 bSentSplitJoin : 1;  // 0x00A0, mask 0x01
protected:
    FReply SlateOperations;  // 0x01A0, not reflected
private:
    TArray<FSceneViewStateReference,TSizedDefaultAllocator<32> > ViewStates;  // 0x00A8, not reflected
    UPROPERTY() int32 ControllerId;  // 0x00B8, size 0x4
    ULocalPlayer::FOnControllerIdChanged OnControllerIdChangedEvent;  // 0x00C0, not reflected
    FSubsystemCollection<ULocalPlayerSubsystem> SubsystemCollection;  // 0x00D8, not reflected

    // Virtual functions that start here:
    //   CalcSceneView, GetGameLoginOptions, GetNickname, GetProjectionData, GetViewPoint, InitOnlineSession
    //   PlayerAdded, PlayerRemoved, SendSplitJoin, SetControllerId, SpawnPlayActor
};
