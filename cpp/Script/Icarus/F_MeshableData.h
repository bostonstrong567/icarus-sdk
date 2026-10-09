// /Script/Icarus.MeshableData
// size 0x1D0, declared in Icarus/Source/Icarus/Traits/Behaviours/MeshableData.h

USTRUCT()
struct FMeshableData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> ItemMesh;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> ItemActor;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> EquipHandMesh;  // 0x0068, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> EquipHandActor;  // 0x0090, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> EquipBackMesh;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> EquipBackActor;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> VehicleMesh;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> VehicleActor;  // 0x0130, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> DeployableActor;  // 0x0158, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UStreamableRenderAsset> ExtraMesh;  // 0x0180, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AIcarusItem> ExtraActor;  // 0x01A8, size 0x28
};
