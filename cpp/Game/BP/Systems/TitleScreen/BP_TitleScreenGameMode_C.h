// /Game/BP/Systems/TitleScreen/BP_TitleScreenGameMode.BP_TitleScreenGameMode_C
// Derives from: AIcarusGameModeTitlescreen > AIcarusGameModeBase > AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x328, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ABP_TitleScreenGameMode_C : public AIcarusGameModeTitlescreen
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0320, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_TitleScreenGameMode(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
