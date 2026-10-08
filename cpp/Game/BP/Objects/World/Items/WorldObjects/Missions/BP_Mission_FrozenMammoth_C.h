// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_FrozenMammoth.BP_Mission_FrozenMammoth_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x378, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_FrozenMammoth_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavBlockingStaticMeshComponent* NavBlockingStaticMesh;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SteamMammoth;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FrozenObjectComponent_C* BP_FrozenObjectComponent;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Ice;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0370, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Mission_FrozenMammoth(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FrozenStateUpdated(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InventoryCheck();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
