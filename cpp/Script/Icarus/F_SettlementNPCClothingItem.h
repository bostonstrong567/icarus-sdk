// /Script/Icarus.SettlementNPCClothingItem
// size 0x60, declared in Icarus/Source/Icarus/Settlement/SettlementNPCCharacter.h

USTRUCT()
struct FSettlementNPCClothingItem
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> Mesh;  // 0x0000, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAnimInstance> AnimBP;  // 0x0028, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;  // 0x0050, size 0x10
};
