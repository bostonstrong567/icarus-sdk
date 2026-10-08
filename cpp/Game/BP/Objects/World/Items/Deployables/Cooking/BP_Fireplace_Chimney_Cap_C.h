// /Game/BP/Objects/World/Items/Deployables/Cooking/BP_Fireplace_Chimney_Cap.BP_Fireplace_Chimney_Cap_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Fireplace_Chimney_Cap_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Smoke_FX;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Niagara;  // 0x0738, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Fireplace_Chimney_Cap(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseAttachment();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
