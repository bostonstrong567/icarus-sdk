// /Script/Icarus.BuildingGridManagerSubsystem
// Derives from: UTickableWorldSubsystem > UWorldSubsystem > USubsystem > UObject
// size 0x68, declared in Icarus/Source/Icarus/Subsystems/World/BuildingGridManagerSubsystem.h

UCLASS(Config=Game)
class UBuildingGridManagerSubsystem : public UTickableWorldSubsystem
{
public:
    UPROPERTY(Config) int32 WeatherSortingBudget;  // 0x0040, size 0x4
    UPROPERTY(Config) int32 MaxBuildingDestructionEffectsPerFrame;  // 0x0044, size 0x4
    UPROPERTY() TArray<ABuildingGridBase*> Grids;  // 0x0048, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    int32 CurrentTickIndex;  // 0x0058, private
    int32 NumBuildingDestructionEffectsThisFrame;  // 0x005C, private
    TUniquePtr<FBuildingOctree,TDefaultDelete<FBuildingOctree> > BuildingOctree;  // 0x0060, private

    UFUNCTION(BlueprintCallable) bool CanPlayBuildingDestructionEffects();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) TArray<ABuildingGridBase*> GetBuildingGrids() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) TArray<ABuildingGridBase*> GetBuildingGridsInBiome(const FBiomesRowHandle& Biome) const;  // parameters 0x28
    UFUNCTION(BlueprintCallable) TArray<ABuildingBase*> GetBuildings() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<ABuildingBase*> GetBuildingsNearLocation(const FVector& WorldLocation, const float& MaxDistance) const;  // parameters 0x20
};
