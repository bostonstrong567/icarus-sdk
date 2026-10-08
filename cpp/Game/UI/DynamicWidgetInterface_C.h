// /Game/UI/DynamicWidgetInterface.DynamicWidgetInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UDynamicWidgetInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void IsEscapeMenuDisabled(bool& Disabled);  // parameters 0x1
};
