// /Script/Engine.ReporterBase
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Debug/ReporterBase.h

UCLASS(Abstract)
class UReporterBase : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    bool bVisible;  // 0x0028

    // Virtual functions that start here:
    //   Draw, ToScreenSpace
};
