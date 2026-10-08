// /Game/UI/Compass/UMG_IcarusCompassIcon.UMG_IcarusCompassIcon_C
// Derives from: UIcarusCompassIcon > UUserWidget > UWidget > UVisual > UObject
// size 0x408, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_IcarusCompassIcon_C : public UIcarusCompassIcon
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Waypoint;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMapIconsData CachedMapIconData_0;  // 0x0338, size 0xB8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FadeOutOverDistance_0;  // 0x03F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredOpacity;  // 0x03F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOrchestrationEventsEnum Event_to_Check;  // 0x03F8, size 0x10, named "Event to Check"

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_IcarusCompassIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnMapComponentVisibilityChanged();
};
