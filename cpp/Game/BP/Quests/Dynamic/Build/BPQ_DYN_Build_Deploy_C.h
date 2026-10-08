// /Game/BP/Quests/Dynamic/Build/BPQ_DYN_Build_Deploy.BPQ_DYN_Build_Deploy_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_DYN_Build_Deploy_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Visualizer_Beam;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Visualizer;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* DeployZone;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0490, size 0x8
    UPROPERTY() float Timeline_0_Thickness_20DB18954C4458E2B56AA4B7CBE78997;  // 0x0498, size 0x4
    UPROPERTY() float Timeline_0_Opacity_20DB18954C4458E2B56AA4B7CBE78997;  // 0x049C, size 0x4
    UPROPERTY() float Timeline_0_Radius_20DB18954C4458E2B56AA4B7CBE78997;  // 0x04A0, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_20DB18954C4458E2B56AA4B7CBE78997;  // 0x04A4, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxPlacementDistance;  // 0x04B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* As_Icarus_Item;  // 0x04B8, size 0x8, named "As Icarus Item"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DeployNotify(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BPQ_DYN_Build_Deploy(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast) void SetScanLocation(FLinearColor LocationVector);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION(BlueprintCallable) void Trigger_Pulse();  // named "Trigger Pulse"
    UFUNCTION(BlueprintCallable) void TriggerModifier();
};
