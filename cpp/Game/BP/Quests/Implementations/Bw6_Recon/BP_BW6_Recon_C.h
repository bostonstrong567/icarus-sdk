// /Game/BP/Quests/Implementations/Bw6_Recon/BP_BW6_Recon.BP_BW6_Recon_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Recon_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CompleteAudio();
    UFUNCTION(BlueprintCallable) void Custom(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_BW6_Recon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void MissionComplete();
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
