// /Game/BP/Systems/TitleScreen/BP_StartMapController.BP_StartMapController_C
// Derives from: APlayerController > AController > AActor > UObject
// size 0x5A1, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_StartMapController_C : public APlayerController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_TitleScreenInterface_C* UserInterface;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowEscape;  // 0x05A0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_StartMapController(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
