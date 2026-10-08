// /Script/Icarus.ArmourData
// size 0x300, declared in Icarus/Source/Icarus/Traits/Behaviours/ArmourData.h

USTRUCT()
struct FArmourData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> ArmourMesh;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> HabArmourMesh;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> FemaleMeshVariant;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<USkeletalMesh> FirstPersonMeshVariant;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHideFirstPersonUndersuit;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAnimInstance> AnimBlueprintClass;  // 0x00C0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAnimInstance> FemaleAnimBlueprintClass;  // 0x00E8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UAnimInstance> FirstPersonAnimBlueprintClass;  // 0x0110, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UGFurComponent> TPFurClass;  // 0x0138, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UGFurComponent> FPFurClass;  // 0x0160, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBaseStatsEnum, int32> ArmourStats;  // 0x0188, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EArmourType ArmourType;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FArmourSetsRowHandle ArmourSet;  // 0x01DC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FArmourRowHandle> ImplicitDefaultArmour;  // 0x01F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bOverrideDefaultMaterials;  // 0x0208, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInterface>> ArmourMeshMaterialOverrides;  // 0x0210, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInterface>> FemaleArmourMeshMaterialOverrides;  // 0x0260, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UMaterialInterface>> FPArmourMeshMaterialOverrides;  // 0x02B0, size 0x50
};
