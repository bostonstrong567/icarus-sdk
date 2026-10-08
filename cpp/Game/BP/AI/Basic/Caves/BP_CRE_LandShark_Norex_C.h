// /Game/BP/AI/Basic/Caves/BP_CRE_LandShark_Norex.BP_CRE_LandShark_Norex_C
// Derives from: ABP_FactionBoss_SandWorm_C > ABP_FactionBoss_Base_C > AIcarusPawn > APawn > AActor > UObject
// size 0x678, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_CRE_LandShark_Norex_C : public ABP_FactionBoss_SandWorm_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0660, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVocalisationComponent* Vocalisation;  // 0x0668, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0670, size 0x8

    UFUNCTION(BlueprintCallable) void DropScales(AActor* Causer, int32 DamageTaken);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_CRE_LandShark_Norex(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
