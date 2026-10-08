// /Script/AIModule.AISense_Damage
// Derives from: UAISense > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Damage.h

UCLASS(Config=Engine)
class UAISense_Damage : public UAISense
{
public:
    UPROPERTY() TArray<FAIDamageEvent> RegisteredEvents;  // 0x0080, size 0x10

    UFUNCTION(BlueprintCallable) static void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag);  // parameters 0x3C
};
