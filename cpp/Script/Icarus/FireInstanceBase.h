// /Script/Icarus.FireInstanceBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x308, declared in Icarus/Source/Icarus/Systems/Disaster/FireInstanceBase.h

UCLASS(Abstract, Config=Engine)
class AFireInstanceBase : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UConcaveHullMesh* PropagatedMesh;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bPropagatedMeshDirty;  // 0x02C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentLifeTime;  // 0x02CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UFlammableInstance*> Instances;  // 0x02D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugPropagationMesh;  // 0x02E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBoxSphereBounds InstancesBounds;  // 0x02E4, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bInstanceBoundsDirty;  // 0x0300, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) bool CheckBoundsOverlapPropagationMesh(const FBoxSphereBounds& Bounds) const;  // parameters 0x1D
    UFUNCTION(BlueprintCallable) float GetAverageTemperature();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UFireControllerComponent* GetFireController() const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnFlammableInstanceAdded(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnFlammableInstanceRemoved(UFlammableInstance* Instance);  // parameters 0x8
    UFUNCTION() void OnFlammableInstanceState_Destroyed_Enter(UFlammableInstance* Instance, UFlammableState* FlammableState);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnPropagatedMeshGenerated();
    UFUNCTION(BlueprintNativeEvent) void OnTransferredFrom(AFireInstanceBase* Source, UFlammableInstance* Instance);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnTransferredTo(AFireInstanceBase* Dest, UFlammableInstance* Instance);  // parameters 0x10

    // Virtual functions that start here:
    //   GeneratePropagatedMesh, IsReadyToBeDestroyed, OnFlammableInstanceAdded_Implementation
    //   OnFlammableInstanceRemoved_Implementation, OnPropagatedMeshGenerated_Implementation
    //   OnTransferredFrom_Implementation, OnTransferredTo_Implementation, RecalculateInstancesBounds
};
