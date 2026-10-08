// /Script/Icarus.FishSetup
// size 0xC8, declared in Icarus/Source/Icarus/AI/Fish/FishActor.h

USTRUCT()
struct FFishSetup : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AFishActor> FishActor;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementSpeed;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D SizeRange;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle ItemReward;  // 0x004C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAwarenessEnabled;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AwarenessMovementSpeed;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAwarenessDistance;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAggressive;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackDamage;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> MovementSound;  // 0x0078, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UFMODEvent> AttackSound;  // 0x00A0, size 0x28
};
