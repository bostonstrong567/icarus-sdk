// /Script/Icarus.SettingWidget_Language
// Derives from: USettingWidget > UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x3A0, declared in Icarus/Source/Icarus/UI/Settings/SettingWidget_Language.h

UCLASS(EditInlineNew)
class USettingWidget_Language : public USettingWidget
{
public:
    TArray<FText,TSizedDefaultAllocator<32> > Options;  // 0x0388, not reflected

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetLanguage(FString Language);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void SetOptions(const TArray<FText>& NewOptions);  // parameters 0x10
};
