// /Script/Engine.LocalPlayer
// Derives from: UPlayer > UObject
// size 0x258, declared in Engine/Source/Runtime/Engine/Classes/Engine/LocalPlayer.h

UCLASS(Transient, Config=Engine)
class ULocalPlayer : public UPlayer
{
public:
    UPROPERTY() UGameViewportClient* ViewportClient;  // 0x0070, size 0x8
    UPROPERTY(Config) TEnumAsByte<EAspectRatioAxisConstraint> AspectRatioAxisConstraint;  // 0x0094, size 0x1
    UPROPERTY() TSubclassOf<APlayerController> PendingLevelPlayerControllerClass;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, Transient) uint8 bSentSplitJoin : 1;  // 0x00A0, mask 0x01
    UPROPERTY() int32 ControllerId;  // 0x00B8, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FUniqueNetIdRepl CachedUniqueNetId;  // 0x0048
    FVector2D Origin;  // 0x0078
    FVector2D Size;  // 0x0080
    FVector LastViewLocation;  // 0x0088
    TArray<FSceneViewStateReference,TSizedDefaultAllocator<32> > ViewStates;  // 0x00A8, private
    ULocalPlayer::FOnControllerIdChanged OnControllerIdChangedEvent;  // 0x00C0, private
    FSubsystemCollection<ULocalPlayerSubsystem> SubsystemCollection;  // 0x00D8, private
    FReply SlateOperations;  // 0x01A0, protected

    // Virtual functions that start here:
    //   CalcSceneView, GetGameLoginOptions, GetNickname, GetProjectionData, GetViewPoint, InitOnlineSession
    //   PlayerAdded, PlayerRemoved, SendSplitJoin, SetControllerId, SpawnPlayActor
};
