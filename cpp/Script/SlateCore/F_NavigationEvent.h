// /Script/SlateCore.NavigationEvent
// size 0x20, declared in Engine/Source/Runtime/SlateCore/Public/Input/Events.h

USTRUCT()
struct FNavigationEvent : public FInputEvent
{
private:
    EUINavigation NavigationType;  // 0x0018, not reflected
    ENavigationGenesis NavigationGenesis;  // 0x0019, not reflected
};
