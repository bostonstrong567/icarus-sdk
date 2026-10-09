// /Script/Icarus.IcarusLinkedActorPanelBase
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x260, declared in Icarus/Source/Icarus/UI/IcarusLinkedActorPanelBase.h

UCLASS(EditInlineNew)
class UIcarusLinkedActorPanelBase : public UUserWidget
{
public:
    UFUNCTION(BlueprintImplementableEvent) AActor* GetLinkedActor() const;  // parameters 0x8
};
