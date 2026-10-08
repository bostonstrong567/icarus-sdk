// /Game/BP/AI/Bosses/BT/BTS_Check_Ape_Enraged.BTS_Check_Ape_Enraged_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_Check_Ape_Enraged_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cooldown;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ModifierLifeTime;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinimumHealthPercent;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorState* OwnerActorState;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxHealthPercent;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector KeyToSet;  // 0x00C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastEnrageTime;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* OwningIcarusCharacter;  // 0x00F0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTS_Check_Ape_Enraged(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
