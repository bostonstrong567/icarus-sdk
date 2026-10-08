// /Game/BP/MiscConstructs/HighlightableCustomiserInterface.HighlightableCustomiserInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UHighlightableCustomiserInterface_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void GetDescription(FText& Description);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetDisplayName(FText& Name);  // parameters 0x18
};
