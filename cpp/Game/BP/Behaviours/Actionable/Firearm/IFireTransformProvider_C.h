// /Game/BP/Behaviours/Actionable/Firearm/IFireTransformProvider.IFireTransformProvider_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UIFireTransformProvider_C : public UInterface
{
public:

    UFUNCTION(BlueprintCallable) void GetFireTransform(bool& Success, FTransform& FireTransform);  // parameters 0x40
};
