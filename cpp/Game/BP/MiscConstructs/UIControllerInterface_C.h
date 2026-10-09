// /Game/BP/MiscConstructs/UIControllerInterface.UIControllerInterface_C
// Derives from: UInterface > UObject
// size 0x28, a blueprint class, blueprint

UCLASS(Config=Engine)
class UUIControllerInterface_C : public UInterface
{
public:
    UFUNCTION(BlueprintCallable) void GetUserInterface(UUMG_UserInterface_Base_C*& UserInterface) const;  // parameters 0x8
};
