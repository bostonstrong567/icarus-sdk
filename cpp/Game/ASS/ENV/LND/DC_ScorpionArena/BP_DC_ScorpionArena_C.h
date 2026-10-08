// /Game/ASS/ENV/LND/DC_ScorpionArena/BP_DC_ScorpionArena.BP_DC_ScorpionArena_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x420, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DC_ScorpionArena_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_01;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_05;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_04;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_03;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_02;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ValidNavigationPoints;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_014;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift8;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift7;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift6;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift5;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift4;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift2;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift1;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_SandDrift3;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_011;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_010;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_09;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BossSpawn;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_013;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_012;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_011;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_01;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_07;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_06;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_09;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_08;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_05;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_04;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_03;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_01;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_02;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_07;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_06;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_05;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_04;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_010;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_03;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_MED_RiverCliff_02;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ROCK_DC_LRG_RiverCliff_08;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DC_ScorpionArena;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0418, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_DC_ScorpionArena(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void IsNavigationValid(bool& IsValid);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnPostDirtyNavmesh_Event();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
