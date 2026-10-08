// /Game/BP/World/Effects/BP_LavaSpot_Flamethrower.BP_LavaSpot_Flamethrower_C
// Derives from: AIcarusActor > AActor > UObject
// size 0x335, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LavaSpot_Flamethrower_C : public AIcarusActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* SizzleAudio;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LavaSpot_Bubbling;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_LavaSmoke;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Lava_Splash;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_LC_LavaCold_05;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F0, size 0x8
    UPROPERTY() float Timeline_1_NewTrack_0_BFA7F5C7455AC3DAAAE68CAF85F60BCD;  // 0x02F8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_1__Direction_BFA7F5C7455AC3DAAAE68CAF85F60BCD;  // 0x02FC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_1;  // 0x0300, size 0x8
    UPROPERTY() float Timeline_0_NewTrack_0_2E8BB52B4FCD302AB9D00DAAC44613F2;  // 0x0308, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_2E8BB52B4FCD302AB9D00DAAC44613F2;  // 0x030C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Edge_Taper;  // 0x0318, size 0x4, named "Edge Taper"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlowSpeed;  // 0x031C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Flowing;  // 0x0320, size 0x4, named "Base to Flowing"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Dryness;  // 0x0324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Base_to_Patchy;  // 0x0328, size 0x4, named "Base to Patchy"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeTaper;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeNoise;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBubbling;  // 0x0334, size 0x1

    UFUNCTION(BlueprintCallable) void Activate();
    UFUNCTION(BlueprintCallable) void Dry();
    UFUNCTION() void ExecuteUbergraph_BP_LavaSpot_Flamethrower(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION() void Timeline_1__FinishedFunc();
    UFUNCTION() void Timeline_1__UpdateFunc();
};
