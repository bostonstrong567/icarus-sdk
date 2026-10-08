// /Script/Engine.NavLinkDefinition
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h

UCLASS(Abstract, Config=Engine)
class UNavLinkDefinition : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FNavigationLink> Links;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNavigationSegmentLink> SegmentLinks;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bHasInitializedAreaClasses;  // 0x0048, private
    uint32 : 1 bHasDeterminedMetaAreaClass;  // 0x0048, private
    uint32 : 1 bHasMetaAreaClass;  // 0x0048, private
    uint32 : 1 bHasDeterminedAdjustableLinks;  // 0x0048, private
    uint32 : 1 bHasAdjustableLinks;  // 0x0048, private
};
