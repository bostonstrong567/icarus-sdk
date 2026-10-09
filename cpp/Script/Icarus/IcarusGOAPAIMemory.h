// /Script/Icarus.IcarusGOAPAIMemory
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/AI/IcarusGOAPAIMemory.h

UCLASS(Config=Engine)
class UIcarusGOAPAIMemory : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusGOAPAIFact> InteractableObjectMemories;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPController* CurrentController;  // 0x00C0, size 0x8
private:
    float UpdateTimer;  // 0x00C8, not reflected
    float UpdateThreshold;  // 0x00CC, not reflected
public:
    UFUNCTION(BlueprintCallable) FIcarusGOAPAIFact GetClosestKnownInteractable(AActor* Actor, EGOAPObjectType ObjectType, bool bOnlyCurrentlyPerceived);  // parameters 0x70
    UFUNCTION(BlueprintCallable) TArray<FIcarusGOAPAIFact> GetDistanceSortedKnownInteractables(AActor* Actor, EGOAPObjectType ObjectType, bool bOnlyCurrentlyPerceived);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool GetFactForObject(AActor* Object, FIcarusGOAPAIFact& FoundFact);  // parameters 0x69
    UFUNCTION(BlueprintCallable) TArray<FIcarusGOAPAIFact> GetKnownIteractablesOfType(EGOAPObjectType ObjectType, bool bOnlyCurrentlyPerceived);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UpdateObject(EGOAPObjectType ObjectType, AActor* Object, FAIStimulus NewAIStimulus, EGOAPFactSource FactSource);  // parameters 0x4D
};
