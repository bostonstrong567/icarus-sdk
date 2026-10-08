// /Script/LiveLinkComponents.LiveLinkComponentController
// Derives from: UActorComponent > UObject
// size 0x158, declared in Engine/Plugins/Animation/LiveLink/Source/LiveLinkComponents/Public/LiveLinkComponentController.h

UCLASS(Config=Engine)
class ULiveLinkComponentController : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLiveLinkSubjectRepresentation SubjectRepresentation;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) TMap<TSubclassOf<ULiveLinkRole>, ULiveLinkControllerBase*> ControllerMap;  // 0x00C0, size 0x50
    UPROPERTY(EditAnywhere) bool bUpdateInEditor;  // 0x0110, size 0x1
    UPROPERTY(BlueprintAssignable) FLiveLinkTickDelegate OnLiveLinkUpdated;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere) FComponentReference ComponentToControl;  // 0x0128, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableEvaluateLiveLinkWhenSpawnable;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bEvaluateLiveLink;  // 0x0151, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bIsDirty;  // 0x0152, protected
    TOptional<bool> bIsSpawnableCache;  // 0x0153, protected
};
