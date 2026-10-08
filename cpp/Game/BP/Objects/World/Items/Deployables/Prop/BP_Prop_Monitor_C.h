// /Game/BP/Objects/World/Items/Deployables/Prop/BP_Prop_Monitor.BP_Prop_Monitor_C
// Derives from: ABP_Painting_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x760, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prop_Monitor_C : public ABP_Painting_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0758, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Prop_Monitor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnLoaded_D39979FE4B8D29917F0665AB8124AB69(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TriggerPaintingUpdate();
    UFUNCTION(BlueprintCallable) void UpdatePaintingDisplay();
};
