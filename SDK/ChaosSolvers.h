// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0 (1)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinVolume; // 0xC (4)
};

// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0 (1)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinImpulse; // 0xC (4)
};

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0 (1)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinVolume; // 0xC (4)
};

