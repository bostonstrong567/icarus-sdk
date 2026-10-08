// /Game/UI/Popups/BP_SecondaryWidgetInterface.BP_SecondaryWidgetInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_SecondaryWidgetInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
};
