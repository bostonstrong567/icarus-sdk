// /Script/Icarus.IcarusGOAPInteractableComponent
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/AI/IcarusGOAPInteractableComponent.h

UCLASS(Config=Engine)
class UIcarusGOAPInteractableComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPObjectType Type;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InUse;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractTime;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UIcarusGOAPAction* CurrentAction;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPController* CurrentInteractionController;  // 0x00C0, size 0x8
    UPROPERTY(BlueprintAssignable) FGOAPInteractionSignature OnInteraction;  // 0x00C8, size 0x1
    UPROPERTY(BlueprintAssignable) FGOAPAbortSignature OnAbort;  // 0x00C9, size 0x1
    UPROPERTY(BlueprintAssignable) FGOAPInteractionCompleteSignature OnInteractionComplete;  // 0x00CA, size 0x1

    UFUNCTION(BlueprintCallable) bool Abort();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool CompleteInteraction();  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool Interact(UIcarusGOAPAction* action, AIcarusNPCGOAPController* controller);  // parameters 0x11
};
