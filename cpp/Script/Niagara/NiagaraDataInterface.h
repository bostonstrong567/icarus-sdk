// /Script/Niagara.NiagaraDataInterface
// Derives from: UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterface.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TUniquePtr<FNiagaraDataInterfaceProxy,TDefaultDelete<FNiagaraDataInterfaceProxy> > Proxy;  // 0x0028, protected
    uint32 : 1 bRenderDataDirty;  // 0x0030, protected
    uint32 : 1 bUsedByGPUEmitter;  // 0x0030, protected

    // Virtual functions that start here:
    //   CalculateTickGroup, CanExecuteOnTarget, CanExposeVariables, CanRenderVariablesToCanvas
    //   CopyToInternal, DestroyPerInstanceData, Equals, GPUContextInit, GetAssetTagsForContext
    //   GetCanvasVariables, GetEmitterDependencies, GetExposedVariableValue, GetExposedVariables
    //   GetFunctions, GetVMExternalFunction, HasPostSimulateTick, HasPreSimulateTick, HasTickGroupPrereqs
    //   InitPerInstanceData, ModifyCompilationEnvironment, NeedsGPUContextInit
    //   PerInstanceDataPassedToRenderThreadSize, PerInstanceDataSize, PerInstanceTick
    //   PerInstanceTickPostSimulate, PostExecute, ProvidePerInstanceDataForRenderThread
    //   PushToRenderThreadImpl, ReadsEmitterParticleData, RenderVariableToCanvas, RequiresDepthBuffer
    //   RequiresDistanceFieldData, RequiresEarlyViewData
};
