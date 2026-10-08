// /Game/BP/AI/Bosses/BT/BTS_HitReactIfDamaged_Child.BTS_HitReactIfDamaged_Child_C
// Derives from: UBTS_HitReactIfDamaged_C > UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x140, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_HitReactIfDamaged_Child_C : public UBTS_HitReactIfDamaged_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FilterKey;  // 0x0118, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTS_HitReactIfDamaged_Child(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
};
