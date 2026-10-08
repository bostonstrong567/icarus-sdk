// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Gold_Candle.BP_Gold_Candle_C
// Derives from: ABP_Light_Fire_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x788, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Gold_Candle_C : public ABP_Light_Fire_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Torch_FX4;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0768, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Torch_FX2;  // 0x0770, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Torch_FX1;  // 0x0778, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Torch_FX3;  // 0x0780, size 0x8
};
