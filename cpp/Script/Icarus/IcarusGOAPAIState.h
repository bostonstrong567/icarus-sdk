// /Script/Icarus.IcarusGOAPAIState
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Icarus/Source/Icarus/AI/IcarusGOAPAIState.h

UCLASS(Config=Engine)
class UIcarusGOAPAIState : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentTarget;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPObjectType SearchingInteractableType;  // 0x00B8, size 0x1

    UFUNCTION(BlueprintCallable) bool ClearAIState();  // parameters 0x1
};
