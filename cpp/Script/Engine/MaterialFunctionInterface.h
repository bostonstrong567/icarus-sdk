// /Script/Engine.MaterialFunctionInterface
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h

UCLASS(Abstract, MinimalAPI)
class UMaterialFunctionInterface : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FGuid StateId;  // 0x0028, size 0x10
protected:
    UPROPERTY() EMaterialFunctionUsage MaterialFunctionUsage;  // 0x0038, size 0x1

    // Virtual functions that start here:
    //   GetBaseFunction, GetDescription, GetMaterialFunctionUsage, OverrideNamedFontParameter
    //   OverrideNamedRuntimeVirtualTextureParameter, OverrideNamedScalarParameter
    //   OverrideNamedStaticComponentMaskParameter, OverrideNamedStaticSwitchParameter
    //   OverrideNamedTextureParameter, OverrideNamedVectorParameter, ValidateFunctionUsage
};
