// /Script/Engine.MaterialShadingModelField
// size 0x2, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FMaterialShadingModelField
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() uint16 ShadingModelField;  // 0x0000, size 0x2
};
