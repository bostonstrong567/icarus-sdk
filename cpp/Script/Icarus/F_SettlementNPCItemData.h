// /Script/Icarus.SettlementNPCItemData
// size 0x160, declared in Icarus/Source/Icarus/Settlement/SettlementDataStructs.h

USTRUCT()
struct FSettlementNPCItemData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStaticMesh> StaticMesh;  // 0x0030, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> SkeletalMesh;  // 0x0058, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAnimInstance> AnimBlueprint;  // 0x0080, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UMaterialInterface>> MaterialOverrides;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> EquipMontage;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UAnimMontage> UnequipMontage;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AttachSocket;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform AttachmentOffset;  // 0x0110, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FNPCWeaponRowHandle WeaponConfig;  // 0x0140, size 0x18
};
