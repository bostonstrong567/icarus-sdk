// /Script/Engine.HierarchicalLODSetup
// Derives from: UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h

UCLASS()
class UHierarchicalLODSetup : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FHierarchicalSimplification> HierarchicalLODSetup;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial;  // 0x0038, size 0x28
};
