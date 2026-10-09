// /Script/Paper2D.PaperTerrainSplineComponent
// Derives from: USplineComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x560, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTerrainSplineComponent.h

UCLASS(Config=Engine)
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnSplineEdited;  // 0x0548, not reflected
};
