// /Game/BP/AI/Bosses/BP_FactionBoss_Controller_SandWorm.BP_FactionBoss_Controller_SandWorm_C
// Derives from: ABP_FactionBoss_Controller_C > AAIController > AController > AActor > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_FactionBoss_Controller_SandWorm_C : public ABP_FactionBoss_Controller_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentStateBlackboardKey;  // 0x0348, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FactionBoss_Controller_SandWorm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
