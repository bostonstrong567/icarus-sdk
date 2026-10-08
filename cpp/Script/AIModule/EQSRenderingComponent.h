// /Script/AIModule.EQSRenderingComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EQSRenderingComponent.h

UCLASS(Config=Engine)
class UEQSRenderingComponent : public UPrimitiveComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FString DrawFlagName;  // 0x0450
    uint32 : 1 bDrawOnlyWhenSelected;  // 0x0460
    TArray<FDebugRenderSceneProxy::FSphere,TSizedDefaultAllocator<32> > DebugDataSolidSpheres;  // 0x0468, protected
    TArray<FDebugRenderSceneProxy::FText3d,TSizedDefaultAllocator<32> > DebugDataTexts;  // 0x0478, protected
};
