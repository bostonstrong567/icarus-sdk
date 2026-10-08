// /Game/BP/AI/Bosses/BT/BTS_UpdateNearbyProjectile.BTS_UpdateNearbyProjectile_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xE4, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_UpdateNearbyProjectile_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector NearbyProjectileActor;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* TargetedProjectile;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* CharacterRef;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* AttackProjectileMontage;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumProjectileSpeed;  // 0x00E0, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_UpdateNearbyProjectile(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
