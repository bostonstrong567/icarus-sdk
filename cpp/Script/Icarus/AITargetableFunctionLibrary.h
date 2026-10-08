// /Script/Icarus.AITargetableFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/AITargetable.h

UCLASS()
class UAITargetableFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static EStealthAttackType GetTargetStealth(AActor* TargetableActor);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool IsActorTargetable(AActor* Actor, bool bOnlyAliveActors);  // parameters 0xA
    UFUNCTION(BlueprintCallable) static void IsHostileTowards(AActor* SelfTargetable, AActor* OtherActorTargetable, ERelationshipType& OutRelationshipSwitch, ERelationshipType& OutRelationshipType);  // parameters 0x12
};
