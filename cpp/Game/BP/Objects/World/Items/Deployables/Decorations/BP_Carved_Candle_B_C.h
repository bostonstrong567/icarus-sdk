// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Carved_Candle_B.BP_Carved_Candle_B_C
// Derives from: ABP_Light_Fire_Base_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x770, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Carved_Candle_B_C : public ABP_Light_Fire_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0760, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Candle_FX;  // 0x0768, size 0x8
};
