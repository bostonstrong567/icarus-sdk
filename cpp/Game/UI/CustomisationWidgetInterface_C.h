// /Game/UI/CustomisationWidgetInterface.CustomisationWidgetInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UCustomisationWidgetInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetCameraFocus(FPreviewCameraSettingsEnum& CameraFocus);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetCosmeticData(FCharacterCosmetics& CosmeticData);  // parameters 0x80
};
