// /Game/BP/AI/Bosses/BT/BTS_HitReactIfDamaged.BTS_HitReactIfDamaged_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x110, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_HitReactIfDamaged_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* AdditiveHitReact;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> MontageSections;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cooldown;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinimumDamage;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReactChance;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UActorState* OwnerActorState;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastReactTime;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* OwningIcarusCharacter;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OptionalBoolKeyToSet;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D RandomInitialCooldown;  // 0x0108, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTS_HitReactIfDamaged(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
